#Steven Touchstone
#Professor Vladimir Ufimtsev
#Advanced Computer Language (Python)
#Assignment 3.1
#Output: No output to screen. Output saved to a file consisting of fractions of how
#	many 1s are in the list.

from random import *

ListA=[]
ListB=[]

f=open('averages.txt','w')
while len(ListA) < 500:
	while len(ListB) < 10:
		ListB.append(randint(0,1))
	for var in ListB:
		ListA.append(var)
	ListB=[]
	count=0
	for it in ListA:
		if it == 1:
			count+=1	
	f.write(str(count))
	f.write('/')
	f.write(str(len(ListA)))
	f.write('\n')
f.close()
