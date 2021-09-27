#include "DX.h"

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

#include <tchar.h>
#include <string>
#include <WINGDI.h>

#pragma comment(lib,"DirectXSR.lib")

using namespace std;


int WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE prevhIn, LPTSTR CmdLine, int nCmdShow)
{
	MessageBox(0,L"",L"",0);

	VideoDXGICaptor* vc = new VideoDXGICaptor();


	int* Buffer = (int*)malloc(4096 * 2304 * 4);
	INT Size = 0;
	vc->Init();
	vc->CaptureImage(Buffer, Size);

	vc->CaptureImage(Buffer, Size);

	return 0;
}