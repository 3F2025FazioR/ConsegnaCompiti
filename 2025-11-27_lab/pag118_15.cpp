#include <iostream>
#include <cstdlib>

using namespace std;

void CalcSpedizione(float peso, float tariffa, float costoBase) {
    if (peso <= 20) {
        cout << "\nIl pacco non ha costi aggiuntivi perche pesa meno di 20kg " 
             << peso << "kg" << endl;
        cout << "Costo totale: " << costoBase << "€" << endl;
    }
    else {
        float kgSopra = peso - 20;
        float costoExtra = kgSopra * (costoBase * tariffa);
        float costoFinale = costoExtra + costoBase;

        cout << "\nIl costo della spedizione è: " << costoFinale << "€" << endl;
        cout << "Includendo il costo aggiuntivo che è: " << costoExtra << "€" << endl;
    }
}

int main() {
    float peso, prezzoBiglietto;
    float tariffa = 0.02;

    cout << "Inserisca il peso del pacco in kg: ";
    cin >> peso;
    cout << "Inserisca il prezzo del biglietto: ";
    cin >> prezzoBiglietto;

    CalcSpedizione(peso, tariffa, prezzoBiglietto);

    system("pause");
    return 0;
}