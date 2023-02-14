#pragma once

#ifdef BLZ_PLATFORM_WINDOWS
	#ifdef BLZ_BUILD_DLL
		#define BLAZE_API __declspec(dllexport)
	#else
		#define BLAZE_API __declspec(dllimport)
	#endif // BLZ_BUILD_DLL
#else
	#error Blaze only supports Windows!
#endif // BLZ_PLATFORM_WINDOWS
