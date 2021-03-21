#include <iostream>
using namespace std;
int main() 
{
	int podstawa_a = 0;  // zmienna przechowująca całkowitą wartość długości podstawy a trapezu
	int podstawa_b = 0;  // zmienna przechowująca całkowitą wartość długości podstawy b trapezu
	int wysokosc_h = 0;  // zmienna przechowująca całkowitą wartość długości wysokości h trapezu
	float pole_trapezu = 0;  // zmienna przechowująca wynik obliczenia pola trapezu
	cout << "Podaj podstawę trapezu a: ";  // wyświetlamy na ekran prośbę o podanie wartości a
	cin >> podstawa_a;  // pobieramy podaną wartość a i zapisujemy w zmiennej podstawa_a
	cout << "Podaj podstawę trapezu b: ";  // wyświetlamy na ekran prośbę o podani wartości b
	cin >> podstawa_b;  // pobieramy podaną wartość b i zapisujemy w zmiennej podstawa_b
	cout << "Podaj wysokość trapezu h: ";  // wyświetlamy na ekran prośbę o podanie wartości h
	cin >> wysokosc_h;  // pobieramy podaną wartość h i zapisujemy w zmeinnej wysokosc_h

	// Na podstawie podanych danych obliczamy pole trapezu P = (a+b)*h/2 i zapisujemy w zmiennej pole_trapezu
	// Aby wartość była liczbą rzeczywistą dzielimy przez wartość typu float 2.0
	pole_trapezu = (podstawa_a + podstawa_b) * wysokosc_h / 2.0;
	cout << "Pole trapezu wynosi " << pole_trapezu << endl;  // wyświetlamy wynik
	return 0;
}
