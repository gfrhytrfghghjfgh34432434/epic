// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	HDC epic = GetDC(HWND_DESKTOP);
	HWND wnd = GetDesktopWindow();
	int y = GetSystemMetrics(1);
	int x = GetSystemMetrics(0);

	while (true)
	{

		int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		double angle = 0;
		//StretchBlt(epic, (rand() % 1231) + (-rand() % 1231), (rand() % 123) + (-rand() % 123), x + (rand() % 123) + (-rand() % 123), y + (rand() % 123) + (-rand() % 123), epic, 0, 0, x, y, SRCCOPY);
		//BitBlt(epic, rand() % 5, rand() % 5, rand() % x, rand() % y, epic, rand() % 5, rand() % 5, SRCCOPY);
		BitBlt(epic, rand() % y, (rand() % -4) + (rand() % 4), rand() % 10475644560, y, epic, rand() % y, 0, SRCCOPY);
		//DeleteDC(epic); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&angle);
		Sleep(1);
		//Beep(1440, 15);
	}
}