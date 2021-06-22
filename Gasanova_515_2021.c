/**
 * @file Gasanova_515_2021.c
 * @author √асанова ”. ќ., гр. 515
 * @date 22 июн€ 2021
 * @brief практика
*/

#include <stdio.h>
#include <locale.h>

/**
 * @brief вывод даты в виде текста
 * @param day номер дн€
 * @param month номер мес€ца
*/
void print_date(int day, int month) {
	if (!(month > 0 && month <= 12 && day > 0 && day <= 31)) return;

	switch (day) {
		case 10: printf("дес€те"); break;
		case 11: printf("одинадц€те"); break;
		case 12: printf("дванадц€те"); break;
		case 13: printf("тринадц€те"); break;
		case 14: printf("чотирнадц€те"); break;
		case 15: printf("п'€тнадц€те"); break;
		case 16: printf("шiстнадц€те"); break;
		case 17: printf("сiмнадц€те"); break;
		case 18: printf("вiсiмнадц€те"); break;
		case 19: printf("дев'€тнадц€те"); break;
		case 20: printf("двадц€те"); break;
		case 30: printf("тридц€те"); break;
	default:
		switch (day / 10 % 10) {
			case 2: printf("двадц€ть "); break;
			case 3: printf("тридц€ть "); break;
		}
		switch (day % 10) {
			case 1: printf("перше"); break;
			case 2: printf("друге"); break;
			case 3: printf("третЇ"); break;
			case 4: printf("четверте"); break;
			case 5: printf("п'€те"); break;
			case 6: printf("шосте"); break;
			case 7: printf("сьоме"); break;
			case 8: printf("восьме"); break;
			case 9: printf("дев'€те"); break;
		}
	}
	printf(" ");

	switch (month) {
		case 1: printf("сiчн€"); break;
		case 2: printf("лютого"); break;
		case 3: printf("березн€"); break;
		case 4: printf("квiтн€"); break;
		case 5: printf("травн€"); break;
		case 6: printf("червн€"); break;
		case 7: printf("липн€"); break;
		case 8: printf("серпн€"); break;
		case 9: printf("вересн€"); break;
		case 10: printf("жовтн€"); break;
		case 11: printf("листопада"); break;
		case 12: printf("грудн€"); break;
	}
}

int main() {
	setlocale(LC_CTYPE, "rus");
	
	int month, day;
	{
		_Bool valid;
		do {
			printf("¬ведiть день i мiс€ць: ");
			valid = scanf_s("%d %d", &day, &month);
			while (fgetc(stdin) != '\n');
		} while (!valid || !(month > 0 && month <= 12 && day > 0 && day <= 31));
	}

	print_date(day, month);

	return 0;
}