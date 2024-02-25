#include <vector>
#include <string>
#include "headers/dependencies.h"
#include "headers/ball.h"
#include "headers/square.h"
#include "headers/ecs.h"

int main()
{
    InitWindow(1280, 720, "Entity Component Test");
    // SetTargetFPS(60);

    int w = GetScreenWidth() / 2;
    int h = GetScreenHeight() / 2;

    Ball* b = new Ball(100, 250, 50, 10, 10, BLACK);
    Square* s = new Square(100, 300, 400, 200, 2, PINK);

    std::vector<Entity*> scene1;
    scene1.push_back(b);
    scene1.push_back(s);

    ECS ecs = ECS(&scene1);
    
    long count = 1;
    
    while (!WindowShouldClose())
    {

        int fps = GetFPS();

        if (fps >=60)
        {
            Ball* nb = new Ball(100, 250, 50, 10, 10, BLACK);
            scene1.push_back(nb);
            count++;
        }

        ecs.updateScene();

        BeginDrawing();

            ClearBackground(ORANGE);
            ecs.drawScene();
            DrawFPS(10, 10);
            DrawText(std::to_string(count).c_str(), 100, 10, 20, RED);

        EndDrawing();
    }

    CloseWindow();
}
