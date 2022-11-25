#include "math.h"
#include "stdio.h"

float f(float x)	{ return (pow(x,3)-9*x +1); }

main(void) {
	float fa,fb, fab, fc, fac, a, b, c, x;
	int i;
	printf("\n");
	printf("구간 [a,b] 값을 입력하시오 : ");
	scanf("%f %f", &a, &b);
	printf("\n");
	printf("---------------------------------------\n");
	printf("			n						a			(a+b)/2					b	\n");
	printf("---------------------------------------\n");
	for(i=1;i<=20;i++){
		c=(a+b)/2;
		printf(" %3d		%8.5f			%8.5f			%8.5f	\n", i, a, c, b);
		fa=f(a);
		fb=f(b);
		fc=f(c);
		fac=fa*fc;
		if(fac<0) b=c;
		if(fac>0) a=c;
	}
	printf("---------------------------------------\n");
}