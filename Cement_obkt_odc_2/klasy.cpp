#include <iostream>
#include "biblioteka.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Pytanie::wczytaj()
{
	fstream plik;
	plik.open("C:/Users/admin/Documents/lol/quiz.txt",ios::in);
	if(plik.good()==false)
	{
		cerr<<"Nie mozna otworzyc pliku!"<<endl;
		exit(0);
	}
	
	int nr_linii=(nr_pytania-1)*6+1;
	int aktualny_nr=1;
	string linia;
	while(getline(plik, linia))
	{
		if(aktualny_nr == nr_linii) tresc =linia;
		if(aktualny_nr == nr_linii+1) a =linia;
		if(aktualny_nr == nr_linii+2) b =linia;
		if(aktualny_nr == nr_linii+3) c =linia;
		if(aktualny_nr == nr_linii+4) d =linia;
		aktualny_nr++;
	}
	plik.close();
	
}
	
void Pytanie::zadaj()
{
	
	
	cout<<endl<<tresc<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<"_____________"<<endl;
	cout<< "Odpowiedz:   ";
	cin>>odp;
	
}


void Pytanie::sprawdz()
{
   if(odp==poprawna)
   {
      punkt=1;
   }
   else punkt=0;
}





