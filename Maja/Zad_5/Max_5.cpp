#include <iostream>
using namespace std;
int main()
{
    int i,      // Zmienna licznik p�tli.
        a,      // Zmienna przechowuj�ca wprowadzane liczby przez u�ytkownika.
        max;    // Zmienna przechowuj�ca maksymaln� liczb�.

    for (i = 0; i < 5; i++)  // Uruchamiamy przebieg p�tli 5 razy (od 0 do 4)
    {
        cout << "Podaj liczbe: ";  // Pytamy u�ytkownika o wprowadzenie liczby.
        cin >> a;  // Zapisujemy liczb� wprowadzon� przez u�ytkownika do zmiennej a.
        if (i == 0)  // Z pierwszym przebiegiem p�tli
            max = a;  // warto�ci� max jest pierwsza wprowadzona przez u�ytkownika liczba.
        else  // Dla kolejnych przebieg�w p�tli
            if (a > max)  // sprawdzamy, czy aktualnie wprowadzona liczba jest wi�ksza od max.
                max = a;  // Je�li tak, to staje si� aktualn� najwi�ksz� liczb�.
    }
    cout << "Liczba najwieksza to: " << max;  // Wy�wietlamy najwi�ksz� wprowadzon� liczb�.
    return 0;
}
