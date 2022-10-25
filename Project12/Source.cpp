#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	int n, k = -1;
	float s = 0;
	char name[30];
	struct Tovar
	{
		char name[30]; // Наименование
		int kol; // Количество
		float cena; // Цена
	}

	mas[100]{}; // Массив структур

	cout << "Введите кол-во товаров n: ";
	cin >> n;

	// Ввод значений полей стуктуры
	for (int i = 0; i < n; i++)
	{
		cout << "\nНаименование: ";
		cin >> mas[i].name;
		cout << "\nКоличество: ";
		cin >> mas[i].kol;
		cout << "\nЦена: ";
		cin >> mas[i].cena;
	}

	cout << "\nВведите наименование искомого товара: ";
	cin >> name; // Искомый товар

	for (int i = 0; i < n; i++)
	{
		// Поиск номера искомого товара
		if (strcmp(name, mas[i].name) == 0) k = i;
		// Подсчёт общей стоимости товаров на складе
		s += mas[i].kol * mas[i].cena;

		if (k != -1)
		{
			cout << "\n" << mas[k].name << " " << mas[k].kol << " " << mas[k].cena << endl;
			break;
		}
	}

	if (k == -1)
		cout << "\nТовар не найден" << endl;

	cout << "\nОбщая стоимость товаров = " << s << endl;

	system("pause");
	return 0;
}
