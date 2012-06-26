#define _BSD_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>


void hearts(int);

int main()
{

	int count = 0;
	
	int p;
	p = getpid();
	srand(time(NULL)+p);
	int y;
	y = 60 + (int) (100.0 * (rand() / (RAND_MAX + 1.0)));

	hearts(y);

}



void hearts(int y)
{
	while (y--!=0) {	

		printf("   ***   ***   \n");
		printf("  ***********  \n");
		printf("   *********   \n");
		printf("    *******    \n");
		printf("     *****     \n");
		printf("      ***      \n");
		printf("        *      \n");
	}

}
