#pragma once
#include "EnemyState.h"
#include "Textures.h"
#include "Animation.h"

class SoldierFollowState : public EnemyState {
public:
	SoldierFollowState(EnemyData *data);
	~SoldierFollowState();
	virtual void ResetState();
	virtual void Update(double dt);
	virtual State GetState();
};