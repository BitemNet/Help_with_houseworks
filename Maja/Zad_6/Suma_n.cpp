#include <iostream>
using namespace std;
int main()
{
	int i,      // Licznik pętli.
        a,      // Zmienna przechowująca wprowadzane liczby przez użytkownika.
        suma,   // Zmienna przechowująca obliczaną sumę.
        n;      // Zmienna przechowująca ilość wprowadzanych liczb.

	cout << "Ile liczb: ";  // Pytamy użytkownika o ilość wprowadzanych liczb.
	cin >> n;  // Użytkownik podaje ile liczb będzie chciał sumować.
	suma = 0;  // Na początku przyjmujemy, że suma wynosi zero.
	for (i = 0; i < n; i++)  // Uruchamiamy przebieg pętli dokładnie n razy (od 0 do n -1)
    {
        cout << "Podaj liczbe: ";  // Za każdym razem pytamy użytkownika o podanie liczby.
        cin >> a;  // Wczytujemy kolejną liczbę
        suma = suma + a;  // i powiększamy wynik dotychczasowej sumy o tę liczbę.
    }
    cout << "Suma wynosi: " << suma;  // Po zakończeniu pętli wyświetlamy wynik sumy.

	return 0;
}
