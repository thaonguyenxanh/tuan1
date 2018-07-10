#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char *xoaPhanTu(char *s,int position, int n) {
	n = strlen(s);
	if (position > strlen(s)) {
		printf("ko xoa duoc");
	}
	else {
		for (int i = position; i < n-1; i++) {
			s[i] = s[i +1];
		
		}
		s[n - 1] = '\0';
	}
	return s;
}
//char *themPhanTu(char *s, int position, int len) {
//	len = strlen(s);
//	if (position > len) {
//		printf("xao ma them dc?");
//	}
//}
int main() {
	char *s = (char*)malloc(1);
	int c;
	int i = 0;
	while ((c = getchar()) != '\n'&& EOF)
	{
		s[i++] = c;
		s = (char*)realloc(s, i + 1);
	}
	s[i] = '\0';
	while (s[0]==' ')
	{
		xoaPhanTu(s, 0, strlen(s));
	}
	for (int j = 0; j < strlen(s); j++)
	{
			if (((s[j+1] == ' '&&s[j] == ' ') || (s[j+1] == ',' &&s[j] == ','))) {
				xoaPhanTu(s, j, strlen(s));
		}

	}
	printf("%s", s);
	free(s);
	_getch();
}