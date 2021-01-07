'''
Steven Touchstone
Professor Vladimir Ufimtsev
Advanced Computer Language (Python)
Assignment 4.2
Output: The first sixteen Bell numbers
'''

def bellNumber(n):
	bel = [[0 for i in range(n+1)] for j in range(n+1)]
	bel[0][0] = 1
	for i in range(1, n+1):
		bel[i][0] = bel[i-1][i-1]
		for j in range(1, i+1):
			bel[i][j] = bel[i-1][j-1] + bel[i][j-1]
	return bel[n][0]

def main():
	for n in range(1,17):
		print(n,":",bellNumber(n))

main()
