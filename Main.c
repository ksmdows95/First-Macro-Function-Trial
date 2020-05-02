#include <stdio.h>
#define PI 3.14
#define ALAN(x, y) x*y*y 

int main()
{
	int radius;
	double area;
	printf("Enter the radius: ");
	scanf("%d", &radius);
	area = ALAN(PI, radius);
	printf("The area is %lf \n", area);

}