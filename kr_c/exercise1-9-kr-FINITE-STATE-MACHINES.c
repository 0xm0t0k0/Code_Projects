//Two States: NORMAL, IN_BLANK
#include <stdio.h>

#define NORMAL 0
#define IN_BLANK 1

int main() {
	int c;
	int state = NORMAL;


	while ((c = getchar()) != EOF) {
		if (c == ' '){
			if (state == NORMAL) {
				//if in normal print then change stat
				putchar(c);
				state = IN_BLANK;
			}
		//if already in blank do nothing
		}
		else {
			//Found normal letter (non-space)
			putchar(c);
			state = NORMAL;
		}
	}
}
