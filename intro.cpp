#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <windows.h>

using namespace std;

void pressEntersintro(){ // กด Enter เปลี่ยนฉาก
    cout << "                                  ...Press Enter to play...\n\n\n\n\n\n";
    cin.get();
    system("cls");
}

void intro(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11); // Set console output color to bright cyan

    // Print ASCII art
    std::cout << R"(

        
                      ______                __              _          ______
                     / ____/______  _______/ /_____  ____  (_)___ _   / ____/
                    / /   / ___/ / / / ___/ __/ __ \/ __ \/ / __ `/  /___ \  
                   / /___/ /  / /_/ (__  ) /_/ /_/ / / / / / /_/ /  ____/ /  
                   \____/_/   \__, /____/\__/\____/_/ /_/_/\__,_/  /_____/   
                             /____/                                          
    )" << std::endl;

    pressEntersintro();

    // Set console output color back to default.
    SetConsoleTextAttribute(hConsole, 7);
}