/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x, y, cursor;
    string soloDispari;
    cout << "Inserisci il primo numero: "; cin >> x;
    cout << "Inserisci il secondo numero: "; cin >> y;
    cursor = x;
    cout << "Solo numeri dispari? (y/n): "; 
    while(cursor <= y) {
        if(cursor % 2 == 1) cout << cursor << " ";
        cursor++;
    }

    return 0;
}
