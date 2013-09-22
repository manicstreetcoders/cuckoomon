#include <stdio.h>
#include <windows.h>

int main()
{
    for (int i = 0; i < 10; i++) {
        POINT p = {}; GetCursorPos(&p);
        printf("{x: %ld, y: %ld}\n", p.x, p.y);
        Sleep(100);
    }
}
