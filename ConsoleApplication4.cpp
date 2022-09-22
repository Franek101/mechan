
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
    
     samochod s1;
    s1.wczytaj();
    s1.wypisz();

    samochod s2;
    s2.wczytaj();
    s2.wypisz();

    if (s1.przebieg < s2.przebieg)
    {
        cout << "Przebieg " << s1.marka << " " << s1.model << " jest wiekszy" << endl;
    }
    else if (s1.przebieg > s2.przebieg)
    {
        cout << "Przebieg " << s2.marka << " " << s2.model << " jest wiekszy" << endl;
    }
    else cout << "Auta maja ten sam przebieg" << endl;


}


