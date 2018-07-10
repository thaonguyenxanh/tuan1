#include<stdio.h>
#include<stdlib.h>
#include<string>
int main(void) {
	char* s = (char*)malloc(1);
	int c;
	int i = 0, count1=0, count2=0;
	
	printf("Enter a string:");
	while ((c=getchar())!='\n'&& c!= EOF)
	{
		s[i++] = c;
		s =(char*) realloc(s, i + 1);


	}
	s[i] = '\0';
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A'&& s[i] <= 'Z') {
			count1 += 1;
		}
		count2 += 1;
	}
	printf("so chu hoa la: %d\n", count1);
	printf("so chu thuong la: %d", count2);
	free(s);
	getchar();
	return 0;


}