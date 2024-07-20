#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block
{
    public:
        Block();
        int id;
        std::map<int, std::vector<Position>> cells;
        void Draw(int offsetX, int offsetY);
        void Move(int rows, int columns);
        void Rotate();
        std::vector<Position> GetCellPositions();
        void UndoRotation();

    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
        int rowOffset;
        int columnOffset;   
};