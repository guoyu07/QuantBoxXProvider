// stdafx.cpp : 只包括标准包含文件的源文件
// Ctp_C.pch 将作为预编译标头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"

#ifndef _WIN64
#pragma comment(lib, "..\\external-bin\\ctp630\\x86\\thostmduserapi.lib")
#pragma comment(lib, "..\\external-bin\\ctp630\\x86\\thosttraderapi.lib")
#else
#pragma comment(lib, "..\\external-bin\\ctp630\\x64\\thostmduserapi.lib")
#pragma comment(lib, "..\\external-bin\\ctp630\\x64\\thosttraderapi.lib")
#endif // !_WIN64
