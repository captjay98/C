#include <stdio.h>

void Auto_Static(void)
{

	int autovar = 1;
	static int staticvar = 1;

	printf("automatic = %i, static = %i\n", autovar, staticvar);

		++autovar;
		++staticvar;

}

int main()

{

	int i;
	void Auto_Static(void);

	for (i = 0; i < 5; i++)
		Auto_Static();

	return 0;
			

}
