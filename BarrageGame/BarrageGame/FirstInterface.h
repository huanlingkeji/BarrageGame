#pragma once
#include "Scene.h"
#include "GameIntroduction.h"
#include "CombatScene.h"
#include "GameManager.h"	
//��������List���ͷ�	����������ʵ���ǲ����������  �����л�������û�����µ���GameManager��Run����
//�����˼���ִ��ԭ��������Updatae�������ִ���
class FirstInterface:public Scene
{
public:
	FirstInterface(GameManager *gamemanager1);
	~FirstInterface();
	void Update();
	void Destroy();
	void Draw();
private:
	list<Object*> gameobjects;
};
