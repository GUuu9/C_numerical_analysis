#include "math.h"
#include <stdio.h>
#include <conio.h>

float f(float x) { return (pow(x,3)-9*x +1); }
void main() {
	float x1, x2, x3, y1, y2, y3;
	int i;
	printf("\n");
	printf("�ʱ�ġ x1, x2�� �Է��ϼ��� : ");
	scanf("%f %f", &x1, &x2);
	printf("\n");
	printf("	���ߺ��ҹ�\n");
	printf("-------------\n");
	printf(" �ݺ�      x\n");
	printf("-------------\n");
	for(i=1;i<20;i=i+1){
		y1= f(x1);
		y2=f(x2);
		x3=(x1*y2-x2*y1)/(y2-y1);
		y3=f(x3);
		if(y1*y3 <= 0)
			x2=x3;
		else
			x1=x3;
		printf("%4d		%f\n",i,x2);
		if(x1 == x3) break;
	}
		printf("-------------\n\n");

	printf ( "�ƹ�Ű�� ��������.\n" );
	while ( !kbhit() );
	fflush( stdin );

}