#include "grid.h"
#include <iostream>
#include <vector>
#include "colors.h"

Grid::Grid()
{
    rowsCount = 20;
    columnsCount = 10;
    cellSize = 30;
    colors = GetCellColors();
    Initialize();
}

void Grid::Initialize()
{
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print()
{
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
            int cellValue = grid[row][column];
            Color cellColor = colors[cellValue];
            int cellX = cellSize * column + 1;
            int cellY = cellSize * row + 1;

            DrawRectangle(cellX, cellY, cellSize - 1, cellSize - 1, cellColor);
        }
    }
}