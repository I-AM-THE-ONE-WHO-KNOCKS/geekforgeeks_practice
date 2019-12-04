/*
kbhit() is present in conio.h and used to determine if a key has been 
pressed or not. To use kbhit function in your program you should include 
the header file “conio.h”. If a key has been pressed then it returns a 
non zero value otherwise returns zero.
*/

// C++ program to fetch key pressed using 
// kbhit() 
#include <iostream> 
#include <curses.h> 
using namespace std; 
int main() 
{ 
    char ch; 
    while (1) { 
  
        if (kbhit) { 
  
            // Stores the pressed key in ch 
            ch = getch(); 
  
            // Terminates the loop 
            // when escape is pressed 
            if (int(ch) == 27) 
                break; 
  
            cout << "\nKey pressed= " << ch; 
        } 
    } 
    return 0; 
}

//Prints all the keys that will be pressed on
//the keyboard until the user presses Escape key