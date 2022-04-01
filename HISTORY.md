# 31 / 03 - 2022
This is the start of the project.  
First of all, I started learning about the INPUT datatype which is imported from the library windows.h  
With this I could set specific "flags" to INPUT, such as the key to press, etc.

In example:
```c++
Input = {0};
    
    // Left down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
```
Using SendInput I could use this "MOUSEEVENT" to send an input to the PC.
```c++
::SendInput(1, &Input, sizeof(INPUT));
```
Here we see the program in action:
![Test](media/score.gif)
The user tells the program to repeat the mouse click 10000 times, which is way too fast for the PC. Therefore the program does not end up clicking 10000 times in an instant, hereby creating a lower CPS. In fact, the clicks of 10000 is not reached within the 5 seconds time limit.

For a start, this is an impressive score, based on the fact that the world record for a person to click is 15,4 CPS - but it is unfair to compare a person with even a bad executed robot.