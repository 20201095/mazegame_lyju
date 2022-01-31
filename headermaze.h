#pragma once //둘 중 하나 선택 가능
#ifndef HEADER
#define HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>

#define SIZE 19
#define XP 40
#define YP 5
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224


void LoadMaze(char num);
void GotoXY(int x, int y);
void PrintMazeGame();
void CursorView(char show);
void MoveMaze(int *row, int*col);
int IsBlock(int i, int j);
int IsFinish(int i, int j);
void Complete();

extern char maze[SIZE][SIZE]; //변수가 두 번 중복 선언되므로 extern
extern clock_t start, end;
extern float res;
#endif
