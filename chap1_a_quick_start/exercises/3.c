// date:17.4.17
// author: linyang <942510346@qq.com>


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	int checksum = -1;
	while((c = getchar()) != EOF) {
		putchar(c);
		checksum += c;
		if (checksum > 127) {
			checksum = checksum % 128;
		}
	}
	printf("%d\n", checksum);

	return 0;
}


/*
kolya@asus ~/src/pointers_on_c/chap1_a_quick_start/exercises $ ./3
0102030405060708
0102030405060708
45
*/
