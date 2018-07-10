#include<stdio.h>
int main() {
	int a[3], n, i, j;
	nhaplai:
	printf("nhap vao so nguyen n co 3 chu so");
	scanf("%d", &n);
	if (n < 100 || n>1000) {
		printf("sai roi nhap lai cho dung kia!");
		goto nhaplai;
	}
	for (i = 0; i < 3; i++) {
		a[i] = n % 10;
		n = n / 10;
	}
	for(i=0;i<3;i++){
		for (j = 0; j < 3; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}

	}
	for (i = 0; i < 3; i++) {
		printf("%d",a[i]);
	}
	return 0;
}
