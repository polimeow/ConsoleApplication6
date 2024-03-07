#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct student
{
	int id{};
	string name{};
	int age{};
	double height{};
};

int main()
{
	setlocale(LC_ALL, "ru");
	student ivan;  
	ivan.id = 1;
	ivan.name = "Иван";
	ivan.age = 17;
	ivan.height = 1.82;
	student anna;
	anna.id = 2;
	anna.name = "Анна";
	anna.age = 16;
	anna.height = 1.72;

	int a = 10;
	if (a < 10)
	{
		cout << a + 1;
	}
	else
	{

	}


	student kola{ 3,"Коля",19,1.76 };
	cout << kola.id << "\t" << kola.name << setw(13) << kola.age << setw(11) << kola.height;
	cout << "\t" << ivan.id << "\t" << ivan.name << setw(13) << ivan.age << setw(11) << ivan.height;
	cout << "\t" << anna.id << "\t" << anna.name << setw(10) << anna.age << setw(10) << anna.height;
	return 0;

}
void Show(student a)
{
	cout << "id=" << a.id << endl;
	cout << "фио=" << a.fio << endl;
	cout << "год ря=" << a.god << endl;
	cout << "пол=" << a.pol << endl;
	cout << "вес=" << a.height << endl;
	cout << "рост=" << a.rost << endl;
	cout << "стипендия=" << a.stipendia << endl;
	cout << "группа=" << a.groopa << endl;
	cout << "телефон=" << a.tel << endl;


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << left << setw(16) << a.predmeti[i][j];
		}
		cout << endl;
	} cout << endl;
	cout << "Оценки по истории \t\t";
	for (int = 0; i < sizeof(a.mark) / sizeof(a.mark[0]); i++)
	{
		cout << a.mark[i] << "\t";
	}
	cout << endl
}
		int Adult(Student a)
	{
		if (2024 - a.god > 18)
		{
			cout << a.fio << " is adult\n";
		}
		else
		{
			cout << a.fio << "is not adult =\n";
		}
		return 0
	}