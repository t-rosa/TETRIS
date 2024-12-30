#pragma once

class Grid
{
public: 
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];

private:
    int rowsCount;
    int columnsCount;
    int cellSize;
};