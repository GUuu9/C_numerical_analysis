#include "math.h"
#include <stdio.h>
#include <conio.h>

float f(float t) { return (pow(t,3) - 2); }
float df(float t) {return (3*pow(t,2)); }

void main() {
	float x, x0, x1;
	int i;
	printf("\n");
	printf("초기치를 입력하세요 : ");
	scanf("%f", &x0);
	printf("\n");
	printf("	뉴튼법  \n");
	printf("-------------\n");
	printf(" i      x(i)\n");
	printf("-------------\n");
	for(i=1;i<20;i=i+1){
		x1 = x0 - f(x0)/df(x0);
		x = fabs(x1-x0);
		if(x< 1e-7) break;
		x0=x1;
		printf("%4d		%f\n",i,x1);
	}
		printf("-------------\n\n");

	printf ( "아무키나 누르세요.\n" );
	while ( !kbhit() );
	fflush( stdin );

}