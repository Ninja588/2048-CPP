#include "globals.h"

int grid[GRID_SIZE][GRID_SIZE];

int emptySpaces;

int xd;

int yd;

int tileSize = 800/GRID_SIZE;

unsigned int score = 0;

unsigned int highscoreInt = 0;

bool isGameStarted;

unsigned int resolutionChoice;

TilePos animationPos[GRID_SIZE][GRID_SIZE];

Options Settings(800, 600, false);

Resolution resolutions[7] = {
    {0,0},
    {960, 540},
    {1024, 576},
    {1280, 720},
    {1366, 768},
    {1600, 900},
    {1920, 1080}
};
