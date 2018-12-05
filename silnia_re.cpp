/*
 * silnia_re.cpp
 */

#include <iostream>
using namespace std;

float silnia_re(int n) {
    if  (n == 0) return 1;
    return silnia_re(n-1) * n;
}

int main(int argc, char **argv)
{
    int n;
    cout << ""; cin >> n;
    cout << "wynik:" << silnia_re(n);
    return 0;
}
