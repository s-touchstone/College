'''
Steven Touchstone
Professor Vladimir Ufimtsev
Advanced Computer Language (Python)
Assignment 3.2
Output: A list of the names contained in the text file
'''

f1=open('names.txt','r')
f2=open('namesprime.txt','w')
ListA=[]
name =f1.readline()[0:-1]
while name != "":
	ListA.append(name)
	name =f1.readline()[0:-1]
print(ListA)
