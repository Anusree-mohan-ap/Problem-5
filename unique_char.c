/* Documentation 
Name          : Anusree Mohan
Date          : 29-11-24
Title         : Check if a string has all unique characters
Sample input  : qwertyuiop
Sample output : true
*/

#include <stdio.h>
#include <string.h>

int check_string(char *str) {
	int len = strlen(str);
	for(int i = 0; i < len - 1; i++) {
		for(int j = i+1; j < len; j++) {
			if( str[i] == str[j] ) {
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	char str[50];

	printf("Enter the string : ");
	scanf(" %s",str);

	int ret = check_string(str);

	if( ret == 1 ) {
		printf("true\n");
	} else {
		printf("false\n");
	}

    return 0;
}


