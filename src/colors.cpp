#include "colors.h"

const Color CYAN = {44, 44, 127, 255};

std::vector<Color> GetCellColors()
{
    return {
        BLACK,
        YELLOW,
        GREEN,
        RED,
        PURPLE,
        CYAN,
        BLUE
    };
}