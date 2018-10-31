/*
 * znaki.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>
using namespace std;

void ascii(char tab[]){
    int i = 0;
    while(tab[i] != '\0') {
        cout << (int)tab[i] << ' ';
        i++;
}
}

void licz_znaki(char tab[]) {
    int i = 0;
    int biale, inter, licz;
    biale = inter = licz = 0;
    while(tab[i] != '\0') {
        //if (tab[i] == ' ' || tab[i] == '\t')
        //    biale++;
        //else 
            //cout << tab[i] << " ";
        switch (tab[i]) {
            case ' ': biale++; break;
            case '\t': biale++; break;
            case ',': inter++; break;
            case '.': inter++; break;
            default: licz++; break;
        }
        i++; // zwiększanie indeksu
    }
    cout << "\nznaków białych jest: " << biale << endl;
    cout << "\nInterpuncyjnych jest: " << inter << endl;
    cout << "\nReszta białych jest: " << licz << endl;
}


// A-Z 65-90, a-z 
void zamiana_liter(char tab[]) {
    int i = 0;
    char kod;
    while(tab[i] != '\0') {
       kod = (int)tab[i];
       if (kod >= 65 && kod <= 90)
        kod += 32;
        else if (kod <= 97 && kod >= 122)
        kod -= 32;
       
       cout << (char)kod;
       i++;
    }
}


int main(int argc, char **argv)
{
    const int rozmiar = 20; // deklaracja stałej
	char znaki[rozmiar];  //deklaracja tablicy znakowej
    cout << "Jak się nazywasz? Nazywam się ";
    cin.getline(znaki, rozmiar);
    cout << "siemano " << znaki << endl;
    //licz_znaki(znaki);
    //ascii(znaki);
    zamiana_liter(znaki);
	return 0;
}

