/**
 * @file score.h
 * @brief Plik nagłówkowy zawierający funkcje odpowiedzialną za obsługiwanie wyniku gry.
 * 
 */
#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <fstream>
#include "score.cpp"

using namespace std;

/**
 * @brief Funkcja obliczająca aktualny wynik gry.
 * @param mergedValue Wartość, która zostaje dodawana do wyniku.
*/
void scoreHandler(int mergedValue);

#endif // SCORE_H