#include "globals.h"

int** grid = new int*[GRID_SIZE];

int emptySpaces;

int xd;

int yd;

int tileSize = 800/GRID_SIZE;

unsigned int score = 0;

unsigned int highscoreInt = 0;

bool isGameStarted;

unsigned int resolutionChoice;

TilePos **animationPos = new TilePos*[GRID_SIZE];

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

void create()
{
    for (int i = 0; i < GRID_SIZE; ++i) {
        grid[i] = new int[GRID_SIZE];
    }
}

void createAnimations()
{
    for (int i = 0; i < GRID_SIZE; ++i) {
        animationPos[i] = new TilePos[GRID_SIZE];
    }
}
