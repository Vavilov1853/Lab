import sys

import argparse

def File_read():
    f = open('mbox.txt','r')
    output = []
    for line in f:
        if line != '':
            output.append(line)
    return (output)
def Spam(data: list):

    step = 0
    output = 0.0
    for line in data:

        if line.find('X-DSPAM-Confidence: ') != -1:
            step +=1

            value = float(line.split('X-DSPAM-Confidence: ')[1])
            output += value

            output /= step
    return output

def fenders(data: list):

    step = 0

    for line in data:

        if line.find('From: ')


if __name__ == '__main__':
    val = File_read()
    print(Spam(val))
    print()
