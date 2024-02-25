#include "headers/ecs.h"

ECS::ECS(std::vector<Entity*>* p_scene) {
	scene = p_scene;
}

ECS::~ECS() {
}

void ECS::loadScene(std::vector<Entity*>* p_scene) {
	scene = p_scene;
}

void ECS::updateScene() {
	for (size_t i = 0; i < scene->size(); i++) {
		scene->at(i)->update();
	}
}

void ECS::drawScene() {
	for (size_t i = 0; i < scene->size(); i++) {
		scene->at(i)->draw();
	}
}