/*

Daniel Yahalom - 9/28 8:30

Assignment Name : Display text

Display Text To the console

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std; //*

// Functions()

void pause() {

cout << "Press any key to continue . . .";

while (!_kbhit());

_getch();

cout << '\n';	
}

// MAIN

int main() {

int period = 1;

cout << "Daniel Yahalom from Period " << period << " says Hello World" << endl;

pause(); // pauses to see the displayed text
return 0;
}