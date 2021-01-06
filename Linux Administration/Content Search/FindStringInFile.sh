#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#This script is used to search for a specific string 
#	within a file. It will output the name of the
#	file(s) containing the input string.
#9/25/2018

#! /bin/bash

#The file to look in
directory='Script_2'

#Create an input variable to store a string in
read -p "String to search for: " string_in

#grep every file in the directory for the stored input string
for each in `grep -l "$string_in" $directory/*`;do
	#Print out where or what file the string was found in
	echo $string_in "found in" $each
done
