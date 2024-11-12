#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double artanh1(double x, double delta);
double artanh2(double x);

int main(){
	double delta, x;
	printf("Enter a positive real number\n");
	scanf("%lf",&delta);
	if(delta<0){
		printf("Delta is Negative\n");
		exit(1);
	}
	x = -0.9;
	int length = 1000;
	double tan1[length];
	double tan2[length];
	int i = 0;
	while(x<=0.9 && i<length){
		tan1[i] = artanh1(x,delta);
		tan2[i] = artanh2(x);
		printf("The Difference of both methods is: %.10lf\n",fabs(tan1[i]-tan2[i]));
		x += 0.01;
		i++;
	}
	return 0;
}

double artanh1(double x, double delta){
	double sum = 0;
	int n = 0;
	double ele, val;
	do{
		val = 2*n+1;
		ele = pow(x,val)/val;
		sum += ele;
		n++;
	}while(ele>=delta);
	return sum;
}
double artanh2(double x){
	return (log(1+x)-log(1-x))/2;
}
