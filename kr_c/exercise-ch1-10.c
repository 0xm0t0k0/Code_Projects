#include <stdio.h>

//Program that copies its input to itss output, replacing each tab by \t, backspace by \b and each backslash by \\

int main() 
{
	int c;
	while((c = getchar()) != EOF) {
		
		//tab
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}
