#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char name[16] = { 0 };
	int age;

	printf("이름이 뭔가요? :\r\n");
	scanf("%s", name);
	printf("나이는 어떻게 되나요? :\r\n");
	scanf("%d", &age);

	printf("이름 : %s\r\n나이 : %d", name, age);
}