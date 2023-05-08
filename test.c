#include <stdio.h>

int main(void)
{
	int age = 0;
	
	printf("Enter age: ");
	scanf("%d", &age);
    
	if ( age == 30)
        {
            printf("Good");
            printf("The age is 30\n");
        }
	else 
	{
            printf("age is not %d\n", &age);
        }

    return (0);

}
