#include <iostream>
using namespace std;
int main() 
{
	float liczba1 = 0;  // zmienna przechowująca pierwszą podaną przez użytkownika liczbę rzeczywistą
	float liczba2 = 0;  // zmienna przechowująca drugą podaną przez użytkownika liczbę rzeczywistą
	float liczba3 = 0;  // zmienna przechowująca trzecią podaną przez użytkownika liczbę rzeczywistą
	float suma = 0;  // zmienna przechowująca rzeczywistą sume trzech podanych liczb
	float srednia = 0;  // zmienna przechowująca rzeczywistą średnią trzech podanych liczb
	cout << "Podaj pierwszą liczbę: ";  // pytamy użytkownika o pierwszą liczbą
	cin >> liczba1;  // zapisujemy podaną liczbę w zmiennej liczba1
	cout << "Podaj drugą liczbę: ";  // pytamy użytkownika o drugą liczbę
	cin >> liczba2;  // zapisujemy podaną liczbę w zmiennej liczba2
	cout << "Podaj trzecią liczbę: ";  // pytamy użytkownika o trzecią liczbę
	cin >> liczba3;  // zapisujemy podaną liczbę w zmiennej liczba3
	suma = liczba1 + liczba2 + liczba3;  // obliczamy sumę trzech liczb i zapisujemy w zmiennej suma
	cout << "Suma podanych liczb wynosi " << suma << endl;  // wyświetlamy wynik sumy na ekran
	srednia = suma / 3;  // obliczamy średnią trzech liczb i zapisujemy w zmiennej srednia
	cout << "Średnia podanych liczb wynosi " << srednia << endl;  // wyświetlamy wynik średniej na ekran
	return 0;
}
