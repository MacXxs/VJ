#ifndef _SKELETON_INCLUDE
#define _SKELETON_INCLUDE


#include "Sprite.h"
#include "TileMap.h"

class Skeleton
{

	struct box {
		glm::ivec2 mins;
		glm::ivec2 maxs;
	};

public:
	void init(const glm::ivec2 &tileMapPos, ShaderProgram &shaderProgram);
	void update(int deltaTime);
	void render();
	void hit();

	void setTileMap(TileMap *tileMap);
	void setPosition();
	bool atacking;
	box hitBox;





private:
	Texture spritesheet;
	Sprite *sprite;
	bool alive;
	int lifes;
	bool vulnerable;
	TileMap *map;
	glm::ivec2 posSkeleton;
	glm::ivec2 sizeSkeleton;
	glm::ivec2 colisionBox;
	glm::ivec2 tileMapDispl;
	glm::ivec2 colisionOffset;
	glm::ivec2 hitBoxOffset;
};

#endif