// franek.h

#include "pch.h"
#include "framework.h"
#include <iostream>
#include <string>
#include <bitset>
#include <climits>
#include <cstdlib>

using namespace std;




// funkcja szyfrujaca z kluczem o tej samej dlugosci 
void szyfr()
{
    srand(time(NULL));

    string tekst;

    cout << "Podaj wyraz ktory zaszyfruje:   ";
    getline(cin, tekst);
    int x[tekst.length()];
    cout << "Oto twoj szyfrogram" << endl;
    for (size_t i = 0; i < tekst.size(); i++) {
        cout << (bitset<8>(x) xor bitset<8>(tekst[i]));
        x[i] = rand() % bitset<8>(tekst[i]).size();
    }
    cout << endl << "Oto twoj klucz: " << endl << x << endl;

}


