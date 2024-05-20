#include "score.h"
#include "globals.h"

void scoreHandler(int mergedValue) {
    std::ofstream file("scoreboard.mp3");
    if(isGameStarted) {
        score += mergedValue * 2;
        if (score > highscoreInt) {
            highscoreInt = score;
            file.seekp(0);
            file << highscoreInt;
            file.close();
        }
    }
    else score = 0;
}