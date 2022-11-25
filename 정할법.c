#include "math.h"
#include <stdio.h>
#include <conio.h>
float f(float x) { return (x*x - 5);}
void main(void){
	float x1, x2, x3, y1, y2;
	int i;
	printf("\n");
	printf("초기치 x1, x2를 입력하세요 : ");
	scanf("%f %f", &x1, &x2);
	printf("\n");
	printf("		정할법\n");
	printf("-------------\n");
	printf(" 반복      x\n");
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

	printf ( "아무키나 누르세요.\n" );
	while ( !kbhit() );
	fflush( stdin );

}