#include<stdio.h>

int main(){
	int a = INT_MAX;
	float b = FLOAT_MAX;
	double c = DOUBLE_MAX;
	printf("the values:");
	printf("%d\n %d\n %d\n", a,b,c);
	printf("the sizes:");
	printf("%d\n %d\n %d\n", sizeof(a),sizeof(b),sizeof(c));
	
	return 0;
}