#include <stdio.h>

void main() {
	float a[10][10], b[10], x[10];
	int i = 0, j = 0, n = 0, loop = 0;

	printf("����� ������ �Է�. ");		// ���� �Է� �޾� n�� ����
	scanf_s("%d", &n);					// n = 2;

	printf("��� A(i,j)�� ������ �Է�. \n");

	for (i = 1; i <= n; i++) {			// a[1][1] a[1][2]
		for (j = 1; j <= n; j++)		// a[2][1] a[2][2]
			scanf_s("%f", &a[i][j]);
	}

	printf("�ʱ�ġ x(1),...,x(n) �� �Է��Ͻÿ� : ");

	for (i = 1; i <= n; i++)		// x[1] = 1
		scanf_s("%d", &x[i]);		// x[2] = 0

	printf("\n-----------------------------------------------\n");
	printf("�ܰ�     x1              x2             x1/x2\n");
	printf("\n-----------------------------------------------\n");

	for (loop = 1; loop <= 15; loop++) {
		for (i = 1; i <= n; i++) {
			b[i] = 0;				// b[i] �� �ʱ�ȭ;
			for (j = 1; j <= n; j++)
				b[i] += a[i][j] * x[j];
		}
		for (i = 1; i <= n; i++)
			x[i] = b[i];

		printf("%3d	", loop);

		for (i = 1; i <= n; i++)
			printf("%12.4e	", x[i]);

		printf("%12.4e \n", x[1] / x[2]);
	}
	printf("\n----------------------------------------------\n");

	while ((_kbhit()) == 0);
}