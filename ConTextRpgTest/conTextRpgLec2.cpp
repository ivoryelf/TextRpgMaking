#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
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
	cout << "~~text rpg 2nd day~~~" << endl;
	enum GAME_MENU
	{
		GM_NONE,
		GM_START,
		GM_MAP,
		GM_EXIT
	};
	int igamemenu = 0;

	while (true)
	{
		// game main loop : �ο��� ����  
		// 
		system("cls");

		cout << "-- ���� �޴� --- \n"
			"1. ���� \n"
			"2. �� \n"
			"3. ������" << endl;
		cout << "�޴��� �����ϼ���: ";
		cin >> igamemenu;

		if (igamemenu == GM_EXIT)
		{
			cout << "------ ������ ����Ǿ����ϴ�. �ȳ��� ������. ------" << endl;
			break;
		}
	}

}
//*/