#pragma once
#include <vector>
#include "entity.h";

class ECS
{
public:
	ECS(std::vector<Entity*>* scene);
	~ECS();
	void loadScene(std::vector<Entity*>* scene);
	void updateScene();
	void drawScene();

private:
	std::vector<Entity*>* scene;
};