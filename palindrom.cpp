#include <iostream>

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
       
    if (czyPal = true) {
        cout << "To palindrom";
        }
    else {
        cout << "To nie palindrom";
        }
    return czyPal;
}

int main(int argc, char **argv) {
    int rozmiar = cin.gcount();
    char tekst[rozmiar];
    cout << "Podaj jakiś wyrazy: ";
    cin.getline(tekst, rozmiar);
    cout << endl;
    palindrom(tekst, zlicz(tekst));
    return 0;
}
