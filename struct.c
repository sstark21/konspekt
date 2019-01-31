// STRUCT

#include <stdio.h>

/ *
struct coords
{
	int x;
	int y;
} Point;		// название структуры

struct coords Top; // иницилизация структуры

int main()
{
	Point.x = 3;
	Point.y = 54;
	Top.x = 120;
	Top.y = 567;
	printf ("Point x = %d\n", Point.x);
	printf ("Point y = %d\n", Point.y);
	printf ("Top x = %d\n", Top.x);
	printf ("Top y = %d\n", Top.y);
	return (0);
}
* /

____________________________________________________

/ *
typedef struct
{
	int x;
	int y;
} Point;

typedef struct
{
	Point a;
	Point b;
} Box;

Point top = {33, 45};
Point bottom;
Box rect = {6, 12 , 34, 55};

int main()
{
	bottom.x = 7;
	bottom.y = 3;
	printf("top.x = %d\n", top.x);
	printf("top.y = %d\n", top.y);
	printf("bottom.x = %d\n", bottom.x);
	printf("bottm.y = %d\n", bottom.y);
	printf ("____________________\n");
	printf("Point a rect.a.x = %d\n", rect.a.x); 
	return (0);
}
 * /
____________________________________________________


