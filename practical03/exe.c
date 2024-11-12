#include <stdio.h>
#include <math.h>
int main(void){
	int N = 12;
	float a = 0;
	float b = 60;
	float b_rad;
	b_rad = (M_PI*b)/180;
	float sum = tan(a) + tan(b_rad);
	printf("Sum before:%f\n",sum);
	int i;
	for (i = 5; i<60; i = i+5)
	{
		sum += 2*tan(i*M_PI/180);
	}

	printf("Sum after loop:%f\n",sum);
	float sumf = ((b_rad-a)/(2*N))*sum;
	printf("Final Sum value:%f\n",sumf);
	printf("The actual value is: %f\n",logf(2));
	float abs_diff = fabs(sumf - logf(2));
	float real_diff = fabs(1-(sumf/logf(2)));
	printf("Absolute Difference: %f\n Real Difference: %f\n",abs_diff,real_diff);
	return 0;
}

