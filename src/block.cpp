#include "block.h"
#include "raylib.h"
#include "vector"
#include "map"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
}

void Block::Draw()
{
    std::vector<Position> tiles = cells[rotationState];

    for (Position item: tiles)
    {
        Color cellColor = colors[id];
        int cellX = item.column * cellSize + 1;
        int cellY = item.row * cellSize + 1;

        DrawRectangle(cellX, cellY, cellSize - 1, cellSize - 1, cellColor);
    }
     
}