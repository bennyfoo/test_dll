#pragma once
#include <iostream>
#include "..\test_dll_import\SimpleDLL.h"

#ifdef _DEBUG
#pragma comment(lib, "../test_dll_import/Debug/test_dll_import.lib")
#else
#pragma comment(lib, "../test_dll_import/Release/test_dll_import.lib")
#endif

using namespace std;
