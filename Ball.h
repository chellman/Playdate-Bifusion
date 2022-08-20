#ifndef BALL_H
#define BALL_H
#include "pd_api.h"
#include "utils.h"

typedef struct
{
	float mRadius;
	Vec2f mVel;
	Vec2f mPos;
	bool mUpdatePhysics;
	bool mCanMerge;
} SBall;

#endif