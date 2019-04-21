/*
Napisz funkcję, która przyjmie jako argumenty:
- referencję na dynamicznie zaalokowaną tablicę wskaźników do zmiennych typu char,
- rozmiar tej tablicy.
W tablicy, wartości części pól wskazują na niezerowe pozycje w pamięci, pod którymi zakładamy, że znajdują się
poprawnie zaalokowane wartości typu char. Pozostałe pola wskazują na NULL. Funkcja powinna zmodyfikować tablicę
tak, aby pozbyć się wartości wskazujących na NULL, pozostałe przesunąć tak, aby nie było przerw, a nadmiarowe miejsce
zwolnić. Funkcja powinna zwrócić rozmiar tablicy po modyfikacji.
Przykład:
Wejściowa tablica zawiera wskazania na: A NULL NULL X W NULL.
Tablica po modyfikacji zawiera wskazania na: A X W, funkcja zwraca wartość 3.
*/
#include <iostream>

using namespace std;

int fun(char** &arr, int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i])
            counter++;
    }
    char *buffer = new char[counter];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i])
            buffer[j++] = *arr[i];
    }
    for (int i = 0; i < counter; i++) {
        if (arr[i] == nullptr) {
            arr[i] = new char(buffer[i]);
        } else {
            *arr[i] = buffer[i];
        }
    }
    for (int i = counter; i < size; i++) {
        delete arr[i];
    }
    return counter;
}


int main()
{
    char **arr = new char*[12];
    arr[0] = new char('A');
    arr[1] = nullptr;
    arr[2] = nullptr;
    arr[3] = new char('X');
    arr[4] = new char('W');
    arr[5] = nullptr;
    arr[6] = new char('A');
    arr[7] = nullptr;
    arr[8] = nullptr;
    arr[9] = new char('X');
    arr[10] = new char('W');
    arr[11] = nullptr;
    int size = fun(arr, 12);
    for (int i = 0; i < size; i++) {
        cout << i << ": " << arr[i] << endl;
        delete arr[i];
    }
    delete [] arr;
    return 0;
}
