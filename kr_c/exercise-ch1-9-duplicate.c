#include <stdio.h>

//Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank


int main() 
{
	int c, last_seen = 'a';

	while ((c = getchar()) != EOF) {
		
		if (c == ' ')
		{
			if (last_seen != ' ')
				putchar(c);	
		}

		else
			putchar(c);

		last_seen = c;
	}
}

