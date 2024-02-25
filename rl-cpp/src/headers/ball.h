#pragma once
#include "dependencies.h"
#include "entity.h"

class Ball : public Entity
{
public:
	Ball(int x, int y, int r, int sx, int sy, Color c);
	int x = 0;
	int y = 0;
	int r = 0;
	int sx = 0;
	int sy = 0;
	Color c = BLACK;
	void update();
	void draw();
};

Ball::Ball(int p_x, int p_y, int p_r, int p_sx, int p_sy, Color p_c){
	x = p_x;
	y = p_y;
	r = p_r;
	sx = p_sx;
	sy = p_sy;
	c = p_c;
}

void Ball::update() {
	x += sx;
	y += sy;

	int sw = GetScreenWidth();
	int sh = GetScreenHeight();

	if (x < r || x > sw - r)
	{
		sx *= -1;
	}
	if (y < r || y > sh - r)
	{
		sy *= -1;
	}
}

void Ball::draw() {
	DrawCircle(x, y, r, c);
}