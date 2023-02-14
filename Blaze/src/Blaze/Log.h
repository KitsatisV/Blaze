#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Blaze
{
	class BLAZE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger>	s_ClientLogger;
	};
}

//Core log macros
#define BLZ_CORE_TRACE(...)      ::Blaze::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BLZ_CORE_INFO(...)       ::Blaze::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BLZ_CORE_WARN(...)       ::Blaze::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BLZ_CORE_ERROR(...)      ::Blaze::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BLZ_CORE_CRITICAL(...)   ::Blaze::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define BLZ_TRACE(...)           ::Blaze::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BLZ_INFO(...)            ::Blaze::Log::GetClientLogger()->info(__VA_ARGS__)
#define BLZ_WARN(...)            ::Blaze::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BLZ_ERROR(...)           ::Blaze::Log::GetClientLogger()->error(__VA_ARGS__)
#define BLZ_CRITICAL(...)        ::Blaze::Log::GetClientLogger()->critical(__VA_ARGS__)