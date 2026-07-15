#include <windows.h>
#include <string>
using namespace std;

HWND hLabel;
int count = 0;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
	switch (msg) {
		case WM_COMMAND:
			if (LOWORD(wp) == 1) {
				count++;
				string text = "Clicks: " + to_string(count);
				SetWindowText(hLabel, text.c_str());
				}
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hwnd, msg, wp, lp);
		}
	return 0;
	}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int nShow) {
	WNDCLASS wc = {0};
	wc.lpfnWndProc = WndProc;
	wc.hInstance = hInst;
	wc.lpszClassName = "Counter";
	RegisterClass(&wc);

	HWND hwnd = CreateWindow("Counter", "Click Counter", WS_OVERLAPPEDWINDOW,
	                         100, 100, 300, 200, NULL, NULL, hInst, NULL);

	CreateWindow("BUTTON", "Click Me", WS_VISIBLE | WS_CHILD,
	             90, 30, 100, 30, hwnd, (HMENU)1, hInst, NULL);

	hLabel = CreateWindow("STATIC", "Clicks: 0", WS_VISIBLE | WS_CHILD,
	                      90, 80, 150, 25, hwnd, NULL, hInst, NULL);

	ShowWindow(hwnd, nShow);
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}
	return 0;
	}