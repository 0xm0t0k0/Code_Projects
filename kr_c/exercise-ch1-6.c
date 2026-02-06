#include <stdio.h>

//Verify expression getchar() != EOF is 0 or 1


int main()
{
	int c;

	while ((c = getchar()) != EOF){
		int a;

		a = (getchar() != EOF);

		printf("%d", a);
	}
}
