#include <iostream>
#include "5-b7.h"

int main(int argc, char *argv[]) 
{
    cct_cls();
    cct_gotoxy(0, 0); std::cout << 'A';
    cct_gotoxy(10, 0); std::cout << 'B';
    cct_gotoxy(20, 0); std::cout << 'C';
    return 0;
}