#include <stdio.h>
#include <math.h>
#include <conio.h>

float f(float t) { return(pow(t,3)+2); }

void main() {
	float x[100], a, b, s1=0,s2=0,s,h;
	int n, i;
	printf("\n");
	printf(" simpson ���� \n");
	printf("-----------------------------\n\n");
	printf("���� [a, b]�� ���� �Է��Ͻÿ�. \n");
	scanf_s("%f %f", &a, &b);
	printf("\n�־��� ������ ���� �Ͻðڽ��ϱ�? \n");
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
	printf("���а� = \n%f\n",s);

	while((_kbhit())==0);
}