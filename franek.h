ď»ż// franek.h


#include <cstdlib>
#include <cstdio>
#include <ctime>

#include <iostream>
#include <string>
#include <bitset>
#include <climits>
#include <cstdlib>


using namespace std;




// funkcja szyfrujaca z kluczem o tej samej dlugosci 
/*void szyfr()
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
*/
void oceny()
{

float lol;
float suma=0;
int dlugosc;
int n;
cout<<"Podaj ilosc uczniow nie wieksza niz 50: "<<endl;
cin>>n;
float ocena[50];
string nazwisko[50];
for(int i=0;i<n;i++)
{
	cout<<"Podaj nazwisko i ocene ucznia:    ";
	cin>>nazwisko[i]>>ocena[i];
	suma = suma + ocena[i];
	
	
}
cout<<"Srednia arytmetyczna to:   "<<suma/n<<endl;;
lol = ocena[0];
for(int i=1;i<n;i++)
{

		if(lol<ocena [i])
			lol = ocena[i];

}
cout<<"Najwieksza ocena to:   "<<lol<<endl;
cout<< "A oto wszystkie oceny uczniow"<<endl;
for(int i=0;i<n;i++)
{
	cout<<nazwisko[i]<<"   "<<ocena[i]<<endl;
}



}
