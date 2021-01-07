#Steven Touchstone
#Professor Vladimir Ufimtsev
#Advanced Computer Language (Python)
#Assignment 2.2
#Output: Prompt to input information to write to the file. Then prompt when closing

f=open('MyOutput.txt','w')
print("Enter some Information or Enter 0 to Close the file")
npt=input(":")
while npt != "0":	#The npt option types as a string
	f.write(npt)
	f.write("\n")
	npt=input(":")
print("File Closed")
f.close()
