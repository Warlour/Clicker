#include <iostream>
#include "auto.hpp"
#include <windows.h>

INPUT Input;

/* The two following functions belong to the closed account of the forum user: z05DSL3A
http://cplusplus.com/forum/windows/11548/
From June 4th, 2009 at 3:06 pm
*/
void LeftClick(){
    Input = {0};
    
    // Left down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    ::SendInput(1, &Input, sizeof(INPUT));

    // Left up
    ::ZeroMemory(&Input, sizeof(INPUT));
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    ::SendInput(1, &Input, sizeof(INPUT));
}

// void MouseMove(int x, int y){
//     double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
//     double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
//     double fx = x*(65535.0f/fScreenWidth);
//     double fy = y*(65535.0f/fScreenHeight);
//     Input = {0};
//     Input.type = INPUT_MOUSE;
//     Input.mi.dwFlags = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
//     Input.mi.dx = fx;
//     Input.mi.dy = fy;
//     ::SendInput(1, &Input, sizeof(INPUT));
// }