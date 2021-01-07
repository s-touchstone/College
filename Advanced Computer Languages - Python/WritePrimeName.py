'''
Steven Touchstone
Professor Vladimir Ufimtsev
Advanced Computer Language (Python)
Assignment 3.2
Output: No output to screen. Output to file consisting of a list of names whose
	keys are prime when put into a dictionary.
'''

def isprime(num):
	return all(num % i for i in range(2, num))


f1=open('names.txt','r')
f2=open('namesprime.txt','w')
DictA={}
count=1
name =f1.readline()[0:-1]

while name != "":
	DictA[count]=name
	count+=1
	name =f1.readline()[0:-1]

for each in DictA:
	prmchk=isprime(each)
	if prmchk:
		f2.write(DictA[each])
		f2.write("\n")

f1.close()
f2.close()
