#pragma once

#include "fixture.h"

enum class gameObjectType
{
	ship,
	asteroid,
	ufo,
	bullet,
	ufoBullet
};

class gameObject : public fixture
{
public:
	gameObject(gameObjectType type, float radius);

	void onCollisionWith(gameObject& other);

	int objectLife = 3;
	void kill() { alive = false;  }
	void revive() { alive = true; }
	void respawn();
	void removeInvincibility();

	bool isAlive() const { return alive;  }
	bool isInvincible() const { return invincible; }
	void setInvincible(bool value) { invincible = value; }

private:
	gameObjectType type;
	rigidBody body;
	circleShape shape;

	bool alive = true;
	bool invincible = false;
};