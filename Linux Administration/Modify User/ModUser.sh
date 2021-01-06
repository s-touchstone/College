#Steven Touchstone
#Prof. Tarver, Mary
#This script will take in information from a file and generate commands that 
#	be used to modify a user's information in the system and 
#	then output those commands to another file.
#10/13/2018

#global variable for comparing differences
etcpwd="/etc/passwd"

#read each line from input file
while read ln;do
	#cut the username field from each line
	usr=`echo $ln|cut -d: -f1`
	#cut full name field from each line
	fname=`echo $ln|cut -d: -f2`
	#cut student ID field from each line
	sid=`echo $ln|cut -d: -f3`
	#cut advisor name field from each line
	adv=`echo $ln|cut -d: -f4`
	#grep the line containing the student's ID from etc/password and cut/get the current username
	org_usr=`grep "$sid" $etcpwd|cut -d: -f1`
	#if the advisor field contains 'Tarver' of 'Ufimtsev' they are CS majors
	if [[ $adv == *"Tarver"* ]] || [[ $adv == *"Ufimtsev"* ]];then
		#set home directory in majors
		homedir="/home/STUDENTS/majors/$usr"
		#-c sets GECOS(full name+ID), -l sets new username(login), -m moves directory and contents
	       	#to new directory then it prints the full command into an output file
		echo "usermod -c '$fname+$sid' -l $usr -m $homedir $org_usr" >> modified_users.txt
	#if the advisor is notone of the CS advisors
	else
		#set home directory in nonmajors
		homedir="/home/STUDENTS/nonmajors/$usr"		
		#-c sets GECOS(full name+ID), -l sets new username(login), -m moves directory and contents
	       	#to new directory then it prints the full command into an output file
		echo "usermod -c '$fname+$sid' -l $usr -m $homedir $org_usr" >> modified_users.txt
	fi
#input file
done < active_cs.txt
