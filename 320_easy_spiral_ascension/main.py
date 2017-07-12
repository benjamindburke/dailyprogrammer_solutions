#Benjamin Burke
#Solution in Python to "Spiral Ascension" r/dailyprogrammer prompt
#Prompt: https://reddit.com/r/dailyprogrammer/comments/6i60lr/20170619_challenge_320_easy_spiral_ascension/

from math import log10
size = int(input());
spiral = [[0 for j in range(size)] for i in range(size)]
col, row, low, high, n, = -1, 0, 0, size, 0, 

while (n < size * size):
    high -= 1
    while (col < high):
	col += 1
	n += 1
	spiral[row][col] = n
    while (row < high):
	row += 1
	n += 1
	spiral[row][col] = n
    while (col > low):
	col -= 1
	n += 1
	spiral[row][col] = n
    low += 1
    while (row > low):
	row -= 1
	n += 1
	spiral[row][col] = n

print('\n'.join([''.join(['{:4}'.format(item) for item in row]) for row in spiral]))