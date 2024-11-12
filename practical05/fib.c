#include <stdio.h>
int calcfib(int *f, int *s);
int main(){
	int n, first = 0, second = 1, third;
	printf("Enter the number of terms in the series\n");
	scanf("%d",&n);
	if (n<1){
		printf("Enter a postive numnber\n");
		return 0;
	}
	if (n == 1){
		printf("The Fibonacci Series is: %d\n",first);
		return 0;
	}
	printf("The Fibonacci Series is: %d %d ",first, second);
	for(int i = 3; i<=n ; i++){
		third = calcfib(&first,&second);
		printf("%d ",third);
	}
}
int calcfib(int *f, int *s){
	int t;
	t = *f + *s;
	*f = *s;
	*s = t;
	return t;
}
