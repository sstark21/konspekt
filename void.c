// Манипуляции с void

#include <stdio.h>

int main (int argc, char* argv[])
{
	char c = 'W';
	int i = 420;
	double d = -1;
	void *p;

	p = &c;
	printf("&c\n", *(char*)p); // W
    p = &i;
	printf("&c\n", *(int*)p); // 420
	p = &d;
	printf("&lf\n", *(double*)p); // -1
	return (0);
}
