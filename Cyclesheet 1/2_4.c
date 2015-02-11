#include <stdio.h>

int main(void){

	float pi=3.14;
	float radius,area;

	printf("Enter the radius of circle : ");
	/*

	 "%d" is format identifier for integer
	 "%f" is format identifier for float

	  A format identifier helps the compiler understand wether the
	  value entered is an integer or float.
	  float refers to decimal notation.
	  We use float here instead of int because the area of a circle
	  will mostly be in decimal format.

	*/
	scanf("%f",&radius);
	area = pi*radius*radius;
	printf("Area of circle with radius %f is %f \n",radius,area);
	return 0;
}
