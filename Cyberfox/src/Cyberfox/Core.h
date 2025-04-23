#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CYBERFOX_API __declspec(dllexport)
	#else
		#define CYBERFOX_API __declspec(dllexport)	
	#endif
#else
	#error Cybefox only support Windows!
#endif