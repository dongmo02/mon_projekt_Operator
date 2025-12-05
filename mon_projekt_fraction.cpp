#include <iostream>
//#include "Header1.h"

using namespace std;

int main()
{
    // Initialisiere Variablen
    int i(0);
    int j(0);
    int u(0);
    int s(0);             // Zählt die aktuelle Zeile/Pyramidenhöhe
    int longeur(0);       // Die Länge/Höhe der Pyramide
    int largeur (0);      // Ungenutzt, könnte für Breite verwendet werden

    cout << "entrer la longueur de la pyramide" << endl; // Benutzer nach der Höhe fragen
    cin >> longeur;

    if (longeur < 0) {
        // Falls die Eingabe negativ ist, Hinweis ausgeben
        cout << " la longeur dois etre un moins de 2";
    }

    // Schleife für jede Zeile der Pyramide, von langeur bis 0
    for (i = longeur; i>=0; i--) {

        // Drucke führende Leerzeichen für die Ausrichtung
        for (j = 0; j <= i; j++) {
            cout << " ";
        }

        // Schleife für die Zeichen in der Zeile (Sterne und Leerzeichen)
        for (u= 0; u < (s*2+1); u++) {
            // Wechsel zwischen Leerzeichen und Sternchen
            if (u % 2 == 0) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }

        cout<< endl; // Zeilenumbruch
        s++; // Nächste Zeile
    }

}
