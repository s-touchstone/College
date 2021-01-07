#Steven Touchstone
#Advanced Programming Language (Python)
#Professor Vladimir Ufimtsev
#Cantor Lines Assignment (Bonus)

import turtle as T

#raise/lower pen for drawing lines
def _bwswitch():
	if T.isdown():
		T.up()
	else:
		T.down()

#drawing the white lines over the black to cut in thirds
def  _cantor(x, y, i):
	dec = 600
	T.color("white")
	T.up()
	while i > 0:
		dec /= 3
		while x > -300:
			x -= dec
			T.goto(x, y)
			_bwswitch()
		x = 300
		i -= 1
		T.up()
		T.goto(x, y)
	T.goto(-300, y)

#main area to draw black lines and call the cantor function
def _main():
	T.width(5)
	y = 80
	for i in range(5):
#	for i in range (8):
		x = -300
		T.up()
		T.goto(x, y)
		T.color("black")
		T.down()
		x = 300
		T.goto(x, y)
		_cantor(x, y, i)
		y -= 10

_main()
T.done()

#Change all '300's to 150 or any other number to change the line size
#change 'dec' variable to double the number placed in the '300's
