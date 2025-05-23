#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#define color SetConsoleTextAttribute
#define colorcode hConsole = GetStdHandle(STD_OUTPUT_HANDLE)

using namespace std;

main(){
	HANDLE colorcode;
	color(colorcode,12);cout << "Hola Mundo." << endl;color(colorcode,7);
}