#include <stdio.h>
#include <stdlib.h>

int main() {
	char c = 'a';
	short s = '0xbeef';
	int i = 100000;
	long  l = 100000000L;
	long long ll = 60000000000LL;
	printf("a char is %lu bytes\n", sizeof(c));
	printf("a short is %lu bytes\n", sizeof(s));
	printf("a int is %lu bytes\n", sizeof(i));
	printf("a long is %lu bytes\n", sizeof(l));
	printf("a long long is %lu bytes\n", sizeof(ll));
	return EXIT_SUCCESS;
}
