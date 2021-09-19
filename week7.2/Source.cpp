#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char s[100];
int a = 0, e = 0, i = 0, o = 0, u = 0;
int vs;
void c(char c) {
	if (c == 'a' || c == 'A') {
		a = a + 1;
	}
	if (c == 'e' || c == 'E') {
		e = e + 1;
	}
	if (c == 'i' || c == 'I') {
		i = i + 1;
	}
	if (c == 'o' || c == 'O') {
		o = o + 1;
	}
	if (c == 'u' || c == 'U') {
		u = u + 1;
	}
}
int main() {
	printf("Enter string : ");
	scanf("%s", &s);
	printf("\n-------------------------\n");
	vs = strlen(s);
	for (int x = 0; x < vs; x++) {
		c(s[x]);
	}
	printf("a = %d\n", a);
	printf("e = %d\n", e);
	printf("i = %d\n", i);
	printf("o = %d\n", o);
	printf("u = %d\n", u);
	return 0;
}