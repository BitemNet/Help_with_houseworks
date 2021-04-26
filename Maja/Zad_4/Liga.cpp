#include <iostream>
using namespace std;
int main()
{
	int pkt;  // zmienna przechowująca liczbę punktów klasy
	float f, so;  // zmienne przechowujące odpowiednio frekfencje i średnią ocen klasy

	cout << "Podaj liczbe punktow zdobytych przez klase: ";  // pytamy użytkonika o aktualną liczbę punktów klasy
	cin >> pkt;  // pobieramy liczbę punktów klasy i zapisujemy w zmiennej pkt
	cout << "Podaj frekfencje klasy: ";  // pytamy użytkownika o frekfencje klasy
	cin >> f;  // pobieramy frekfencje klasy w postaci liczby zmiennoprzecinkowej i zapisujemy w zmiennej f
	cout << "Podaj srednia ocen klasy: ";  // pytamy użytkownika o średnią ocen klasy
	cin >> so;  // pobieramy średnią ocen klasy w postaci liczby zmiennoprzecinkowej i zapisujemy z zmiennej so
	pkt = (f > 94 && so >= 4.0)? pkt = pkt + 20 : pkt;  // uproszczona instrukcja warunkowa: jeśli frekfencja jest
                                                        // większa niż 94 procent i jednocześnie średnia ocen jest
                                                        // większa bądź równa 4.0, to zwiększamy aktualną liczę punktów
                                                        // klasy o 20, w przeciwnym razie liczba punktów pozostaje bez zmian
	cout << "Aktualna liczba punktow wynosi: " << pkt;  // wyświetlamy obliczoną liczbę punktów na ekran

	return 0;
}
