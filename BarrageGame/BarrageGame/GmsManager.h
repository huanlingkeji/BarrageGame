#pragma once
#include "Object.h"
#include "GuidedMissile.h"
#include "Player.h"

class GmsManager:public Object
{
public:
	GmsManager();
	~GmsManager();
	void Update();
	void Draw();
	void ShootGms();
	void RestoreObject(GuidedMissile* obj);
	static int movetime;
private:
	int shoottime;										//���䵼��ʱ��
	list<GuidedMissile*> *lguidemissiles;				//���µĵ���
	list<GuidedMissile*> gameobjects;					//������
	list<GuidedMissile*>::iterator objiterator;			//�������ĵ�����
};