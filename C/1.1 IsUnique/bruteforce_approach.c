//isUnique Brute force approach
#include <stdio.h>
#include<stdbool.h>
#include<string.h>
bool isUnique(char* str)
{
	// If at any time we encounter 2
	// same characters, return false
	for (int i = 0; i < strlen(str) - 1; i++)
	{
		for (int j = i + 1; j < strlen(str); j++) 
		{
			if (str[i] == str[j]) 
			{
				return false;
			}
		}
	}

	// If no duplicate characters encountered,
	// return true
	return true;
}

// driver code
int main()
{
	char str[] = "tutemonks";

	if (isUnique(str)) 
	{
		printf("Has Unique characters");
	}
	else 
	{
		printf("Has duplicate characters");
	}
	return 0;
}