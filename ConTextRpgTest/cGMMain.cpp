#include "cGMMain.h"
//senario형 게임. 씬별로 게임이 이동한다. 

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
	cout << "~~~ 게임 메인 시이작~~~ " << endl;
	Sleep(1000);
}

void cGMMain::Update()
{
	//*/
	while (true)
	{
		system("cls");
		cout << "1. 상점 \n2. 갱단집 \n3. 경찰서" << endl;
		cout << "<< 어디로 가야할까요? >>";
		cin >> imenu;
		if (imenu == 3)
			break;
	}
	//*/

}
