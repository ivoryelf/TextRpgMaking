#include "cGameScene.h"


cGameScene::cGameScene()
{
	CleanSceneList();
}

cGameScene::~cGameScene()
{

}

void cGameScene::CleanSceneList()
{
	for (int i = 0; i < MAX_SCENE; i++)
	{
		SceneList[i].iSceneNum = 0;
		SceneList[i].sAnswer = "";
		SceneList[i].sQuestion = "";
		SceneList[i].sName = "";
		for (int j = 0; j < MAX_ANSWER; j++)
		{
			SceneList[i].isSelect[j] = 0;
		}
	}
}

void cGameScene::Start()
{
	iorder = -1;
	iCurScene = 1;//start
	InitScene();
	iorder = SearchSceneOrderByNumber();

}

void cGameScene::Update()
{
	//
	while (true)
	{
		system("cls");
		//
		if (iorder > -1)
		{
			cout << SceneList[iorder].sQuestion;
			cout << SceneList[iorder].sAnswer;
			cout << "어떤 메뉴를 선택하실까요? ";
			cin >> imenu;
			if (SceneList[iorder].eAnswerType == AT_SCENE)
			{
				iCurScene = SceneList[iorder].isSelect[imenu-1];
				iorder = SearchSceneOrderByNumber();
			}
		}
		else
		{
			cout << "scene is empty" << endl;
		}

	}

}

int cGameScene::SearchSceneOrderByNumber()
{
	int iorder = -1;
	for (int i = 0; i < MAX_SCENE; i++)
	{
		if (iCurScene == SceneList[i].iSceneNum)
		{
			iorder = i;
			break;
		}
	}

	return iorder;
}