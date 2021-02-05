#include <stdio.h>

//void concat(int m, int n, int a[m], int b[n], int *c[m+n]);

void concat(int m, int n, int a[], int b[], int c[])
{  int i;
	for( i=0; i < (m+n); i++)
	{
		if(i < m) c[i] = a[i];
		else c[i] =  b[i-m];
	}
}

int main()
{
	int sv1, sv2;
	int v1[] = {1, 2, 3, 4, 5, 6};
	int v2[] = {5, 6, 7, 8, 9, 10, 11};
	sv1 = sizeof(v1)/sizeof(v1[0]);
	sv2 = sizeof(v2)/sizeof(v2[0]);
	int v3[sv1+sv2];
	concat(sv1, sv2, v1, v2, v3);
	int i;
	for( i=0; i < (sv1+sv2); i++) printf("%d ", v3[i]);
	return 0;
}


