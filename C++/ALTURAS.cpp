#include <bits/stdc++.h>


using namespace std;



int main ()
{


    int n, idade, i, qtmenor;
    double alt, altotal, altmed, p;
    string nome;



    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;


    double vetal[n];
    int vetid[n];
    string vetn[n];


    for (i=0; i<n; i++)
    {

        cout << "Dados da " << i+1 <<"a pessoa: \n";

        cout << "Nome: ";
        getline (cin, vetn[i]);

        cin.ignore (INT_MAX, '\n');

        cout << "Idade: ";
        cin >> vetid[i];

        cout << "Altura: ";
        cin >> vetal[i];

    }

    qtmenor = 0;

    for (i=0; i<n; i++)
    {

        if (vetid[i] < 16)
        {

            qtmenor++;
        }


    }

    altotal = 0;

    for (i=0; i<n; i++)
    {

        altotal = altotal + vetal[i];

    }



    altmed = (double) altotal / n;
    p = (double) qtmenor * 100 / n;


    cout << fixed << setprecision (2);

    cout << "\nAltura media: " << altmed << endl;
    cout <<"Pessoas com menos de 16 anos: " << p << "%.";


    for (i= 0; i<n; i++)
    {

        if (vetid[i] < 16)
        {

            cout << vetn[i] << endl;
        }
    }



    return 0;


}
