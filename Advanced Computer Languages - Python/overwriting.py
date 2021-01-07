#Steven Touchstone
#Dr. Vladimir Ufimtsev
#Advanced Programming Language (Python)
#Overwrite, get type, and get length of variables
#Also add/remove from a list (not tuple)

a=5
b=7.8
c=("tuple","of","crap",17,3098,45.76)	 		#A tuple uses parentheses
d=['list', 'of', 'crap', 45, 8731, 67.51]		#A list uses square brackets
x="green"
y="yellow"
z="red"
print("a= ",a)
print("b= ",b)
print("c= ",c)						#print a tuple
print("d= ",d,"\n")					#print a list
print("xyz= ",x,y,z)
y=x							#Overwrite 'y' variable
print("xyz= ",x,y,z," after overwrite")
z=y							#Overwrite 'z' variable
print("xyz= ",x,y,z," after overwrite\n")
print("'a' is of ", type(a), " datatype")		#show integer type
print("'b' is of ", type(b), " datatype")		#show float type
print("'c' is of ", type(c), " datatype")		#show tuple type
print("'d' is of ", type(d), " datatype")		#show list type
print("'x,y,and z' are of ", type(x), " datatype\n")	#show string type
print("the length of c= ",len(d))			#print length of list
print("the length of y= ",len(y)) 			#print length of string
print("the length of 'tuple' in c= ",len(c[0]))		#length of string in tuple
print("the length of 'list' in d= ",len(d[0]),"\n")	#length of string in list
d.append("more to come")				#add to list
print("'",d[6],"' was added to list d")
print(d)
del d[4]						#remove from list
print("'8731' removed")
print(d)
