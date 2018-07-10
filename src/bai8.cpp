#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
int main() {
	char *s = (char*)malloc(1);
	int c;
	int i = 0;
	while ((c= getchar())!='\n'&&c!=EOF)
	{
		s[i++] = c;
		s = (char*)realloc(s, i + 1);
	}
	s[i] = '\0';
	_strrev(s);
	printf("%s", s);
	_getch();

}