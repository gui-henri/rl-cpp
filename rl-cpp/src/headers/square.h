#pragma once
#include "entity.h"
#include "dependencies.h"

class Square : public Entity
{
public:
	Square(int w, int h, int x, int y, int s, Color c);
	void update();
	void draw();
	int w, h, x, y, s;
	Color c;
};

Square::Square(int p_w, int p_h, int p_x, int p_y, int p_s, Color p_c) {
	w = p_w;
	h = p_h;
	x = p_x;
	y = p_y;
	s = p_s;
	c = p_c;
}

void Square::update() {
}

void Square::draw() {
	DrawRectangle(x, y, w, h, c);
	
}
