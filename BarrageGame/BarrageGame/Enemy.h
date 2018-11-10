#pragma once
#include "Object.h"
#include "Timer.h"
#include "CollisionDetection.h"
#include "Path.h"
#include "PathFile.h"

class EnemyIncubator;
class Enemy:public Object
{
public:
	Enemy(int x1, int y1,EnemyIncubator *enemyicbt1, int pathindex1);
	~Enemy();
	virtual void Update();
	virtual void Draw();
	virtual void Move();
	virtual bool RsSurvival();
	virtual bool RsHit(int x1, int y1, int mtox1, int mtoy1);
	virtual void TakeDamage(int damage);
	void GetXyr(double &x1, double &y1, int &r1);
	int GetHp();
	void GetMxy(double &x1, double &y1, double &mx1, double &my1, int &radius1);

	static EnemyIncubator	*enemyicbt;		//���˷�����
	static double interpolation;
	static int radius;				 		//���˰뾶
protected:
	double x;								//��ǰ����x
	double y;								//��ǰ����y
	double ox;								//��ʼ��x
	double oy;								//��ʼ��y
	int hp;									//���˵�ǰhp
	int maxhp;								//�������hp
	double mx;								//�ƶ��ٶ�x
	double my;								//�ƶ��ٶ�y
	int  attributes;						//����

	Path *path;								//����·��
	list<Point*>::iterator poiiterator;		//���ߵ�·����


};
