#include "cGMMain.h"
//senario�� ����. ������ ������ �̵��Ѵ�. 

cGMMain::cGMMain()
{

}

cGMMain::~cGMMain()
{

}

void cGMMain::Start()
{
	//init game main 
	//player init 
	//start pos init
	cout << "~~~ ���� ���� ������~~~ " << endl;
	Sleep(1000);
}

void cGMMain::Update()
{
	//*/
	while (true)
	{
		system("cls");
		cout << "1. ���� \n2. ������ \n3. ������" << endl;
		cout << "<< ���� �����ұ��? >>";
		cin >> imenu;
		if (imenu == 3)
			break;
	}
	//*/

}
