#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

#define EDIT1 101
#define EDIT2 102
#define BTN_ADD 201
#define BTN_SUB 202
#define BTN_MUL 203
#define BTN_DIV 204
#define LABEL_RESULT 301

HWND hEdit1, hEdit2, hResult;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	char num1[50], num2[50], result[100];
	double a, b, ans;

	switch(msg) {
		case WM_COMMAND:

			GetWindowText(hEdit1, num1, 50);
			GetWindowText(hEdit2, num2, 50);

			a = atof(num1);
			b = atof(num2);

			switch(LOWORD(wParam)) {
				case BTN_ADD:
					ans = a + b;
					sprintf(result, "Result = %.2f", ans);
					SetWindowText(hResult, result);
					break;

				case BTN_SUB:
					ans = a - b;
					sprintf(result, "Result = %.2f", ans);
					SetWindowText(hResult, result);
					break;

				case BTN_MUL:
					ans = a * b;
					sprintf(result, "Result = %.2f", ans);
					SetWindowText(hResult, result);
					break;

				case BTN_DIV:
					if(b == 0) {
						MessageBox(hwnd,
						           "Division by zero is not allowed!",
						           "Error",
						           MB_OK | MB_ICONERROR);
						}
					else {
						ans = a / b;
						sprintf(result, "Result = %.2f", ans);
						SetWindowText(hResult, result);
						}
					break;
				}
			break;

		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}

	return DefWindowProc(hwnd, msg, wParam, lParam);
	}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASS wc;

	ZeroMemory(&wc, sizeof(wc));

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = "Calculator";
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);

	RegisterClass(&wc);

	HWND hwnd = CreateWindow(
	                "Calculator",
	                "Simple Calculator",
	                WS_OVERLAPPEDWINDOW,
	                200,100,420,260,
	                NULL,NULL,hInstance,NULL);

	CreateWindow("STATIC","Number 1:",
	             WS_VISIBLE|WS_CHILD,
	             20,20,80,20,
	             hwnd,NULL,hInstance,NULL);

	hEdit1 = CreateWindow("EDIT","",
	                      WS_VISIBLE|WS_CHILD|WS_BORDER,
	                      110,20,150,25,
	                      hwnd,(HMENU)EDIT1,hInstance,NULL);

	CreateWindow("STATIC","Number 2:",
	             WS_VISIBLE|WS_CHILD,
	             20,60,80,20,
	             hwnd,NULL,hInstance,NULL);

	hEdit2 = CreateWindow("EDIT","",
	                      WS_VISIBLE|WS_CHILD|WS_BORDER,
	                      110,60,150,25,
	                      hwnd,(HMENU)EDIT2,hInstance,NULL);

	CreateWindow("BUTTON","+",
	             WS_VISIBLE|WS_CHILD,
	             20,110,50,35,
	             hwnd,(HMENU)BTN_ADD,hInstance,NULL);

	CreateWindow("BUTTON","-",
	             WS_VISIBLE|WS_CHILD,
	             90,110,50,35,
	             hwnd,(HMENU)BTN_SUB,hInstance,NULL);

	CreateWindow("BUTTON","*",
	             WS_VISIBLE|WS_CHILD,
	             160,110,50,35,
	             hwnd,(HMENU)BTN_MUL,hInstance,NULL);

	CreateWindow("BUTTON","/",
	             WS_VISIBLE|WS_CHILD,
	             230,110,50,35,
	             hwnd,(HMENU)BTN_DIV,hInstance,NULL);

	hResult = CreateWindow("STATIC",
	                       "Result = 0",
	                       WS_VISIBLE|WS_CHILD,
	                       20,170,250,25,
	                       hwnd,(HMENU)LABEL_RESULT,hInstance,NULL);

	ShowWindow(hwnd,nCmdShow);
	UpdateWindow(hwnd);

	MSG msg;

	while(GetMessage(&msg,NULL,0,0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}

	return msg.wParam;
	}