#! /usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input("Podaj wysokość trójkata: "))
    c = str("*")

    for x in range(1, a + 1, 1):
        b = x + (x - 1)
        e = (2 * x) - 5
        d = a - x
        if x > 1 and x < a:
            print(d * " ", c, e * " ", c)
        else:
            print(d * " ", b * c)

    # for x in range(1, a + 1, 1):
    #     b = x + (x - 1)
    #     d = a - x
    #     print(d * " ", b * c)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
