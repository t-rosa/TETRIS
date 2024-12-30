#include <raylib.h>
#include "grid.h"

int main()
{
    const int WIDTH = 300;
    const int HEIGHT = 600;
    const int FPS = 60;

    InitWindow(WIDTH, HEIGHT, "TETRIS");
    SetTargetFPS(FPS);

    const Color DARK_BLUE = {44, 44, 127, 255};

    // 20 rows
    // 10 columns

    // const int* grid = int[20][10];
    // [
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    //     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    // ]

    const int COL_COUNT = 10;
    const int ROW_COUNT = 20;
    const int CELL_WIDTH = WIDTH / COL_COUNT;
    const int CELL_HEIGHT = HEIGHT / ROW_COUNT;

    Grid grid = Grid();
    grid.Print();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARK_BLUE);
        

        // for (int i = 0; i < ROW_COUNT; i++)
        // {
        //     for (int j = 0; j < COL_COUNT; j++)
        //     {
        //         DrawRectangleLines(CELL_WIDTH * j, CELL_HEIGHT * i, CELL_WIDTH, CELL_HEIGHT, WHITE);
        //     }
        // }

        EndDrawing();
    }

    CloseWindow();
}