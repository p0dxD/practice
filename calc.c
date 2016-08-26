#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int *value_one = malloc(sizeof(int));
	float *value_two = malloc(sizeof(float));
	printf("%s\n", "Enter your values");
	scanf("%d %f", value_one, value_two);
	printf("%s one %d two %f\n", "value ", *value_one, *value_two);

	/*Calc the percetantge*/

	printf("%.2f\n", (*value_one**value_two));
	return 0;
}