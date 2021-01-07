#Steven Touchstone
#Dr. Vladimir Ufimtsev
#Advanced Computer Language (Python)
#Basic output styles and formats

a=5
b=9
c=6
d=a+b+c
e=7.5
f=2.5
g="output text"
h="output continued"
i="20"

print(a,b,c) 		#print list of integers
print(a+b+c)		#integer math inside a print
print(d)		#integer math outside a print
print(e,f)		#print list of floats
print(e+f)		#float math in print
print(d+f)		#float/integer math in print
print(g)		#print text
print(g+" "+h)		#print text concatination
print(str(d)+" "+h)	#type-casting concatination of integer and text
print(i)		#print a number string
print(int(i))		#print and convert string to integer
print(int(i)+d+e+f)	#convert string to integer and math in print
print("\nFinal:\n")
print(a+b+c+int(e+f)+int(i))
print(float(a+b+c)+e+f+float(i))	#Type-casting mixed
print(str(a+b+c)+str(e+f)+i)
