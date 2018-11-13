/*
 * ciag_fibonacziego.cpp
 * 
 * Copyright 2018  <>
 */
#include <iostream>
using namespace std;

int fibonacci_it(int n){
    int a = 0;
    int b = 1;
    if (n < 1 ) return a;
    else if (n < 2) return b;
    for (int i = 2; i <= n; i++) {
        wynik= a + b;
    }
}

int main(int argc, char **argv)
{
	int n;
    cout << "podaj numer wyrazu ciągu: ";
    cin >> n;
    cout << "Ciąg Fibonacziego do wyrazu " << n << ";" << endl;
	return 0;
}

