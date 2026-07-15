#include <windows.h>
#include <cstdio>
#include <cstring>

#define BTN_GREET 1
#define BTN_CLEAR 2

HWND hEdit;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_COMMAND:

        if (LOWORD(wParam) == BTN_GREET)
        {
            char name[100];

            GetWindowText(hEdit, name, 100);

            if (strlen(name) == 0)
            {
                MessageBox(
                    hwnd,
                    "Please enter your name first!",
                    "Input Required",
                    MB_OK | MB_ICONWARNING
                );
            }
            else
            {
                char greeting[200];

                sprintf(greeting,
                        "Hello, %s! Welcome to Lab 14 GUI.",
                        name);

                MessageBox(
                    hwnd,
                    greeting,
                    "Greeting",
                    MB_OK | MB_ICONINFORMATION
                );
            }
        }

        if (LOWORD(wParam) == BTN_CLEAR)
        {
            SetWindowText(hEdit, "");
            SetFocus(hEdit);
        }

        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASS wc;

    ZeroMemory(&wc, sizeof(wc));

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "GreeterWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        "GreeterWindow",
        "Name Greeter",
        WS_OVERLAPPEDWINDOW,
        100, 100, 420, 200,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    CreateWindowEx(
        0,
        "STATIC",
        "Enter your name:",
        WS_VISIBLE | WS_CHILD,
        20, 30, 130, 22,
        hwnd,
        NULL,
        hInstance,
        NULL
    );

    hEdit = CreateWindowEx(
        WS_EX_CLIENTEDGE,
        "EDIT",
        "",
        WS_VISIBLE | WS_CHILD | ES_AUTOHSCROLL,
        160, 27, 200, 26,
        hwnd,
        NULL,
        hInstance,
        NULL
    );

    CreateWindowEx(
        0,
        "BUTTON",
        "Greet",
        WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
        70, 75, 100, 35,
        hwnd,
        (HMENU)BTN_GREET,
        hInstance,
        NULL
    );

    CreateWindowEx(
        0,
        "BUTTON",
        "Clear",
        WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
        195, 75, 100, 35,
        hwnd,
        (HMENU)BTN_CLEAR,
        hInstance,
        NULL
    );

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    MSG msg;

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}