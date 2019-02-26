#Name:	Bryan Long
#Program: homework 6
#Description:	This program is to test regular expressions
#Date: 2/25/19

puts "Input word to be reworded: "

mom = gets

secondword = mom # I miss my mommy


secondword = secondword.gsub(/\b[fF]\w+/) {

	|a|

	letter1 = ""

	if a[0] == "f" then

		firstletter = "g"

	else

		firstletter = "G"

	end

	letter2 = ""

	if a[1] == a[1].upcase then

		secondletter = "H"

	else

		secondletter = "h"

	end

	firstletter + secondletter + a[1, a.length - 1]

}

secondword = secondword.gsub(/\BI\B/, 'O')

secondword = secondword.gsub(/\Bi\B/, 'o')


secondword = secondword.gsub(/\B[sS][hH]\b/) { 

	|a|

	secondtolast = ""

	if a[0] == "s" then

		secondtolast = "t"

	else

		secondtolast = "T"

	end

	last = ""

	if a[1] == "h" then

		lastletter = "i"

	else

		lastletter = "I"

	end

	secondtolast + lastletter

}

puts "Given Word (ex. fish): " + mom #this is where the output statements go once you run your program

puts "New Word (ghoti): " + secondword
