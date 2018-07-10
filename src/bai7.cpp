#include<stdio.h>
#include<conio.h>
int UCLN(int a, int b) {
	int r=1;
	float q;
	while (r!=0)
	{
		if (a > b) {
			q = a / b;
			r = b * q - a;
			a = b;
			b = r;
		}
		else
		{
			q = b / a;
			r = a * q - b;
			b = a;
			a = r;
		}
		return a;

	}


}
int BCNN(int a, int b) {
	int max, step, lcm;
	if (a > b)
		max = step = a;
	else
		max = step = b;

	while (1) {
		if (max%a == 0 && max%b == 0) {
			lcm = max;
			break;
		}

		max += step;
	}
	return lcm;
}
int main() {
	int a, b, c;
	printf("nhap so a:");
	scanf_s("%d", &a);
	printf("nhap so b:");
	scanf_s("%d", &b);
	printf("1: UCLN\n2: BCNN\n");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:
		printf("UCNL cua %d va %d la: %d", a, b, UCLN(a, b));
		break;
	case 2:
		printf("BCNN cua %d va %d la: %d", a, b, BCNN(a, b));
		break;

	default:
		break;
	}
	_getch();

}