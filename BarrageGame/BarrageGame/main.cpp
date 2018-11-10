/***********************************************
作者：杨玉胜
时间：2018年11月8日20:03:43
版本：V0.1
概要：主文件的实现
备注：
************************************************/
#include "pch.h"
#include "GameManager.h"

int main()
{
	GameManager game;
	game.Run();
	return 0;
}
/*
插值计算							ok
轨迹管理							ok
存储记录							ok
全局信息							false
关卡管理							false
运动管理							ok
协程								false
敌人 子弹 导弹  技能				ok
游戏暂停		优化

未实现功能：
保存数据							false
debuff状态							false
攻击特效							false
溅射								false
敌人特性							false
玩家的升级  经验 hp  技能获取等		false
游戏提示							false
*/
