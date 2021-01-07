#Steven Touchstone
#Dr. Vladimir Ufimtsev
#Advanced Computer Languages (Python)
#Input manipulation
#Importing/Using modules
 
from math import pi						#select specific element
#from math import *						#All three are the same,
#import math as m						#They import the entire
#import math							#'math' module
								#use 'as' to rename it

name=input('Please enter your name: ')
print('Hello',name,'\nLet\'s begin','\nI require two numbers')
num1=int(input('Please enter the first number: '))		#All inputs are treated
num2=int(input('Okay now enter the second number: '))		#as strings so you must
print('You entered',num1,'and',num2)				#typecast to convert
print('Added:',num1+num2)
print('Subtracted:',num1-num2)
print('Multiplied:',num1*num2)
print('Divided:',float(num1)/float(num2))			#PEMDAS is applied left
print(num1,'^',num2,'=',num1**num2)				#to right in mathematics
print('Modulus:',num1%num2)
print('Quotient:',num1//num2)
print('Pi equals:', pi)						#using element may be
								#different if using 									#one of the three 									#other import 									#options 'pi', 									#'m.pi', and 									#'math.pi' 									#respectively
