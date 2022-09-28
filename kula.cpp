#include <iostream>
#include <math.h>

using namespace std;





class Punkt
{
	protected:
   float x,y;
   string nazwa;

public:
   void wyswietl()
   {
      cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
   }
   Punkt(string n="S", float a=0, float b=0)
   {
      nazwa = n;
      x = a;
      y = b;
   }
  
};

class Kolo :public Punkt 
{
	protected:
   float r;
   string nazwa;

public:
   void wyswietl()
   {
      cout<<"Figura o nazwie: "<<nazwa<<endl;
      cout<<"Srodek figury: "<<endl;
      Punkt::wyswietl();
      cout<<"Promien: "<<r<<endl;
      
   }
   void pole()
   {
   	cout<<"Pole kola : "<<M_PI*r*r<<endl;
   }

   Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
   :Punkt(np,a,b)
   {
      nazwa = nk;
      r = pr;
   }
   
   void wczytaj()
   {
   	cout<<"Podaj promien"<<endl;
   	cin>>r;
   	cout<<"Podaj pierwsza wspolrzedna"<<endl;
   	cin>>Punkt::x;
   	cout<<"Podaj druga wspolrzedna"<<endl;
   	cin>>Punkt::y;
   }
   
};

class Kula :public Kolo
{
	public:
		void wyswietl()
		{
		cout<<"Kula o nazwie: "<<Kolo::nazwa<<endl;
      cout<<"Srodek kuli: "<<endl;
      Kolo::wyswietl();
      cout<<"Promien: "<<r<<endl;
      cout<<"Objetosc kulki : "<<M_PI*r*r*r*4/3<<endl;	
			
			
			
			
		}
		
		
		Kula(string nk="Kulka", string np="S", float a=0, float b=0, float pr=1)
	:Kolo(nk="Kulka",np="S",a=0,b=0,pr=1)
   {
      nazwa = nk;
      r = pr;
   }
	
};



int main()
{
	
	
	
	
    Kolo k1;
   k1.wczytaj();
    k1.wyswietl();
    k1.pole();
    Kula k2;
   k2.wczytaj();
    k2.wyswietl();
    

    return 0;
}

