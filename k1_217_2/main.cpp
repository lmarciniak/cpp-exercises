/*
Napisz klasę WordReplacer posiadającą:
- publiczny konstruktor przyjmujący w argumencie obiekt klasy string,
- publiczną metodę replace przyjmującą dwie wartości typu unsigned int, nie zwracającą wartości,
- publiczną, bezargumentową metodę text zwracającą obiekt klasy string.
Konstruktor w argumencie przyjmuje ścieżkę do pliku tekstowego. W pliku znajdują się słowa oddzielone pojedynczymi
spacjami. Konstruktor powinien pobrać jego zawartość do obiektu swojej klasy. Metoda replace ma za zadanie zamienić
ze sobą miejscami słowa o podanych numerach (indeksowanych od 1). Jeżeli słowa lub słów o podanym indeksie nie ma
w napisie, należy zignorować wywołanie metody. Metoda text ma zwrócić zmodyfikowany napis.
Obiekt klasy WordReplacer powinien pracować na kopii danych z pliku. W wyniku jego działań, zawartość pliku nie
może zostać zmieniona. Prywatne pola i metody można tworzyć dowolnie w zależności od potrzeb i wybranego sposobu
rozwiązania. Jeżeli zaproponowane rozwiązanie będzie tego wymagało, należy dopisać destruktor.
Przykład:
W pliku znajduje się: Lorem ipsum dolor sit amet.
Po wywołaniu metody replace z argumentami 2 i 4, metoda text powinna zwrócić: Lorem sit dolor ipsum amet.
*/
#include <iostream>
#include "wordreplacer.h"

using namespace std;

int main()
{
    WordReplacer w1(string("file.txt"));
    w1.replace(2, 4);
    cout << w1.text() << endl;
    return 0;
}
