#include "math.h"
#include <stdio.h>
#include <conio.h>
float f(float x) { return (x*x - 5);}
void main(void){
	float x1, x2, x3, y1, y2;
	int i;
	printf("\n");
	printf("�ʱ�ġ x1, x2�� �Է��ϼ��� : ");
	scanf("%f %f", &x1, &x2);
	printf("\n");
	printf("		���ҹ�\n");
	printf("-------------\n");
	printf(" �ݺ�      x\n");
	printf("-------------\n");
	for(i=1;i<20;i=i+1){
		y1= f(x1);
		y2=f(x2);
		x3=x1-y1*(x2-x1)/(y2-y1);
		x1=x2;
		x2=x3;
		printf("%4d		%f\n",i,x2);
		if(fabs(x1-x2)<1e-6) break;
	}
		printf("-------------\n\n");

	printf ( "�ƹ�Ű�� ��������.\n" );
	while ( !kbhit() );
	fflush( stdin );

}