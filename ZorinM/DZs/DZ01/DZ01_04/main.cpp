/*
	1. �������� � ��������� ����� �������, ������� ������� ������, ���������� 
	����������� ���� �����, �� ���� ����� ������� ��� ���� �����. ��������, 
	����������� ����������� ����� "sdqcg" "rgfas34" ����� ������ "sg". ��� 
	���������� ������� ����������� �������� * (�������� ���������).
*/
#include "String_.h"
#include <iostream>
using namespace std;

int main()
{
	String_ s1, s2("rgfas34"), res;
	s1.setStr("sdqcg");
	
	res = s1 * s2;
	cout << "s1 * s2 = " << res.getStr() << "\n\n";

	s1.setStr("abcdefghi");
	s2.setStr("ghiablkj");
	
	res = s1 * s2;
	cout << "s1 * s2 = " << res.getStr() << "\n\n";

	return 0;
}