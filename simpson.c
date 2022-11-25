#include <stdio.h>
#include <math.h>
#include <conio.h>

float f(float t) { return(pow(t,3)+2); }

void main() {
	float x[100], a, b, s1=0,s2=0,s,h;
	int n, i;
	printf("\n");
	printf(" simpson 공식 \n");
	printf("-----------------------------\n\n");
	printf("구간 [a, b]의 값을 입력하시오. \n");
	scanf_s("%f %f", &a, &b);
	printf("\n주어진 구간을 몇등분 하시겠습니까? \n");
	scanf_s("%d",&n);
	h=(b-a)/n;
	for(i=1;i<=n-1;i+=2){
		x[i]=a+i*h;
		s1+=4*f(x[i]);
	}
	for(i=2 ;i<=n-2;i+=2){
		x[i]=a+i*h;
		s2+=2*f(x[i]);
	}
	s=(s1+s2+f(a)+f(b))*h/3;
	printf("적분값 = \n%f\n",s);

	while((_kbhit())==0);
}