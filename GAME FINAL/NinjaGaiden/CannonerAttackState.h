#pragma once
#include "EnemyState.h"
#include "Textures.h"
#include "Animation.h"
#include"EnemyWeapon.h"
#include"CannonerBullet.h"
#include"Unit.h"
#include"Grid.h"

class CannonerAttackState : public EnemyState {

	//First turn
	EnemyWeapon*cannonerBullet_1;
	
	Animation* m_AnimationAttack;

public:
	CannonerAttackState(EnemyData *data);
	~CannonerAttackState();
	virtual void ResetState();
	virtual void Update(double dt);
	virtual State GetState();
	virtual void Render();
};