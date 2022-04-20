#include <stdio.h>
#include <stdlib.h>

int main()
{
	int random;
	int i;
	for (i = 0; i < 4; i++) {
		random = rand()%4;

		printf("%d", random);
	}
	return 0;
}

