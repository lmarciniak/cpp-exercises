/*
Napisz klasę będącą reprezentacją wielomianu n-tego stopnia zmiennej x: anx
n + an−1x
n−1 + ... + a1x + a0.

Współczynniki a0, a1, ..., an zdefiniuj w postaci prywatnej, dynamicznie alokowanej tablicy liczb zmiennoprze-
cinkowych. Klasa powinna posiadać publiczne metody:

- konstruktor przyjmujący jako argument liczbę naturalną n, tworzący wielomian n-tego stopnia i ustawia-
jący współczynnikom a0, ..., an wartość 0,
- konstruktor kopiujący, dokonujący głębokiej kopii obiektu,
- destruktor,
- akcesor, przyjmujący jako argument stopień współczynnika, zwracający referencję na współczynnik an,
- stały akcesor, przyjmujący jako argument stopień współczynnika, zwracający wartość współczynnika an,
- metodę przyjmującą zmiennoprzecinkową wartość x zmiennej wielomianu, zwracającą jego wynik.
Jeżeli zostanie wywołany stały akcesor do współczynnika, którego nie ma w tablicy (indeks jest za duży), należy
zwrócić 0. Jeżeli będzie to akcesor niestały, przed zwróceniem referencji, należy zwiększyć rozmiar tablicy do
rozmiaru indeksu przekazanego argumentem, a w nowe pola wpisać 0. Zadanie należy rozwiązać bez użycia klas
kontenerów.
*/
#include <iostream>
#include "polynomial.h"

using namespace std;

int main()
{
    float arr[4] = {3.14, 2.1, -2, 4.02};
    Polynomial p1(3, arr);
    p1.getCoefficientRef(4) = 1;
    cout << p1.value(3) << endl;


    return 0;
}
