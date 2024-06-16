/**
 * @file globals.h
 * @brief Plik nagłówkowy zawierający zmienne globalne programu.
 * 
 */
#ifndef GLOBALS_H
#define GLOBALS_H

#include "consts.h"
#include <iostream>
#include <cstdio>

/**
 * @brief Siatka gry.
 * 
 * Dwuwymiarowa tablica przechowująca stan gry.
 * Wartości w siatce mogą być 0 (reprezentują puste miejsce) lub potęgi liczby 2 (2, 4, 8, 16, itd.).
 */
extern int** grid;

unsigned int gridsizeChoice = 4;

/**
 * @brief Rozmiar siatki gry.
 * Określa liczbę wierszy i kolumn w siatce gry.
 * Wartość ta kontroluje wielkość siatki gry, która jest kwadratowa.
 * Zwiększenie tej wartości zwiększy liczbę pól na siatce gry.
 */
int GRID_SIZE = 4;

/**
 * @brief Liczba pustych miejsc na siatce gry.
 * 
 * Używane do kontroli, ile jeszcze miejsc na nowe klocki jest dostępnych.
 */
extern int emptySpaces; // puste miejsca (tiles z wartoscia '0')

/// @brief Parametr xd przesunięcia globalnego w macierzy transportu funkcji gltranslated.
extern int xd;
/// @brief Parametr yd przesunięcia globalnego w macierzy transportu funkcji gltranslated.
extern int yd;

/**
 * @brief Liczba określająca wielkość jednego bloku.
 */
extern int tileSize;

/**
 * @brief Zmienna przechowywująca aktualny wynik gracza.
 */
extern unsigned int score;

/**
 * @brief Zmienna przechowywująca największy wynik gracza.
 */
extern unsigned int highscoreInt;

/**
 * @brief Zmienna sprawdzjąca, czy gra jest wystartowana.
 */
extern bool isGameStarted;

/**
 * @brief Zmienna wybierania wyświetlanej rozdzielczosci (w opcjach) z tablicy rozdzielczości.
 */
extern unsigned int resolutionChoice;

/// @brief Klasa zawierająca zmienne umożliwiające animacje blocków.
class TilePos {
public:
    int iDest;
    int jDest;
    int iCurrentCoords;
    int jCurrentCoords;
    int destValue;
    int sourceValue;

    TilePos() : iDest(-1), jDest(-1), iCurrentCoords(0), jCurrentCoords(0), destValue(0), sourceValue(0) {}
};
extern TilePos **animationPos;

/**
 * @brief Klasa odpowiadająca za zmiane ustawień gry.
 * Potrafi zmienić rozdzielczość, włączyć lub wyłączyć tryb pełnoekranowy, włączyć tryb Infinite,
 * zmienić rozmiar siatki. 
 * */
class Options {
public:
    int resolutionWidth;
    int resolutionHeight;
    bool fullscreen;

    Options(int width, int height, bool full) 
        : resolutionWidth(width), resolutionHeight(height), fullscreen(full) {
    }

    bool infiniteMode;
};
extern Options Settings;

/// @brief Klasa przechowywująca możliwe rozdzielczości gry.
class Resolution {
public:
    int width;
    int height;
};
extern Resolution resolutions[7];

extern void create();

extern void createAnimations();

#endif // GLOBALS_H