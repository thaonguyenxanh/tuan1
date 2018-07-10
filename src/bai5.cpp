#include<stdio.h>
#include<conio.h>
int main() {
	int ngay, thang, nam;
	bool a;
nhaplai:
	printf("nhap vao ngay:\n");
	scanf_s("%d", &ngay);
	printf("nhap vao thang:\n");
	scanf_s("%d", &thang);
	printf("nhap vao nam:\n");
	scanf_s("%d", &nam);
	//if ((ngay < 1 || ngay>31)|| (thang < 1 || thang>12) || (nam < 0)||(((thang==2&&(ngay<1||ngay>29))||(thang == 4)||(thang == 6)||(thang == 9)||(thang == 11))&&(ngay<0||ngay>30))){
	//	printf("khong hop le!");
	//	printf("sai roi nhap lai cho dung!\n");
	//	goto nhaplai;

	//}
	//else
	//	if (thang == 2 && (1 > ngay || ngay > 28)){
	//		printf("khong hop le!");
	//		printf("sai roi nhap lai cho dung!\n");
	//		goto nhaplai;
	//	}
	//	else {
	//		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
	//		{

	//			printf("nam nhuan.");
	//		}
	//		else
	//			if ((thang == 2 && (1 > ngay || ngay > 29) && ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))))
	//			{
	//				printf("nam nhuan.");
	//			}

	//			else
	//			{
	//				printf("ko phai nam nhuan");

	//			}
	//	}
	if (thang == 2 && ngay>0 && ngay <30)
	{
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
			printf("nam nhuan.");
		}
		else {

			printf("ko hop le");
			goto nhaplai;
		}

	}
	else
		if ((ngay < 1 || ngay>31) || (thang < 1 || thang>12) || (nam < 0) || (((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11)) && (ngay < 0 || ngay>30))) {
			printf("khong hop le!");
			goto nhaplai;
		}
		else {
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
				printf("nam nhuan!");
			}

		}
	_getch();
	return 0;
}