#include "GlobalHeader.h"
#include "cGMHelp.h"
#include "cGMMain.h"
#include "cGameScene.h"
/*
* �ʱ⿣ �ο��͸� �׸��� 3*3���� �����. 
//������ �ο��� �����ؼ� ���� 
//������ ������ �ְ�, ������ �ִ�. 
// ���� �����. ������ ���� 3*3 ---> n*n  ... �ʺ����ֱ�(�ؽ�Ʈ�� ����)
// ����Ÿ�� struct�� �ϰ�, �ý����� class�� ����. �ϴ��� 
// 
// �÷��̾��� �̸�/ ���� / ����, ����ġ, ���ݷ�, ����, ü��, ����, �������  
// �κ��丮
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
		// game main loop : �ο��� ����  
		// 
		system("cls");

		cout << "-- ���� �޴� --- \n"
			"1. ���� ���� \n"
			"2. ���� ��� \n"
			"3. ���� ����" << endl;
		cout << "�޴��� �����ϼ���: ";
		cin >> igamemenu;

		if (igamemenu == GM_EXIT)
		{
			cout << "------ ������ ����Ǿ����ϴ�. �ȳ��� ������. ------" << endl;
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