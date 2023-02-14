#pragma once

#ifdef BLZ_PLATFORM_WINDOWS

extern Blaze::Application* Blaze::CreateApplication();

int main(int argc, char** argv)
{
	Blaze::Log::Init();
	BLZ_CORE_ERROR("Initialized Log!");
	int a = 5;
	BLZ_CRITICAL("This is working! Var = {0}", a);

	auto app = Blaze::CreateApplication();
	app->Run();
	delete app;
}

#endif