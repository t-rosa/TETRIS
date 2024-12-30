#include "grid.h"
#include <iostream>

Grid::Grid() {
    rowsCount = 20;
    columnsCount = 10;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize() {
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print() {
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            int cellX = column * cellSize + 1;
            int cellY = row * cellSize + 1;
            int cellValue = grid[row][column];
            Color cellColor = colors[cellValue];

            DrawRectangle(cellX, cellY, cellSize -1, cellSize -1, cellColor);
        }
    }
}

std::vector<Color> Grid::GetCellColors()
{
    const Color CYAN = {21,204,209,255};

    return {DARKGRAY, GREEN, RED, ORANGE, YELLOW, PURPLE, CYAN, BLUE};
}
