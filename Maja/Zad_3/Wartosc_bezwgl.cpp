#include <iostream>
using namespace std;
int main()
{
    int x, w;  // zmienne przechowujące odpowiednio wartość wprowadzaną z klawiatury i wynik
    cout << "Podaj liczbe x: ";  // pytamy użytkownika o podanie liczby
    cin >> x; // pobieramy liczbę podaną przez użytkownika i zapisujemy w zmiennej x
    if (x >= 0)  // sprawdzamy czy podana liczba jest dodatnia
        w = x;  // jeśli tak, to wynik jest równy podanej liczbie
    else  // w przeciwnym razie jeśli podana liczba jest ujemna
        w = -x;  // wynik jest równy ujemnej wartości podanej liczby, która też jest ujemna, dając liczbę dodatnią
    cout << "Wartosc bezwzgledna liczby x = " << w;  // wyświetlamy wynik na ekran

    return 0;
}
