#Steven Touchstone
#Professor Tarver, Mary
#East Central University
#This script checks to see if certain directories exist and where they are located.
#	Then it generates some lists in files that contain which group each individual
#	user belongs to.
#10/15/2018

#! bin/bash

#read each line of input file
while read line;do
	#create variable names for the home directory and username
	homedir=`echo $line|cut -d: -f6`
	username=`echo $line|cut -d: -f1`
	#if the home directory exists
	if [ -d $homedir ];then
		#create a variable for the full name
		fullname=`echo $line|cut -d: -f5|cut -d+ -f1`
		#if the user's directory is a subdirectory of 'majors'
		if [ -d /home/STUDENTS/majors/$username ];then
			#put full name in 'majors.txt' list file
			echo $fullname >> majors.txt
		else
			#if the user's directory is a subdirectory of 'nonmajors'
			if [ -d /home/STUDENTS/nonmajors/$username ];then
				#put full name in 'nonmajors.txt' list file
				echo $fullname >> nonmajors.txt
			else
				#else put username into 'not_student.txt' list file
				echo $username >> not_student.txt
			fi
		fi
	else
		#else: put the line read into 'no_homedir.txt' list file
		echo $line >> no_homedir.txt
	fi
#input file
done < modified_etc_passwd
