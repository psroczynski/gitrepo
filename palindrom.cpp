#include <iostream>
#include <string.h>

using namespace std;


int zlicz(char tb[]) {
    int i = 0;
    while(tb[i] != '\0') i++;
    return i;
}

bool palindrom(char tekst[], int r) {
// pierwszy znak == ostatniemu
    int x = r / 2;
    bool czyPal = true;
    for (int i = 0; i < x; i++) {
        if (tekst[i] == tekst[r - 1 - i]) ;
        else {
            czyPal = false;
            break;
        }
    }
    return czyPal;
}

int main(int argc, char **argv) {
    int rozmiar = 20;
    char tekst[rozmiar];
    cout << "Podaj jakiś wyrazy: ";
    cin.getline(tekst, rozmiar);
    if (palindrom(tekst, strlen(tekst)))
        cout << "To palindrom";
    else 
        cout << "To nie palindrom";
    return 0;
}
