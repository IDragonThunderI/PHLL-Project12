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
		char name[30]; // ������������
		int kol; // ����������
		float cena; // ����
	}

	mas[100]{}; // ������ ��������

	cout << "������� ���-�� ������� n: ";
	cin >> n;

	// ���� �������� ����� ��������
	for (int i = 0; i < n; i++)
	{
		cout << "\n������������: ";
		cin >> mas[i].name;
		cout << "\n����������: ";
		cin >> mas[i].kol;
		cout << "\n����: ";
		cin >> mas[i].cena;
	}

	cout << "\n������� ������������ �������� ������: ";
	cin >> name; // ������� �����

	for (int i = 0; i < n; i++)
	{
		// ����� ������ �������� ������
		if (strcmp(name, mas[i].name) == 0) k = i;
		// ������� ����� ��������� ������� �� ������
		s += mas[i].kol * mas[i].cena;

		if (k != -1)
		{
			cout << "\n" << mas[k].name << " " << mas[k].kol << " " << mas[k].cena << endl;
			break;
		}
	}

	if (k == -1)
		cout << "\n����� �� ������" << endl;

	cout << "\n����� ��������� ������� = " << s << endl;

	system("pause");
	return 0;
}
