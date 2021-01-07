#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#This script takes input from a file 'active_cs.txt' which is a list
#	of students that are CS majors. It checks to see if they have
#	a thier own directory in majors or nonmajors directories or 
#	if they do not exist. If they already have a directory in the
#	majors directory they are skipped. If they have one in the
#	nonmajors directory it outputs just that. Finally, if they do 
#	not have one in either, it outputs that as well.
#10/03/2018

#! /bin/bash

#create global variables for the directories to check
majdir=/home/STUDENTS/majors
nmajdir=/home/STUDENTS/nonmajors

#read each line from the file placed after 'done'
while read line;do
	#create variables for the username and full name
	username=`echo $line | cut -d: -f1`
	fullname=`echo $line | cut -d: -f2`
	#if thier username IS NOT in the majors directory
	if [ ! -d $majdir/$username ];then
		#if the username IS in the nonmajors directory
		if [ -d $nmajdir/$username ];then
			#print this major student is in the nonmajor directory
			echo CS MAJOR $fullname is in nonmajors
		else
			#print no account found for this username
			echo NO ACCOUNT FOUND - $username
		fi
	fi
#input file and end while
done < "active_cs.txt"
