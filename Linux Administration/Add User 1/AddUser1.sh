#Steven Touchstone
#Prof. Tarver, Mary
#East Central University
#This script takes a file as input and then reads each line. The username, GECOS,
#	and homedirectory fields are then cut from that line and stored in thier
#	own variables. Then, using those variables, you can use adduser command 
#	to add them as new users to the system. However, here we are only outputing
#	the command using echo.
#10/03/2018


#!/bin/bash

#Create global variables for the reusable shell and skeleton file directories
skel=/home/csadmin/SKEL
shell=/bin/bash

#read each line of the input file
while read ln;do
	#cut the username from the line
	usr=`echo $ln|cut -d: -f1`
	#cut the GECOS field from the line
	gecos=`echo $ln|cut -d: -f5`
	#cut the home directory from the line
	homdir=`echo $ln|cut -d: -f6`
	#print out the adduser command to be used to add each of the new users in the file
	echo "adduser -c '$gecos' -d $homdir -m -k $skel -s $shell $usr"
#The file to be read (input)
done< "new_users.txt"
