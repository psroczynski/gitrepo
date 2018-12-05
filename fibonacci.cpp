/*
 * fibonacci.cpp
 */


#include <iostream>
using namespace std;
int fibonacci_re(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_re(n-2) + fibonacci_re(n-1);
}
int main(int argc, char **argv)
{
    float n;
    cout << "Podaj numer wyrazu ciągu: ";
    cin >> n;
    cout << "Ciąg Fibonacciego do wyrazu n " << n << ":";
    cout << fibonacci_re(n) << endl;
    
    for (int i = 0; i <= n; i++) {
        cout << fibonacci_re(i) << " ";
        if ( i == 0) continue;
        else {
            cout << (float)fibonacci_re(i) / (float)fibonacci_re(i-1) << endl;
        }
    }
    
    return 0;
}
