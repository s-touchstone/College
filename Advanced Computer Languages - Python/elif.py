#Steven Touchstone
#Dr. Vladimir Ufimptsev
#Advanced Computer Language (Python)
#if, elif, and else examples

from math import *

print('Please make a selection:\n1, 2, or c')
sel=input()					#Remember: The input is a string even
if sel=="1":					#with numbers entered
	print('You made the first selection')
	area=7
elif sel=="2":
	print("You made the second selection")
	area=3.14
elif sel=="c":
	print('You made the third selection')
	area=57
else:
	print("You Rebel, you didn't make a correct selection")
	area=-5
if area>0:
	radius=sqrt(area/pi)
	print('the radius of something with %.2f area is %.2f' % (area,radius))
else:
	print('This wont work!')
