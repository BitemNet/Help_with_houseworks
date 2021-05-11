#include <iostream>
using namespace std;
int main()
{
    int i,      // Zmienna licznik pêtli.
        a,      // Zmienna przechowuj¹ca wprowadzane liczby przez u¿ytkownika.
        max;    // Zmienna przechowuj¹ca maksymaln¹ liczbê.

    for (i = 0; i < 5; i++)  // Uruchamiamy przebieg pêtli 5 razy (od 0 do 4)
    {
        cout << "Podaj liczbe: ";  // Pytamy u¿ytkownika o wprowadzenie liczby.
        cin >> a;  // Zapisujemy liczbê wprowadzon¹ przez u¿ytkownika do zmiennej a.
        if (i == 0)  // Z pierwszym przebiegiem pêtli
            max = a;  // wartoœci¹ max jest pierwsza wprowadzona przez u¿ytkownika liczba.
        else  // Dla kolejnych przebiegów pêtli
            if (a > max)  // sprawdzamy, czy aktualnie wprowadzona liczba jest wiêksza od max.
                max = a;  // Jeœli tak, to staje siê aktualn¹ najwiêksz¹ liczb¹.
    }
    cout << "Liczba najwieksza to: " << max;  // Wyœwietlamy najwiêksz¹ wprowadzon¹ liczbê.
    return 0;
}
