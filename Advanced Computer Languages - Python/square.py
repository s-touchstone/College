#Steven Touchstone
#Professor Ufimtsev
#ADV. Programming Languages (Python)
#Turtle Lab 
#04/17/18
#

from turtle import Turtle
import turtle
t = Turtle()
#------------------------------------------------
def square():
	for x in range(4):
		t.left(90)
		t.forward(100)

def color_switch(cnt):
	if cnt == 1:
		t.color("red")
		cnt+=1
	elif cnt == 2:
		t.color("green")
		cnt+=1
	elif cnt == 3:
		t.color("blue")
		cnt+=1
	else:
		t.color("yellow")
	return cnt
#------------------------------------------------
def main():
	cnt=1
	for i in range(4):
		cnt=color_switch(cnt)
		square()
		t.up()
		t.forward(100)
		t.left(90)
		t.down()
	turtle.done()
main()
