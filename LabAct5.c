#include <stdio.h>

/*
	This function will return 1 if the number is found
	otherwise it will return 0.
	
	@param num - the 4 digit number to be searched
	@param key - is the number you will be looking for in num
	
	Example:
		num 1234
		key 2
		
		The function will return 1.
		
	precondition: num will always be a 4-digit number and key is non-negative
				  all 4-digits in the number are unique
*/

int isFound(int num, int key) {
	
	int digit;
	int found = 0;

	while (num > 0) {
		digit = num % 10;
		if (digit == key)
			found = 1;
		num /= 10;
	}
	return found;
}

int main() {
	
	int num = 6934; //You may this value to test with different 4-digit values
	int key;
	 	
	printf("Enter key to look for: ");
	scanf("%d", &key);
	
	if(isFound(num, key))
		printf("Key was found!\n");
	else
		printf("Key does not exist in that number!\n");	
	
	return 0;
}
