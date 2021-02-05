#include <stdio.h>

/*int main()
{
	int i = 22132132323223; long l;
	l = i*i;
	printf("%lli", l);
	l = (long)i*i;
	printf("\n%lli", l);
	return 0;
	
}*/

#include <cstdlib>
#define ROWS 4
#define COLS 4

int main()
{
		int c[ROWS*COLS], b[ROWS*COLS], a[ROWS*COLS];
		for(int i = 0; i < (ROWS*COLS); i++)
		{
			a[i] = rand()%100;
			b[i] = rand()%100;		
		}
		for(int row=0; row < ROWS; row++)
		{
			for(int col=0; col < COLS; col++)
			{
				c[row*COLS+col] = a[row*COLS+col] + b[row*COLS+col];
				printf("%d ", c[row*COLS+col]);
			}
			puts("");
		}
		return 0;
}
