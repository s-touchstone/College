'''
Steven Touchstone
Professor Vladimir Ufimtsev
Advanced Computer Language (Python)
Assignment 4.1
Output: The first twenty Catalan numbers
'''

def catalan(n):
	if n<=1 :
		return 1
	res = 0
	for i in range(n):
		res += catalan(i) * catalan(n-i-1)
	return res

def main():
	for i in range(1,21):
		print(i,":",catalan(i))

main()
