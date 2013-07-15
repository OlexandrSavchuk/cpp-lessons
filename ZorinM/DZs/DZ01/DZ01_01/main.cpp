/*
1. ����������� ����� Date ��� ������������� ���� (����, �����, ���). 
����������� ������ ��� ������� � ����� (� ��������� ������������ ����������!). 
���������� ����������� � ����������� ��� �������� ����������� �������, 
������ ���������� ���� � ���������� � ������ �� �� ������. 

2. ���������� ������������� ����� ����� Date, ��������� � ��� ����������� �� ���������, 
��������� ����� �� ���������� (��������, 1970/01/01).

3. Design a class called Date. The class should store a date in three integers: month, day, and year. 
There should be member functions to print the date in the following forms:
12/25/2012 
December 25, 2012 
25 December 2012
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. 
Do not accept values for the month greater than 12 or less than 1. 
*/

#include "Date_.h"
#include <iostream>
using namespace std;

void main()
{
	Date_ myDate1;
	myDate1.showDate();

	// setDate � ������� ����������� ����������� ����
	myDate1.setDate(29, 2, 2013);
	myDate1.showDate();
	cout << "is " << boolalpha << myDate1.checkDate() << endl;
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	// setDate � ������ ����������� ����������� ����
	myDate1.setDate(29, 2, 2012);
	myDate1.showDate();
	cout << "is " << boolalpha << myDate1.checkDate() << endl << endl;
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	Date_ myDate2(1, 1, 2014);
	myDate2.showDate();

	Date_ myDate4(myDate2);
	myDate4.showDate();

	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	// ��� ���� � ���������
	myDate2.enterDate();
	myDate2.showDate();

	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	// showDate � ����� ���������� ������
	myDate2.showDate(1);
	myDate2.showDate(2);

}