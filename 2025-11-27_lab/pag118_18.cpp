#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void CostoTotaleSoggiorno() {
    int settimane, costofisso = 100, costoUnaSettimana = 600, costoDueSettimane = 1100, costoSupplemento = 20;
    string supplementoLenzuola;

    cout << "Inserire il numero di settimane di soggiorno (1 / 2): ";
    cin >> settimane;

    cout << "Si desidera un supplemento di lenzuola? (Si/No): ";
    cin >> supplementoLenzuola;

    int costoTotale = costofisso;

    if (settimane == 1) 
    {
        costoTotale += costoUnaSettimana;
    }
    else if (settimane == 2) 
    {
        costoTotale += costoDueSettimane;
    }
    else 
    {
        cout << "Numero di settimane non valido. Deve essere 1 o 2." << endl;
        return;
    }

    if (supplementoLenzuola == "si" || supplementoLenzuola == "Si" || supplementoLenzuola == "SI" || supplementoLenzuola == "sI") 
    {
        costoTotale += costoSupplemento * settimane;
    }

    cout << "Il costo totale del soggiorno è: " << costoTotale << " €" << endl;
}

int main() {
    CostoTotaleSoggiorno();

    system("pause");
    return 0;
}