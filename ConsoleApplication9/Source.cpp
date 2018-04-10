/*
FILE- структура
открытие фыйла:

FILE *fopen (имя файлаб режим)    // !!!указывает на пакет содержащий инфо о файле
режимы:


если не открыл файл, вернет error
если файл был открыт, обязательно необходимо его закрыть
*/
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));


	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Вы обещали :D\nВведите номер задания: ";
		cin >> nz;
		cin.get();



		switch (nz)
		{
		case 1:
		{
			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "w")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				printf("Create \n");

				int a = 500;
				float  b = 4.5;
				fprintf(fp, "%d, %1.1f, hello\n", a, b);
			}


			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}

		}break;

		case 2:
		{
			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "w")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				printf("Create \n");

				int a;
				scanf("%d", &a);

				float  b;
				scanf("%f", &b);

				char string[] = "hello";

				for (int i = 0;i < 5;i++)
				{
					fprintf(fp, "%d, %2.2lf, %s\n", a, b, string);
				}
			}


			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}

			system("pause");
		}break;

		case 3:
		{
			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "w")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				printf("Create \n");

				float  mas[20];

				for (int i = 0; i < 20; i++)
					mas[i] = ((1.2 + rand() % 10) / 1.2 + rand() % 10) + 1.2 + rand() % 10;


				for (int i = 0;i < 20;i++)
					fprintf(fp, "%2.2f\n", mas[i]);
			}

			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}

			system("pause");
		}break;

		case 4:
		{
			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "a")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				fprintf(fp, "hello, goodbye\n");
			}

			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}

			system("pause");
		}break;

		case 5:
		{
			/*5.	В конец существующего файла записать
				a.	6 целых чисел
				b.	5 вещественных чисел
				c.	4 слова
				FILE *fp = NULL;*/

			FILE *fp = NULL;
			if ((fp = fopen("test.txt", "w")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				printf("Create \n");
				int a = 5;
				float b = 2.6;
				char c[] = "haha";

				for (int i = 0;i < 6;i++)
				{
					fprintf(fp, "%d \n", a);

					if (i < 5)
						fprintf(fp, "%4.1f \n", b);
					if (i < 4)
						fprintf(fp, "%s \n", c);

					fprintf(fp, "\n------------------\n\n");
				}
			}

			if (fclose(fp) == 0)
				printf("файл закрыт успешно\n");
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}
			system("pause");
		}break;

		case 6:
		{
			/*1.	Дан типизированный файл, элементами которого являются числа.Напечатать
				a.n - й элемент
				b.последний элемент*/

			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "a")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				float  mas[20];

				int i;
				for (i = 0; i < 20; i++)
					mas[i] = ((1.2 + rand() % 10) / 1.2 + rand() % 10) + 1.2 + rand() % 10;

				int a;
				printf("введите n-й элемент");
				scanf("%d", &a);

				fprintf(fp, "n-й элемент %2.2f\n", mas[a]);
				fprintf(fp, "послений элемент %2.2f\n", mas[i-1]);

			}

			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}

			system("pause");
		}break;

		case 7:
		{
			/*2.	Дан типизированный файл, элементами которого являются отдельные слова.Напечатать:
			a.k - й элемент
				b.последний элемент*/

			FILE *fp = NULL;

			if ((fp = fopen("test.txt", "a")) == NULL)
			{
				printf("Файл не открыт\n");
				exit(1);
			}
			else
			{
				printf("Create \n");

				fprintf(fp, "hwllo world");
				
				int a;
				printf("введите n-й элемент: ");
				scanf("%d", &a);
				
				int count = 0;
				int ch;

				while (getc(fp) == EOF)
				{
					count++;
					ch = getc(fp);
					fprintf(fp, "-----------------------\n\n");

					if(a==count)
						fprintf(fp,"!n-й элемент - %c\n", ch);

					//if(getc(fp)=='\0')
					//fprintf(fp,"!последний элемент- %c\n", ch);
				}
			}


			if (fclose(fp) == 0)
			{
				printf("файл закрыт успешно\n");
			}
			else
			{
				printf("Ошибка закрытия потока\n");
				exit(1);
			}


		}break;



		}

		cout << "Хотите продолжить 1/0?";
		cin >> q;

		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}
void main2()
{
	setlocale(LC_ALL, "Rus");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	FILE *fp = NULL;

	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		printf("Файл не открыт\n");
		exit(1);
	}
	else
	{
		printf("Create \n");

		/*	char letter = 'T';
			fputc(letter, fp);*/

			/*system("chcp 1251");
			for (int i = -128;i < 128;i++)
				fputc(i, fp);*/

		int ch = getc(fp);
		/*	while (ch != EOF)
			{
				printf(" - %c\n", ch);
				ch = getc(fp);
			}*/

		while (feof(fp) == 0)
		{
			printf(" - %c\n", ch);
			ch = getc(fp);
		}
	}

	//fclose(fp); //очищает память, очищает буфер и можно использовать место снова

	if (fclose(fp) == 0)
	{
		printf("файл закрыт успешно\n");
	}
	else
	{
		printf("Ошибка закрытия потока\n");
		exit(1);
	}

	/* fputc- записывает символы в файлы
	fputc(int ch, FILE*fp
	*/

}