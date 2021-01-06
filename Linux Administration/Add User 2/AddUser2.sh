#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#This script takes the input from a file called 'cs_roster.txt' and
#	then processes the information to produce an output that can
#	be added to the '/etc/passwd' file which can be processed by 
#	yet another script to add them as a new user or modify an
#	existing user.
#10/03/2018

#! /bin/bash

#create global variables for the directories
mindir=/home/STUDENTS/nonmajors
majdir=/home/STUDENTS/majors
shell=/bin/bash

#read each line from the file input at 'done' until it hits EOL
while read ln;do
	#cut the full class code from the line read
	clascd=`echo $ln | cut -d'|' -f1`
	#cut the full class code in half (Alphebetical and Numerical Halves)
	clas1=`echo $clascd | cut -d' ' -f1`
	clas2=`echo $clascd | cut -d' ' -f2`
	#cut the username from the line
	usr=`echo $ln | cut -d'|' -f2`
	#cut the full name from the line
	flname=`echo $ln | cut -d'|' -f3`
	#cut the student ID from the line
	stuid=`echo $ln | cut -d'|' -f4`
	#Cut the first major code from the line
	majcd1=`echo $ln | cut -d'|' -f5`
	#cut the second major code from the line
	majcd2=`echo $ln | cut -d'|' -f6`
	#do not allow students with class code '1513'
	if [ "$clas2" != "1513" ];then
		#do not allow students with 'CPSMA' unless it is '2923'
		if [ "$clas1" != "CPSMA" ] || [ "$clas2" = "2923" ];then
			#Figures out if they are a major or not (Major code = 0510)
			if [ "$majcd1" = "0510" ] || [ "$majcd2" = "0510" ];then
				#create the output for 'Majors'
				echo $usr":x:::"$flname"+"$stuid":"$majdir":"$shell
			else
				#create the output for 'NonMajors'
				echo $usr":x:::"$flname"+"$stuid":"$mindir":"$shell
			fi
		fi
	fi
#file input
done < "cs_roster.txt"
