'''
Steven Touchstone
Professor Vladimir Ufimtsev
Advanced Computer Language (Python)
Assignment 2.1
Output: Two Randomized lists and a list of what is in common between them
'''

from random import *

ListA=[]
ListB=[]
ListC=[]

while len(ListA) < 20:
	ListA.append(randint(1,50))
print("List 1:",ListA)

while len(ListB) < 20:
	ListB.append(randint(1,50))
print("List 2:",ListB)

for var in ListA:
	if var in ListB:
		ListC.append(var)
print("In Common:",ListC)
