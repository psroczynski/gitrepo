#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  minmax.py
import random 
 
def minmax1():
    a = int(input('podaj liczbę: '))
    min = a 
    max = a
    
    while True:
        a = int(input('podaj liczbę: '))
        if a < 1:
            break 
        if a < min:
            min = a
        if a > max:
            max = a 
        
    return min, max
    
def minmax2(lista):
    
    min = max = lista[0]
    for liczba in range(100):
        if liczba < min:
            min = liczba
        if liczba > max:
            max = liczba
        
def main(args):
    # ~max = minmax1()
    # ~print("najmniejsza liczba to: ", min)
    # ~print("najwieksza liczba to: ", max)
    
    lista = []
    for i in range(100):
        lista.append(random.randint(1, 100))
    print(lista)
    print("najmniejsza liczba to: ", min)
    print("najwieksza liczba to: ", max)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
