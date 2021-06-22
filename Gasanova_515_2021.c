/**
 * @file Gasanova_515_2021.c
 * @author �������� �. �., ��. 515
 * @date 22 ���� 2021
 * @brief ��������
*/

#include <stdio.h>
#include <locale.h>

/**
 * @brief ����� ���� � ���� ������
 * @param day ����� ���
 * @param month ����� ������
*/
void print_date(int day, int month) {
	if (!(month > 0 && month <= 12 && day > 0 && day <= 31)) return;

	switch (day) {
		case 10: printf("������"); break;
		case 11: printf("����������"); break;
		case 12: printf("����������"); break;
		case 13: printf("����������"); break;
		case 14: printf("������������"); break;
		case 15: printf("�'���������"); break;
		case 16: printf("�i���������"); break;
		case 17: printf("�i��������"); break;
		case 18: printf("�i�i��������"); break;
		case 19: printf("���'���������"); break;
		case 20: printf("��������"); break;
		case 30: printf("��������"); break;
	default:
		switch (day / 10 % 10) {
			case 2: printf("�������� "); break;
			case 3: printf("�������� "); break;
		}
		switch (day % 10) {
			case 1: printf("�����"); break;
			case 2: printf("�����"); break;
			case 3: printf("����"); break;
			case 4: printf("��������"); break;
			case 5: printf("�'���"); break;
			case 6: printf("�����"); break;
			case 7: printf("�����"); break;
			case 8: printf("������"); break;
			case 9: printf("���'���"); break;
		}
	}
	printf(" ");

	switch (month) {
		case 1: printf("�i���"); break;
		case 2: printf("������"); break;
		case 3: printf("�������"); break;
		case 4: printf("��i���"); break;
		case 5: printf("������"); break;
		case 6: printf("������"); break;
		case 7: printf("�����"); break;
		case 8: printf("������"); break;
		case 9: printf("�������"); break;
		case 10: printf("������"); break;
		case 11: printf("���������"); break;
		case 12: printf("������"); break;
	}
}

int main() {
	setlocale(LC_CTYPE, "rus");
	
	int month, day;
	{
		_Bool valid;
		do {
			printf("����i�� ���� i �i����: ");
			valid = scanf_s("%d %d", &day, &month);
			while (fgetc(stdin) != '\n');
		} while (!valid || !(month > 0 && month <= 12 && day > 0 && day <= 31));
	}

	print_date(day, month);

	return 0;
}