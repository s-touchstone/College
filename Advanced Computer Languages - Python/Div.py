#Steven Touchstone
#Professor Vladimir Ufimtsev
#CMPSC 3313 (Python)
#Division algorithm no '//' or '%' allowed
#Output: The quotient and remainder of the two entered numbers.

a=int(input("Enter an integer->"))
b=int(input("Enter a divisor->"))

def func(a,b):
	r=a
	q=0
	if a>=0:					#Used python shell for example comparison
		if b>0:
			while r>=b:
				r-=b			#10//3 & 10%3 = q3 r1
				q+=1			#3//10 & 3%10 = q0 r3
		elif b<0:
			while r+b>b:		#<-While takes extra step if not done this way
				r+=b			#10//-3 & 10%-3 = q-4 r-2
				q-=1			#3//-10 & 3%-10 = q-1 r-7
			r*=-1				#<-r needs conv to pos
		else:
			print("Cannot Divide by Zero!!!")
	else:
		if b>0:
			while r+b<b:		#<-While takes extra step if not done this way
				r+=b			#-10//3 & -10%3 = q-4 r2
				q-=1			#-3//10 & -3%10 = q-1 r7
		elif b<0:
			while r<=b:
				r-=b			#-10//-3 & -10%-3 = q3 r-1
				q+=1			#-3//-10 & -3%-10 = q0 r-3
			r*=-1				#<-r needs conv to pos
		else:
			print("Cannot Divide by Zero!!!")
	return a,b,r,q
final=func(a,b)
print("The quotient is",final[3],"and the remainder is",final[2])