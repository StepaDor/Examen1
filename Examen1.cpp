#include <iostream>
#include <fstream>
#include <windows.h>
#include<string>




using namespace std;


struct delo
{
	string name;
	int prior;
	string ops;
	string date;
	;
};

void inputDelo(delo& d)
{
	cout << "Введите название задания: "; 
	cin >> d.name;
	cout << "Введите приоритет задания :";
	cin >> d.prior;
	cout << "Введите описание задания: "; 
	cin >> d.ops;
	cout << "Введите дату задания в формате день /неделя/месяц ";
	cin >> d.date;
}
void deleteDelo(delo* arr, int size, int index)
{
	bool b = 0;
	cout << "вы точно хотите удалить: " << arr[index].name;
	cin >> b;
	if (b)
	{
		arr[index].name = '/0';
	}
}

void editDelo(delo* arr, int size, int index)
{
	if (index > size)
	{
		cout << "такого задания не введено" << endl;
		return;
	}
	cout << "Введите новое имя:" << endl;
	cin >> arr[index].name;
	cout << "введите новый приоритет:" << endl;
	cin >> arr[index].prior;
	cout << "Введите новое описание:" << endl; 
	cin >> arr[index].ops;
	cout << "Введите новую дату: в формате день /неделя/месяц 00/00/00 " << endl;
	cin >> arr[index].date;
}

int findDelo(delo* mas, int size, int prior, string name = "", string ops = "", string date = "")
{
	for (int i = 0; i < size; i++)
	{
		if (mas[i].name == name)
		{
			return i;
		}
		else if (mas[i].prior == prior)
		{
			return i;
		}
		else if (mas[i].ops == ops)
		{
			return i;
		}
		else if (mas[i].date == date)
		{
			return i;
		}
	}
	cout << "Такое задание отсутствует! " << endl;

}

void outputDelo(delo* date)
{
	string date1 = "";
	int a = 0;
	int d = 0, n = 0, m = 0;
	cout << "хотите отобразить все дела на день, на неделю или на месяц? нажмите от 1 до 3:";
	cin >> a;
	if (a > 3)
	{
		cout << "нет такого параметра" "\n" << "попробуй еще раз"; 
		cin >> a;

	}
	
}


int main()
{
	const int NotUsed = system("color B5");
	setlocale(LC_ALL, "");



	int menu;

	{
		cout << "\t\t\t\t\t\t  MENU" << endl;
		cout << "\t\t\t\t\t1 - Ввести новую задачу;" << endl;
		cout << "\t\t\t\t\t2 - Удалить задачу;" << endl;
		cout << "\t\t\t\t\t3 - редактировать задание;" << endl;
		cout << "\t\t\t\t\t4 - найти задание;" << endl;
		cout << "\t\t\t\t\t5 - вывести на экран задания;" << endl;
		cout << "\t\t\t\t\t6 - отсортировать задания;" << endl;
		cout << " " << endl;
		cin >> menu;
		


	}
}