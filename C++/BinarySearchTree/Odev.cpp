#include <iostream>
#include "Header.h"



int main()
{
	Islemler islemler;
while (true)
{
	system("cls");
	cout << "1-) Ogrenci Islemleri"<< endl;
	cout << "2-) Seminer Islemleri" << endl;
	cout << "3-) Cikis" << endl;
	cout << "?: ";
	int status = 0;
	cin >> status;
	switch (status)
	{
	case 1:
		islemler.ogrIslem();
		break;
	case 2:
		islemler.seminerIslem();
		break;
	case 3:
		return 0;
		break;
	default:
		break;
	}
}
}
