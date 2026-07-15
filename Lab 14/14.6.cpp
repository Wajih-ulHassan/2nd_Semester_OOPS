#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define EDIT_TEMP 101
#define BTN_CTOF 201
#define BTN_FTOC 202

HWND hEdit, hResult;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch(msg) {
		case WM_COMMAND: {
			char input[50];
			char output[100];

			GetWindowText(hEdit, input, 50);

			if(strlen(input) == 0) {
				MessageBox(hwnd,
				           "Please enter a temperature!",
				           "Warning",
				           MB_OK | MB_ICONWARNING);
				break;
				}

			double temp = atof(input);
			double result;

			if(LOWORD(wParam) == BTN_CTOF) {
				result = (temp * 9.0 / 5.0) + 32.0;
				sprintf(output, "Result: %.2f F", result);
				SetWindowText(hResult, output);
				}

			if(LOWORD(wParam) == BTN_FTOC) {
				result = (temp - 32.0) * 5.0 / 9.0;
				sprintf(output, "Result: %.2f C", result);
				SetWindowText(hResult, output);
				}
			break;
			}

		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}

	return DefWindowProc(hwnd, msg, wParam, lParam);
	}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASS wc;

	ZeroMemory(&wc, sizeof(wc));

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = "TempConverter";
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);

	RegisterClass(&wc);

	HWND hwnd = CreateWindow(
	                "TempConverter",
	                "Temperature Converter",
	                WS_OVERLAPPEDWINDOW,
	                200,100,420,250,
	                NULL,NULL,hInstance,NULL);

	CreateWindow(
	    "STATIC",
	    "Enter Temperature:",
	    WS_VISIBLE | WS_CHILD,
	    20,30,120,20,
	    hwnd,NULL,hInstance,NULL);

	hEdit = CreateWindow(
	            "EDIT",
	            "",
	            WS_VISIBLE | WS_CHILD | WS_BORDER,
	            150,28,180,25,
	            hwnd,(HMENU)EDIT_TEMP,hInstance,NULL);

	CreateWindow(
	    "BUTTON",
	    "C to F",
	    WS_VISIBLE | WS_CHILD,
	    60,80,100,35,
	    hwnd,(HMENU)BTN_CTOF,hInstance,NULL);

	CreateWindow(
	    "BUTTON",
	    "F to C",
	    WS_VISIBLE | WS_CHILD,
	    200,80,100,35,
	    hwnd,(HMENU)BTN_FTOC,hInstance,NULL);

	hResult = CreateWindow(
	              "STATIC",
	              "Result:",
	              WS_VISIBLE | WS_CHILD,
	              20,150,250,25,
	              hwnd,NULL,hInstance,NULL);

	ShowWindow(hwnd,nCmdShow);
	UpdateWindow(hwnd);

	MSG msg;

	while(GetMessage(&msg,NULL,0,0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}

	return msg.wParam;
	}