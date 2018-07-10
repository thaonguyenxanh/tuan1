#include<stdio.h>
#include<conio.h>
int main(void) {
	float giaTien = 10000;
	int m;
	printf("nhap so m da di dc:");
	scanf_s("%d", &m);
	if (m <= 1000) {
		printf("%f",giaTien);
	}
	else
	if (m > 1000 && m <= 30000) {
		giaTien = giaTien +(float)(m - 1000) / 200 * 1500;
		printf("gia tien: %f", giaTien);
	}
	else
	{
		int m2 = m - 30000;
		giaTien = 10000 + (float)29000/ 200 * 1500 + (float)m2 / 1000 * 8000;
		printf("%f", giaTien);
	}

	getchar();
	_getch();
	return 0;
}