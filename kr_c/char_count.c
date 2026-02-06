//Counts characters
//Version 1

#include <stdio.h>

int main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}


// You can also write it with a for loop
//
// double nc;
// for(nc = 0; getchar() != EOF; ++nc)
// ;
// printf("%.0f\n", nc);
//
// printf uses %f for both float and double; %.0f suppresses the printing of the decimal point and the
//fraction part, which is zero.
