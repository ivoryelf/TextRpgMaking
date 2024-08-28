// ConTextRpgTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
void textcolor(int colorNum);

int main()
{
    system("title 아 게임시작");
    system("color af");
    textcolor(9);
    cout << "===== Game Text Rpg Test ======!\n";
    cout << "\u250c\u252c\u2510\n\u251c\u253c\u2524\n\u2514\u2534\u2518" << endl;
    cout << "★★★★★★★★★★★★★★★★★★★★★★★★★★★\n";//ㅁ + 한자 키 입력시 사용 가능 
    //system("tree");
    //system("cls");
	while (true)
	{
		system("cls");
		cout << "******************************* 로비 ***************************" << endl;
		cout << "1. 맵" << endl;
		cout << "2. 상점" << endl;
		cout << "3. 가방" << endl;
		cout << "4. 종료" << endl;
		cout << "메뉴를 선택하세요 : ";
		int iMenu;
		cin >> iMenu;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		switch (iMenu)
		{
		case 1:
			cout << "맵을 선택하심!" << endl;
			Sleep(500);
			break;
		case 4:
			exit;
			break;
		}
	}
}

void textcolor(int colorNum) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

/////////////////////////////////
/* 글자색
  enum ColorType{
BLACK,  	//0
darkBLUE,	//1
Dark Green,	//2
darkSkyBlue,    //3
DarkRed,  	//4
DarkPurple,	//5
DarkYellow,	//6
GRAY,		//7
DarkGray,	//8
BLUE,		//9
GREEN,		//10
SkyBlue,	//11
RED,		//12
PURPLE,		//13
YELLOW,		//14
WHITE		//15
} COLOR;
*/