#pragma once

#ifdef INU_PLATFORM_WINDOWS
	#ifdef INU_BUILD_DLL
		#define INU_API __declspec(dllexport)
	#else
		#define INU_API __declspec(dllimport)
	#endif
#else
	#error Inu Engine only supports Windows! (for now...)

#endif