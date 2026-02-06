#include <stdio.h>

/* copy input to output; 2nd version Ch1K&R */

int main() {
	int c;

	while ((c = getchar()) != EOF){ //this can be also written as 
		putchar(c);	        //c = getchar();
				        //while (c != EOF) {
				        //putchar(c);
	}			        //c = getchar(); 
				       
