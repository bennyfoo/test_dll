#pragma once
#include <iostream>
#include "..\test_dll_import\SimpleDLL.h"

#ifdef _DEBUG
#ifdef _WIN64
    #pragma comment(lib, "../test_dll_import/x64/Debug/test_dll_import.lib")
#else
    #pragma comment(lib, "../test_dll_import/Debug/test_dll_import.lib")
#endif
#else
#ifdef _WIN64
#pragma comment(lib, "../test_dll_import/x64/Release/test_dll_import.lib")
#else
#pragma comment(lib, "../test_dll_import/Release/test_dll_import.lib")
#endif
#endif

using namespace std;
