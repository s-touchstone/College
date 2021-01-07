#Steven Touchstone
#Vladimir Ufimtsev
#Advanced Computer Language (Python)
#Cantor Turtle Graphics

import turtle as T

T.width(5)
y = 80.00
inc = 300.00
line = "black"
#TFdraw = 0

def _bwswitch(line):
    if line == "white":
        line = "black"
    else:
        line = "white"
    return line

"""def _updwn(TFdraw):
    if TFdraw == 1:
        T.up()
        TFdraw = 0
    else:
        T.down()
        TFdraw = 1
    return TFdraw"""

def _draw(x,y,inc,line):
    while x <= 150:
        clr = _bwswitch(line)
        line = clr
        T.color(clr)
        T.goto(x,y)
        x += inc
        T.down()

for a in range(5):
    x = -150.00
    T.up()
    _draw(x,y,inc,line)
    x = -150.00
    y -= 10
    T.up()
    _draw(x,y,inc,line)
    inc /= 3
    y -= 10


