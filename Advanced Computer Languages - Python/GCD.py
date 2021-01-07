#Steven Touchstone
#Professor Vladimir Ufimtsev
#CMPSC 3313 (Python)
#Greatest common divisor assignment
#Output: The greatest common divisor of two entered integers

a=int(input("Enter an integer->"))
b=int(input("Enter another integer->"))

def func(a,b):
	r=a
	q=0
	if a>=0:
		if b>0:
			while r>=b:
				r-=b
				q+=1
		elif b<0:
			while r+b>b:
				r+=b
				q-=1
			r*=-1
		else:
			print("Cannot Divide by Zero!!!")
	else:
		if b>0:
			while r+b<b:
				r+=b
				q-=1
		elif b<0:
			while r<=b:
				r-=b
				q+=1
			r*=-1
		else:
			print("Cannot Divide by Zero!!!")
	return r

def gcd(a,b):
	while b!=0:
		r=func(a,b)
		temp=b
		b=r
		a=temp
	return a

final=gcd(a,b)
print("The greatest common divisor is",final)

'''while b!=0:
	temp=b
	b=a%b
	a=temp
print("The greatest common divisor is",a)'''