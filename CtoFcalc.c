#include <stdio.h>

int main()
{
	float dc;

	printf("Celcius: ");
	scanf("%f", &dc);

	dc*=9;
	dc/=5;
	dc+=32;

	printf("Farenheight:%f\n", dc);
	
	return 0;
}
