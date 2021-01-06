#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#Bourne Shell script to prepend/append all files in a
#	subdirectory with 'X'
#9/25/2018

#! /bin/bash

#The subdirectory the files are kept in
directory='Script_1'

#for each file in the subdirectory
for each in `ls $directory`;do
	#rename the file with an 'X' in front and back of the name.
	`mv $directory/$each "$directory/X$each""X"`
done
