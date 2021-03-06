#pragma once
#include "Character.h"

class /*YOU ARE A */Wizard/*HARRY*/ : public Character
{
public:
	void init(const glm::ivec2 &tileMapPos, ShaderProgram &shaderProgram);
	void update(int deltaTime);
	void hit();
	box hitBox();
	void render();
//private:
	int animSize[6] = {10,3,6,9,6,3};
	Sprite* projectile;
	Texture projectileTexture;
	void initProjectile(ShaderProgram &shader);
	void shotProjectile();
	glm::ivec2 projectilePos;
	glm::ivec2 projectileSize;
	bool projectileShot;
	bool dretaProjectile;
	void updateProjectile(int deltaTime);
	void killTarget();
};