#include "cGameScene.h"


void cGameScene::InitScene()
{

	/// scene #1 
	SceneList[0].iSceneNum = 1;
	SceneList[0].sName = "�ó������� ����";
	SceneList[0].sQuestion = "����� �������� ��Ʈ�� �����Դϴ�.\n"
		"�Ƴ��� ���� �� ��ȭ�Ӱ� ����Ͽ�����, ���� �������� ����� ã���ϴ�.\n"
		"�׵��� ����� ������ ���� �������� �׿����ϴ�. ����� �г��Ͽ����ϴ�.\n";
	SceneList[0].sAnswer = "1. ������� ���� ���� \n2. ����鿡�� ���� \n3. ���忡�� ��� ���� \n4.�����Ͽ콺�� ���� �̼� ����\n";
	SceneList[0].isSelect[0] = 2;//�����
	SceneList[0].isSelect[1] = 10;//���Ῥ��
	SceneList[0].isSelect[2] = 25;//����,���
	SceneList[0].isSelect[3] = 100;//�̼Ǽ���
	SceneList[0].eAnswerType = AT_SCENE;
	/// scene #2 
	SceneList[1].iSceneNum = 2;
	SceneList[1].sName = "�����";
	SceneList[1].sQuestion = "����� ������ ���ϴ�.\n"
		"�پ��� ������� ���� �ɷ��ֽ��ϴ�.\n"
		"�̵� �߿��� ������ ���⸦ �����Ͽ� ������ ���� ���� �غ� �ϼ���.";
	SceneList[1].sAnswer = "1. ���� \n2. ���� \n3. ���� \n4.���ݼ��� \n";
	SceneList[1].isSelect[0] = 3;//���� ������ �̵�
	SceneList[1].isSelect[1] = 3;//
	SceneList[1].isSelect[2] = 3;//
	SceneList[1].isSelect[3] = 3;//
	SceneList[1].isSelect[4] = 0;//
	SceneList[1].eAnswerType = AT_ITEM;
	/// scene #3 
	SceneList[2].iSceneNum = 3;
	SceneList[2].sName = "����� ������";
	SceneList[2].sQuestion = "����� ���⸦ �����߽��ϴ�.\n";
	SceneList[2].sAnswer = "1. ����� ������ \n2. �ٸ� ���� �����ϱ� \n";
	SceneList[2].isSelect[0] = 4;//���� ������ �̵�
	SceneList[2].isSelect[1] = 2;//
	SceneList[2].isSelect[2] = 0;//
	SceneList[2].isSelect[3] = 0;//
	SceneList[2].eAnswerType = AT_SCENE;
}