#include <stdio.h>
#include <stdlib.h>

int main( ) 
{
	double a,step,x,y,Y,z;
	printf("please enter a value\n");
	a=1;//scanf ("%lf",&a);
	step=0.001;
	x=0;
	Y=a;
	y=(1-step)*Y;
	z=Y-y;
	printf("    x                 y\n");
	while(z>=0.000001)
	{
	    Y=y;
		x=x+step;
	    y=(1-step)*Y;
	    z=Y-y;
	    printf("%lf          %lf\n",x,Y);
	}
	return 0;
}
