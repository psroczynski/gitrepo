#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury_rek.py
import turtle 

def rysuj(bok, kat, przyrost, warunek):
    turtle.forward(bok)
    turtle.right(kat)
    if kat <= warunek:
        rysuj(bok, kat, przyrost, warunek-przyrost)

def main(args):
    turtle.setup(800, 600)
    turtle.color('red', 'yellow')
    turtle.begin_fill()
    turtle.speed(10)
    turtle.pensize(10)
    
    
    rysuj(bok=50, kat=60, przyrost=10, warunek=180)
    
    turtle.end_fill()
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
