/*
Napisz klasę abstrakcyjną RegularPolyhedron modelującą bryłę posiadającą wielokąt foremny w podstawie. Ma ona
posiadać:
- prywatne, zmiennoprzecinkowe zmienne określające długość boku podstawy, pole postawy, wysokość bryły oraz
prywatną,całkowitą zmienną określającą ilość boków postawy,
- publiczny konstruktor, przyjmujący w argumentach trzy wartości – długość boku, ilość boków i wysokość,
dodatkowo obliczający wartość pola postawy,
- chronione gettery do pola podstawy i wysokości,
- publiczną, czysto wirtualną, bezargumentową metodę volume zwracającą wartość zmiennoprzecinkową.
Napisz dziedziczące po niej publicznie dwie klasy: RegularPrism i RegularPyramid. Pierwsza z nich ma
implementować metodę volume, tak aby zwracała objętość graniastosłupa foremnego, druga – ostrosłupa foremnego.
Umieść wszystkie trzy klasy w przestrzeni nazw o nazwie poly.
Napisz funkcję main, w której utworzone zostaną obiekty obu pochodnych klas i wywołana ich metoda volume, tak, aby
zademonstrować ich polimorfizm. Do elementów znajdujących się w przestrzeni nazw poly można odwoływać się
wyłącznie za pomocą operatora zasięgu (::). Program należy napisać zachowując podział na pliki nagłówkowe i źródłowe.
*/
#include <iostream>
#include "regularprism.h"
#include "regularpyramid.h"

using namespace std;

int main()
{
    poly::RegularPrism p1(3.5, 5, 3);
    poly::RegularPyramid p2(3.5, 5, 3);
    cout << p1.volume() << endl;
    cout << p2.volume() << endl;
    return 0;
}
