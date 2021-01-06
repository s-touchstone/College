#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#This is a script that removes the Xs appended/prepended
#	to the files from the previous script.
#9/25/2018

#! /bin/bash

#The directory to look in
directory='Script_1'

#For each file in the directory 
for each in `ls $directory`;do
	#remove the path in front of the filename
	filename=${each#*/}
	#remove the 'X' from the front of the filename
	filename=${filename#X}
	#remove the 'X' from the back of the filename
	filename=${filename%X}
	#use the stored variables to rename the file without 'X's
	mv $directory/$each $directory/$filename
done
