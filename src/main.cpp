#include <raylib.h>
#include "grid.h"

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

    grid.grid[0][0] = 1;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        grid.Draw();

        EndDrawing();
    }
    

    CloseWindow();
}