// STRUCT

#include <stdio.h>


/*
 struct имя_структуры(имя типа)
 {
 //описание атрибутов
 }(тут создаются переменные, которые сразу можно исп.) ;
 */

// !!! объявление переменной должно находится вне тела функции
// а в самом файле или хэдере

// ВАРИАНТ ЗАПИСИ 1
struct dinner
{
    char place[100]; //массив из 100 переменных char
    float cost;
};

// ВАРИАНТ ЗАПИСИ 2
typedef struct
{
    char place[100]; //массив из 100 переменных char
    float cost;
}  dinner;

//Использование:
//(при варианте записи 2 для объявления новой переменной нашего типа слово struct писать не нужно)

struct dinner week[7]; // выделяем память сразу под 7 экзепляров структуры (7х104байта);
struct dinner best_one; // выделяем память под одну структуру;
struct dinner *p; // берем указатель(память под реальную структуру не выделена, только под указатель);
best_one = choose(week); // ф-ии choose передаем адрес начала массива week и она возвращает структуру
// записывая ее в best_one;
p = &best_one; // в указатель р кладем адрес структуры(это будет адрес первого атрибута структуры);
p->cost = 1000.0 // обращаемся к конкретному атрибуту;
printf("%f\n", best_one.cost); // досту к атрибуту конкретного экземпляра;
printf("%d\n", sizeof(struct dinner)); // запрос размера структуры;

____________________________________________________

/ *
struct coords
{
	int x;
	int y;
} Point;		// название структуры(создание копии)

struct coords Top; // иницилизация структуры

int main()
{
	Point.x = 3; // обращение к элементу структуры
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
