#include "Window.h"

int CALLBACK WinMain(
	HINSTANCE hIstance,
	HINSTANCE hPrevIstancce,
	LPSTR	  lpCmdLine,
	int       nCmdShow)

{
	try
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
			throw CHWND_LAST_EXCEPT();
		}
		
		return msg.wParam;
		
	}
	catch (const ChiliException& e)
	{
		MessageBox(nullptr, e.what(), e.GetType(), MB_OK | MB_ICONEXCLAMATION);
	}
	catch (const std::exception& e)
	{
		MessageBox(nullptr, e.what(), "Standard Exception", MB_OK | MB_ICONEXCLAMATION);
	}
	catch (...)
	{
		MessageBox(nullptr, "No details available", "Unknown Exception", MB_OK | MB_ICONEXCLAMATION);
	}
	return -1;
}
