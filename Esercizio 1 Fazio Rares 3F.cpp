#include <iostream>
using namespace std;
int main(){
	
// variabili
int triangolo = 1;
int quadrato = 2;
int rettangolo = 3;
int rombo = 4;
int stampa = 5;
int scelta;
	
	cout<<"scegli un numero (1=triangolo 2=quadrato 3=rettangolo 4=rombo 5=stampa)"<< endl;
	cin>> scelta;
	
do{
	
	while(scelta == 1) {
		
		//variabili
		float base;
		float altezza;
		float area;
		string figura ="triangolo";
		
		cout<<figura<< endl;
		cout<<"inserisci la base"<< endl;
		cin>>base;
		cout<<"inserisci l'altezza"<< endl;
		cin>>altezza;
		area=base*altezza/2;
		cout<<area<< endl;
		
		cout<<"scegli un numero (1=triangolo 2=quadrato 3=rettangolo 4=rombo 5=stampa)"<< endl;
		cin>> scelta;
		
	}
		
	while(scelta == 2) {
		
		//variabili
		float lato;
		float area;
		string figura ="quadrato";
		
		cout<<figura<< endl;
		cout<<"inserisci il lato"<< endl;
		cin>>lato;
		area=lato*lato;
		cout<<area<< endl;
		
		cout<<"scegli un numero (1=triangolo 2=quadrato 3=rettangolo 4=rombo 5=stampa)"<< endl;
		cin>> scelta;
	
	}
	

	
	while(scelta == 3) {
		
		//variabili
		float base;
		float altezza;
		float area;
		string figura ="rettangolo";
		
		cout<<figura<< endl;
		cout<<"inserisci la base"<< endl;
		cin>>base;
		cout<<"inserisci l'altezza'"<< endl;
		cin>>altezza;
		area=base*altezza;
		cout<<area<< endl;
		
		cout<<"scegli un numero (1=triangolo 2=quadrato 3=rettangolo 4=rombo 5=stampa)"<< endl;
		cin>> scelta;
	
	}

	while(scelta == 4) {
		
		//variabili
		float diagmin;
		float diagmag;
		float area;
		string figura ="rombo";
		
		cout<<figura<< endl;
		cout<<"inserisci la diagonale maggiore"<< endl;
		cin>>diagmag;
		cout<<"inserisci la diagonale minore"<< endl;
		cin>>diagmin;
		area=diagmag*diagmin/2;
		cout<<area<< endl;
		
		cout<<"scegli un numero (1=triangolo 2=quadrato 3=rettangolo 4=rombo 5=stampa)"<< endl;
		cin>> scelta;
			
	}
	
}

while(scelta != 5);

	return 0;	
}
