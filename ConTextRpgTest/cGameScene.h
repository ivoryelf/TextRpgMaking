#pragma once
#include "GlobalHeader.h"
#define MAX_ANSWER  5
#define MAX_SCENE  30
enum eAnserType 
{
	AT_SCENE, 
	AT_ITEM,
	AT_NONSCENE,
	AT_FIGHT,
	AT_MAX
};

struct Scene
{
	int iSceneNum;
	string sName;
	string sQuestion;
	string sAnswer;
	int isSelect[MAX_ANSWER];//다음 씬의 번호
	eAnserType eAnswerType;//답변 타입
};


class cGameScene
{
public:
	cGameScene();
	~cGameScene();

	void Start();
	void Update();
	void SetQuestion(string _sq);
	void SetAnswer(string _sa);

	void InitScene();
	bool SelectScene(int _inum);
	void CleanSceneList();
	int SearchSceneOrderByNumber();
public:
	int imenu;
	int iCurScene, iPrevScene;
	int iorder;
	Scene SceneList[MAX_SCENE];
};

