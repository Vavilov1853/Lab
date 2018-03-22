import sys

import argparse


def Parser():
    par = argparse.ArgumentParser()
    par.add_argument('--poly', default='Non typed')
    data = par.parse_args(sys.argv[1:])
    arguments = data.poly
    arguments = arguments.split(',')

    for i in range(len(arguments)):
        arguments[i] = float(arguments[i])

    return arguments

def operation(arguments):
    output = 0.0
    for i in arguments:
        value = 1/i*3
        output += value

    return output

if __name__ == '__main__':
    data = Parser()
    out = operation(data)
    print(out)
