#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class samochod
{
public:
    string marka;
    string model;
    int rocznik;
    unsigned int przebieg;

    void wczytaj() 
    {
        cout << "Dodawanie samochodu___________"<<endl;
        cout << endl << "Podaj marke samochodu:   ";
        //cin.ignore();
        getline(cin,marka);
        cout << "Podaj model samochodu:   ";
        //cin.ignore();
        getline(cin,model);
        cout <<  "Podaj rocznik samochodu:   ";
        cin >> rocznik;
        cout <<  "Podaj przebieg samochodu:   ";
        cin >> przebieg;
		system("cls");
    }

    void wypisz()
    {
        cout << endl << endl << "________________________________________________" << endl << marka << "   " << model << "   " << rocznik << "   " << przebieg<<endl ;
        cin.ignore();
    }


};




int main()
{
    
     samochod s1;
    s1.wczytaj();
    s1.wypisz();

    samochod s2;
    s2.wczytaj();
    s2.wypisz();

    if (s1.przebieg < s2.przebieg)
    {
        cout << endl<<endl<<"Przebieg " << s1.marka << " " << s1.model << " jest mniejszy" << endl;
    }
    else if (s1.przebieg > s2.przebieg)
    {
        cout <<endl<<endl<< "Przebieg " << s2.marka << " " << s2.model << " jest mniejszy" << endl;
    }
    else cout <<endl<<endl<< "Auta maja ten sam przebieg" << endl;


}
