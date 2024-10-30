#include "GlobalHeader.h"
#include "cGMHelp.h"
#include "cGMMain.h"
#include "cGameScene.h"
/*
* 초기엔 싸움터만 그리고 3*3맵을 만든다. 
//마을과 싸움터 선택해서 가기 
//마을엔 상점이 있고, 광장이 있다. 
// 맵을 만든다. 사이즈 조절 3*3 ---> n*n  ... 맵보여주기(텍스트로 구현)
// 데이타는 struct로 하고, 시스템은 class로 하자. 일단은 
// 
// 플레이어의 이름/ 직업 / 레벨, 경험치, 공격력, 방어력, 체력, 마나, 보유골드  
// 인벤토리
*/
//*/
int main()
{
	cGMMain gmm;
	cGMHelp gmh;
	cGameScene gs;
	cout << "~~text rpg 2nd day~~~" << endl;
	enum GAME_MENU
	{
		GM_NONE,
		GM_START,
		GM_HELP,
		GM_EXIT
	};
	int igamemenu = 0;
	//static function or class 
	while (true)
	{
		// game main loop : 싸움터 진행  
		// 
		system("cls");

		cout << "-- 게임 메뉴 --- \n"
			"1. 게임 시작 \n"
			"2. 게임 방법 \n"
			"3. 게임 종료" << endl;
		cout << "메뉴를 선택하세요: ";
		cin >> igamemenu;

		if (igamemenu == GM_EXIT)
		{
			cout << "------ 게임이 종료되었습니다. 안녕히 가세요. ------" << endl;
			break;
		}
		else if (igamemenu == GM_START)
		{
			//gmm.Start();
			//gmm.Update();
			//break;
			gs.Start();
			gs.Update();
		}
		else if (igamemenu == GM_HELP)
		{

		}
	}

}
//*/