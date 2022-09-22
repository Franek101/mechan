
#include <iostream>
#include <string>

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
        cout << "Dodawanie samochodu___________";
        cout << endl << "Podaj marke samochodu:   ";
        cin >> marka;
        cout << endl << "Podaj model samochodu:   ";
        cin >> model;
        cout << endl << "Podaj rocznik samochodu:   ";
        cin >> rocznik;
        cout << endl << "Podaj przebieg samochodu:   ";
        cin >> przebieg;


    }

    void wypisz()
    {
        cout << endl << endl << "________________________________________________" << endl << marka << "   " << model << "   " << rocznik << "   " << przebieg << endl;
    }


};




int main()
{
    
    samochod autko;
    autko.wczytaj();
    autko.wypisz();

}


