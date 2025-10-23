#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

//variabili
cout<<"sceglire un numero"<< endl;
int num;
cin>>num;
float v[num];

//scrittura di un vettore
for(int i=0; i< num; i++){
	v[num]= rand() % 9;
	cout<< v[num]<< endl;	
}

//Ordine del vettore
if(is_sorted(vec.begin(), vec.end()))
	cout<< "ordinato";
else
	cout<<"non ordinato";

return 0;
}


