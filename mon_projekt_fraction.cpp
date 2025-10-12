#include <iostream>
//#include "Header1.h"

using namespace std;
int main()


{
 
    int i(0);
    int j(0);
    int u(0);
    int s(0);
    int longeur(0);
    int largeur (0);
    cout << "entrer la longueur de la pyramide" << endl;
    cin >> longeur;
    if (longeur < 0) {
        cout << " la longeur dois etre un moins de 2";
    }



    for (i = longeur; i>=0; i--) {


        for (j = 0; j <= i; j++) {

            cout << " ";

        }

        for (u= 0; u < (s*2+1); u++) {
            if (u % 2 == 0) {
                cout << " ";


            }

            else {

                cout << "*";
            }



        }

        cout<< endl;
        s++;


    }













}
    

