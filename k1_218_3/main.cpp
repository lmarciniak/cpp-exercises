/*
Napisz abstrakcyjną klasę Shape posiadającą publiczną strukturę Point składającą się ze zmiennoprzecinkowych
zmiennych x i y. Klasa Shape powinna mieć publiczną, czysto wirtualną metodę save przyjmującą jako argument
stałą referencję na string, a zwracającą wartość logiczną.
Napisz dziedziczącą publicznie po Shape klasę Triangle, która przyjmie jako argumenty konstruktora trzy stałe
typu Point – wierzchołki trójkąta. Napisz także dziedziczącą publicznie po Shape klasę Circle, która przyjmie
jako argumenty konstruktora stały Point – środek oraz zmiennoprzecinkowy, stały promień okręgu.

W przypadku obu klas, implementacja metody save powinna polegać na otwarciu pliku, zapisaniu tam infor-
macji na temat kształtu i zamknięciu pliku. Jeżeli się to powiodło, należy zwrócić prawdę, w przeciwnym razie

fałsz. W przypadku trójkąta należy w pierwszej linii umieścić napis „Triangle”, w kolejnych trzech oddzielone
spacjami współrzędne wierzchołków, a w kolejnych dwóch obwód i pole trójkąta. W przypadku okręgu, należy
w pierwszej linii umieścić napis „Circle”, w drugiej współrzędne środka, w trzeciej promień, w czwartej obwód
okręgu, a w ostatniej pole koła.
Napisz funkcję przyjmującą jako argumenty obiekty klas Triangle i Circle przekazane polimorficznie za pomocą
tablicy wskaźników na Shape, jej rozmiar oraz stałą referencję na string. Funkcja powinna dla każdego obiektu
z tablicy utworzyć plik w ścieżce przekazanej argumentem napisowym i zapisać tam informacje o kształcie.
Nazwa każdego pliku może być dowolna, ale musi być unikalna w ramach jednego wywołania tej funkcji.
 */
#include <iostream>
#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include <fstream>
#define N 4

using namespace std;

void fun(Shape **arr, int size, const string& path)
{
    for (int i = 0; i < size; i++) {
        arr[i]->save(path+to_string(i)+".txt");
    }
}

int main()
{
    Shape* arr[N] = {new Circle({1, 1}, 2), new Triangle({0, 5}, {2, -1}, {4, 4}),
                     new Circle({-5, 2}, 3.14), new Triangle({-2, 2}, {3, 7}, {1, 9})};
    fun(arr, N, "file");
    for (int i = 0; i < N; i++) {
        delete arr[i];
    }
    return 0;
}
