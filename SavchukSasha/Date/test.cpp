#include <windows.h>
#include "Date.h"
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	
	Date t;
	Date t1;
	Date t2;
	cout << "���� 1  ";
	(t.setDate(2013,7,12) == -1)? cout << "Error" << endl : cout << "����:" << t.getDay() << " ̳����:" << t.getMonth() << " г�:" << t.getYear() << endl;
	cout << "��� � ��� � 01.01.0001: " << t.getDate() << endl << endl;
	cout << "���� 2  ";
	(t1.setDate(2012,7,12) == -1)? cout << "Error" << endl : cout << "����:" << t1.getDay() << " ̳����:" << t1.getMonth() << " г�:" << t1.getYear() << endl;
	cout << "��� � ��� � 01.01.0001: " << t1.getDate() << endl << endl;
	cout << "\n���� 1 - ���� 2 = ";
	t2 = t-t1;
	cout << t2.getDate() << endl;
	
	cout << "\n������� ����: ";
	t.setDateOfDay(t.getCurrentDate());	

	#pragma warning(disable:C4996)
	cout << t.format(3);
	
	cout << "\n\n���� � ����� ��������:" << endl;
	cout << t1.format(1) << endl;
	cout << t1.format(2) << endl;
	cout << t1.format(3) << endl;
	#pragma warning(default:C4996)
	return 0;
}