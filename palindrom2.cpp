
/*
 * palindrom2.cpp
 */
#include <iostream>
#include <string.h>
using namespace std;
bool palindrom(char liczba[], int rozmiar)
{
    int polowa = rozmiar / 2;
    bool czyPal = true;
    
    for(int i = 0; i < polowa; i++)
    {
        if (liczba[i] == liczba[rozmiar - 1 - i])
            ; // instrukcja pusta
        else
        {
            czyPal = false;
            break;
        }
    }
    
    return czyPal;
}
int main(int argc, char **argv)
{
    const int rozmiar = 50;
    char liczba[rozmiar];
    cout << "Podaj liczbę: ";
    cin.getline(liczba, rozmiar);
	
    if (palindrom(liczba, strlen(liczba)))
        cout << "To jest palindrom!";
    
    else
    {
        cout << "To nie jest palindrom";
    }
    
    
	return 0;
}

