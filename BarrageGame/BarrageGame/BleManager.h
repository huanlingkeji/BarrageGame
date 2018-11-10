#pragma once
#include "Object.h"
#include "Bullet.h"
#include "MouseInput.h"
#include "Player.h"

class BleManager:public Object
{
public:
	BleManager();
	~BleManager();
	void Update();
	void Draw();
	void ShootBle();
	void RestoreObject(Bullet* obj1);

	static int movetime;
private:
	int shoottime;										//�����ӵ�ʱ��

	list<Bullet*> *lbullets;							//���µ��ӵ�
	list<Bullet*> gameobjects;							//������
	list<Bullet*>::iterator objiterator;				//�������ĵ�����
};
