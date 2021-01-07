#Steven Touchstone
#Dr. Vladimir Ufimtsev
#Advanced Computer Languages (Python)
#Loops and justification/precision

print('loop #1')
for anything in range(1,11):		#This is a deffinate loop which means the range
	print(anything)			#is pre-defined for the loop

print('loop #2')
something=1
while (something<=10):			#This in an indeffinate loop which means the
	print(something)		#range is not pre-defined for the loop and could
	something=something+1		#be infinite in some cases until the conditions
					#are finally met. e.g. 'something' could have
					#started at negative 8 quadrillion and until
					#the condition is met it would continue to
					#iterate through the code.
print('loop #3')
for exponent in range(7,11):		#Unjustified looks terrible
	print('%d %d'%(exponent, 10**exponent))

print('loop #4')			#Left and right justification in a loop
for exponent in range(7,11):		#Presicion of floats can be done this way too
	print("%-3d%12d" % (exponent, 10**exponent)) 						 						 						
