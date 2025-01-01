#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    const int WIDTH = 300;
    const int HEIGHT = 600;
    const int FPS = 60;

    InitWindow(WIDTH, HEIGHT, "TETRIS");
    SetTargetFPS(FPS);
    Grid grid = Grid();
    grid.Initialize();
    grid.Print();

    LBlock block = LBlock();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        grid.Draw();
        block.Draw();

        EndDrawing();
    }
    

    CloseWindow();
}