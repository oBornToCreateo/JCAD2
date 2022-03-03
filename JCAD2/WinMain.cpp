#include "Window.h"

int CALLBACK WinMain(
	HINSTANCE hIstance,
	HINSTANCE hPrevIstancce,
	LPSTR	  lpCmdLine,
	int       nCmdShow)

{
	Window wnd(800, 300, "JCAD 2");

	//Message Loop 
	MSG msg;
	BOOL gResult;
	while (gResult=(GetMessage(&msg, nullptr, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	if (gResult == -1)
	{
		return -1;
	}
	else
	{
		return msg.wParam;
	}
}
