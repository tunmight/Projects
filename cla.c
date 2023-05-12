#include <stdio.h>
int main(void)
{
	char* age[] = {"tolu", "is", "a", "boy", NULL};
	int i = 0;

	for (i == 0; age[i] != NULL; i++)
		{
		printf("age[%d]: %s\n", i, age[i]);
		}

	return (0);
}

