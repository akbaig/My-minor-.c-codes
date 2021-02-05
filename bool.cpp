#include <stdio.h>
#include <stdbool.h>

int main(void)
{
		_Bool flag = false;
		printf("%hhu\n", flag); //hhu is used for character
		printf("%lu", sizeof(_Bool));
		return 0;
}
