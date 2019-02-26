#Name:	Bryan Long
#Program: homework 5
#Description:	This program is a line counter
#Date: 2/25/19

import sys

line = ""

for line in sys.stdin:

	pass

count = line.split() # this is going to output the number of words, characters, and lines

print ("Number of words: " + count[0] + " Number of characters: " + count[1] + " Number of lines: " + count[2])
