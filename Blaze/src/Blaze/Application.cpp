#include "Application.h"

#include "Blaze/Events/ApplicationEvent.h"
#include "Blaze/Log.h"

namespace Blaze
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		BLZ_TRACE(e);

		while (1);
	}
}