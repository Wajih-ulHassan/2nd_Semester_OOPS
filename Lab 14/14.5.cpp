#include <windows.h>
#include <cstring>

#define EDIT_USER 101
#define EDIT_PASS 102
#define BTN_LOGIN 201

HWND hUser, hPass;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch(msg) {
		case WM_COMMAND:

			if(LOWORD(wParam) == BTN_LOGIN) {
				char username[50];
				char password[50];

				GetWindowText(hUser, username, 50);
				GetWindowText(hPass, password, 50);

				if(strcmp(username, "admin") == 0 &&
				        strcmp(password, "1234") == 0) {
					MessageBox(hwnd,
					           "Login Successful!",
					           "Success",
					           MB_OK | MB_ICONINFORMATION);
					}
				else {
					MessageBox(hwnd,
					           "Invalid Username or Password!",
					           "Login Failed",
					           MB_OK | MB_ICONERROR);
					}
				}
			break;

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
	wc.lpszClassName = "LoginWindow";
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);

	RegisterClass(&wc);

	HWND hwnd = CreateWindow(
	                "LoginWindow",
	                "Login Form",
	                WS_OVERLAPPEDWINDOW,
	                200, 100, 400, 250,
	                NULL, NULL, hInstance, NULL
	            );

	CreateWindow(
	    "STATIC",
	    "Username:",
	    WS_VISIBLE | WS_CHILD,
	    30, 40, 80, 20,
	    hwnd, NULL, hInstance, NULL
	);

	hUser = CreateWindow(
	            "EDIT",
	            "",
	            WS_VISIBLE | WS_CHILD | WS_BORDER,
	            120, 40, 180, 25,
	            hwnd, (HMENU)EDIT_USER, hInstance, NULL
	        );

	CreateWindow(
	    "STATIC",
	    "Password:",
	    WS_VISIBLE | WS_CHILD,
	    30, 80, 80, 20,
	    hwnd, NULL, hInstance, NULL
	);

	hPass = CreateWindow(
	            "EDIT",
	            "",
	            WS_VISIBLE | WS_CHILD | WS_BORDER | ES_PASSWORD,
	            120, 80, 180, 25,
	            hwnd, (HMENU)EDIT_PASS, hInstance, NULL
	        );

	CreateWindow(
	    "BUTTON",
	    "Login",
	    WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
	    140, 130, 100, 35,
	    hwnd, (HMENU)BTN_LOGIN, hInstance, NULL
	);

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	MSG msg;

	while(GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}

	return msg.wParam;
	}