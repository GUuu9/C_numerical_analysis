#include <stdio.h>
#include <math.h>
#include <conio.h>

void gauss(float a[10][10], float xx[10][10],int m);

void main() {
	float a[10][10], xx[10][10], x[10], y[10], z, h, f, s=0;
	int indexpt[10], m, k, jj, j, kdr, i, l;

	printf("\n");
	printf("미분계수 계산에 사용되는 점의 수를 입력하시오 : ");
	scanf_s("%d", &m);

	printf("\n %d점 공식의 index입력하기\n", m);
	printf("----------------------------\n");
	for(k=1;k<=m;k++){
		printf("	%d 번째 점의 index : ",k);
		scanf_s("%d", &indexpt[k]);
	}
	printf("----------------------------\n");

	do {
	printf("\n구하려는 도함수의 차수를 입력하시오 : ");
	scanf_s("%d", &kdr);
	} while(kdr>=m);

	for(k=1;k<=m;k++)
		for(l=1;l<=m;l++){
			if(k==1) a[k][l] = 1;
			if(k>1) a[k][l] = pow(indexpt[l],k-1);
		}

	z=1;

	for(j=1;j<=kdr;j++)
		z*=j;

	for(k=1;k<=m;k++){
		a[k][m+1] = 0;
		if((k-1 == kdr)) a[k][m+1]=z;
	}

	printf("\n");
	printf("----------------------------\n");
	printf("도함수 공식\n");
	printf("----------------------------\n");
	gauss(a, xx, m);
	f=fabs(a[m][m+1]);
	for(j=1;j<=m;j++)
		printf("\n +[ %8.5f / (%8.5f *h^%d)] * f(%2d*h)\n\n", a[j][m+1]/f, 1/f, kdr, indexpt[j]);
	printf("----------------------------\n");

	while((_kbhit())==0);
}

 void gauss(float a[10][10],float xx[10][10], int m) {
	 float r;
	 int i,j,k,n;
	 n=m+1;
	 for(i=1;i<=m;i++)
		 for(k=1;k<=m;k++){
			 if(i==k) goto aa;
			 r=a[k][i]/a[i][i];
			 for(j=1;j<=n;j++){
				 a[k][j] -= r*a[i][j];
				 xx[k][j]=a[k][j];
			 }
			 aa:;
		 }
		 for(i=1;i<=m;i++)
			 for(j=1;j<=n;j++)
				 a[i][j]/= xx[i][i];
 }