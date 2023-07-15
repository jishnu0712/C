
#include <stdio.h>
int main(int argc, char *argv[])
{
	int counter;
	if (argc == 1)
	{
		printf("Only name supplied: %s", argv[0]);
	}
	if (argc >= 2)
	{
		printf("\nNumber Of Arguments Passed: %d", argc);
		printf("\n----Following Are The Command Line Arguments Passed----");
		for (counter = 0; counter < argc; counter++)
			printf("\nargv[%d]: %s", counter, argv[counter]);
	}
	return 0;
}
