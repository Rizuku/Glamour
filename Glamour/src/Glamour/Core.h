#pragma once

#ifdef GL_PLATFORM_WINDOWS
	#ifdef GL_BUILD_DLL
		#define GLAMOUR_API __declspec(dllexport)
	#else	
		#define GLAMOUR_API __declspec(dllimport)
	#endif
#else
	#error Glamour only supports Windows!
#endif