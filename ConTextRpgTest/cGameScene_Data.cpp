#include "cGameScene.h"


void cGameScene::InitScene()
{

	/// scene #1 
	SceneList[0].iSceneNum = 1;
	SceneList[0].sName = "시나리오의 시작";
	SceneList[0].sQuestion = "당신은 전설적인 히트맨 존윅입니다.\n"
		"아내가 죽은 뒤 평화롭게 살려하였으나, 이전 조직에서 당신을 찾습니다.\n"
		"그들이 당신의 가족과 같은 강아지를 죽였습니다. 당신은 분노하였습니다.\n";
	SceneList[0].sAnswer = "1. 무기고에서 무기 선택 \n2. 동료들에게 연락 \n3. 시장에서 장비 구매 \n4.안전하우스를 떠나 미션 수행\n";
	SceneList[0].isSelect[0] = 2;//무기고
	SceneList[0].isSelect[1] = 10;//동료연락
	SceneList[0].isSelect[2] = 25;//시장,장비
	SceneList[0].isSelect[3] = 100;//미션수행
	SceneList[0].eAnswerType = AT_SCENE;
	/// scene #2 
	SceneList[1].iSceneNum = 2;
	SceneList[1].sName = "무기고";
	SceneList[1].sQuestion = "당신은 무기고로 들어갑니다.\n"
		"다양한 무기들이 벽에 걸려있습니다.\n"
		"이들 중에서 적합한 무기를 선탟하여 복수를 위해 전투 준비를 하세요.";
	SceneList[1].sAnswer = "1. 권총 \n2. 소총 \n3. 샷건 \n4.저격소총 \n";
	SceneList[1].isSelect[0] = 3;//다음 씬으로 이동
	SceneList[1].isSelect[1] = 3;//
	SceneList[1].isSelect[2] = 3;//
	SceneList[1].isSelect[3] = 3;//
	SceneList[1].isSelect[4] = 0;//
	SceneList[1].eAnswerType = AT_ITEM;
	/// scene #3 
	SceneList[2].iSceneNum = 3;
	SceneList[2].sName = "무기고 나가기";
	SceneList[2].sQuestion = "당신은 무기를 선택했습니다.\n";
	SceneList[2].sAnswer = "1. 무기고 나가기 \n2. 다른 무기 선택하기 \n";
	SceneList[2].isSelect[0] = 4;//다음 씬으로 이동
	SceneList[2].isSelect[1] = 2;//
	SceneList[2].isSelect[2] = 0;//
	SceneList[2].isSelect[3] = 0;//
	SceneList[2].eAnswerType = AT_SCENE;
}