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
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKBLUE);
        
        grid.Draw();

        EndDrawing();
    }

    CloseWindow();
}