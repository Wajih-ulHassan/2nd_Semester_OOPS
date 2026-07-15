#include <windows.h>

#define BTN_HELLO 1

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_COMMAND:
        if (LOWORD(wParam) == BTN_HELLO)
        {
            MessageBox(
                hwnd,
                "Hello! Welcome to GUI Programming!",
                "Greeting",
                MB_OK | MB_ICONINFORMATION
            );
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
    wc.lpszClassName = "HelloWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        "HelloWindow",
        "Lab 14 - Hello GUI",
        WS_OVERLAPPEDWINDOW,
        100, 100, 400, 250,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    CreateWindowEx(
        0,
        "BUTTON",
        "Say Hello",
        WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
        130, 90, 120, 40,
        hwnd,
        (HMENU)BTN_HELLO,
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