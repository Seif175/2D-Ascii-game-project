#include <iostream>
#include <conio.h>
using namespace std;

void drawsingleBullet(unsigned char screen[][156], int rH, int cH)
{
    screen[rH][cH + 5] = '_';
    screen[rH][cH + 6] = '_';
    screen[rH][cH + 7] = '_';
    screen[rH][cH + 8] = '_';
    screen[rH + 1][cH + 3] = '/';
    screen[rH + 1][cH + 4] = ' ';
    screen[rH + 1][cH + 5] = ' ';
    screen[rH + 1][cH + 6] = ' ';
    screen[rH + 1][cH + 7] = ' ';
    screen[rH + 1][cH + 8] = ' ';
    screen[rH + 1][cH + 9] = '\\';
    screen[rH + 2][cH + 2] = '|';
    screen[rH + 2][cH + 4] = 'o';
    screen[rH + 2][cH + 6] = 'o';
    screen[rH + 2][cH + 10] = '|';
    screen[rH + 3][cH + 2] = '|';
    screen[rH + 3][cH + 5] = '-';
    screen[rH + 3][cH + 6] = '-';
    screen[rH + 3][cH + 10] = '|';
    screen[rH + 4][cH + 1] = '\\';
    screen[rH + 4][cH + 4] = '_';
    screen[rH + 4][cH + 5] = '_';
    screen[rH + 4][cH + 6] = '_';
    screen[rH + 4][cH + 7] = '_';
    screen[rH + 4][cH + 10] = '/';
    screen[rH + 5][cH + 1] = '/';
    screen[rH + 5][cH + 2] = '|';
    screen[rH + 5][cH + 9] = '|';
    screen[rH + 5][cH + 10] = '-';
    screen[rH + 5][cH + 11] = '-';
    screen[rH + 5][cH + 12] = '-';
    screen[rH + 5][cH + 13] = 169;
    screen[rH + 5][cH + 14] = 194;
    screen[rH + 5][cH + 15] = 194;
    screen[rH + 5][cH + 16] = 205;
    screen[rH + 5][cH + 17] = 196;
    screen[rH + 6][cH] = '/';
    screen[rH + 6][cH + 2] = '|';
    screen[rH + 6][cH + 3] = '_';
    screen[rH + 6][cH + 4] = '_';
    screen[rH + 6][cH + 5] = '_';
    screen[rH + 6][cH + 6] = '_';
    screen[rH + 6][cH + 7] = '_';
    screen[rH + 6][cH + 8] = '_';
    screen[rH + 6][cH + 9] = '|';
    screen[rH + 7][cH + 4] = '|';
    screen[rH + 7][cH + 5] = '|';
    screen[rH + 7][cH + 8] = '|';
    screen[rH + 7][cH + 9] = '|';
    screen[rH + 8][cH + 4] = 'M';
    screen[rH + 8][cH + 5] = 'M';
    screen[rH + 8][cH + 8] = 'M';
    screen[rH + 8][cH + 9] = 'M';

}

void movesingleBullet()
{

}

void timer(unsigned char screen[][156], int time)
{
    screen[0][0] = 'T';
    screen[0][1] = 'I';
    screen[0][2] = 'M';
    screen[0][3] = 'E';
    screen[0][4] = ' ';
    screen[0][5] = ':';
    screen[0][6] = ' ';
    screen[0][7] = time;
    screen[0][8] = ' ';
    screen[0][9] = 'S';
    screen[0][10] = 'E';
    screen[0][11] = 'C';
    screen[0][12] = 'O';
    screen[0][13] = 'N';
    screen[0][14] = 'D';
    screen[0][15] = 'S';
}

void drawFlat(unsigned char screen[][156])
{
    for (int r = 0; r < 42; r++)
    {
        for (int c = 0; c < 156; c++)
        {
            if (r > 33)
            {
                screen[r][c] = '*';
            }
            else
            {
                screen[r][c] = ' ';
            }
        }
    }
}

void coutAllToScreen(unsigned char screen[][156])
{
    cout << screen[0][0];
    cout << screen[0][1];
    cout << screen[0][2];
    cout << screen[0][3];
    cout << screen[0][4];
    cout << screen[0][5];
    cout << screen[0][6];
    cout << (int)screen[0][7];
    cout << screen[0][8];
    cout << screen[0][9];
    cout << screen[0][10];
    cout << screen[0][11];
    cout << screen[0][12];
    cout << screen[0][13];
    cout << screen[0][14];
    cout << screen[0][15];

    for (int r = 1; r < 42; r++)
    {
        for (int c = 0; c < 156; c++)
        {
            cout << screen[r][c];
        }
        cout << endl;
    }
}

void MoveHelicopter(int& rHc, int& cHc)
{
    cHc++;
}

void DrawHelicopter(unsigned char screen[][156], int rHc, int cHc)
{
    screen[rHc - 8][cHc + 16] = ',';
    screen[rHc - 8][cHc + 17] = ',';
    screen[rHc - 8][cHc + 18] = ',';
    screen[rHc - 8][cHc + 19] = ',';
    screen[rHc - 8][cHc + 20] = ',';
    screen[rHc - 8][cHc + 21] = ',';
    screen[rHc - 8][cHc + 22] = ',';
    screen[rHc - 8][cHc + 23] = ',';
    screen[rHc - 8][cHc + 24] = ',';
    screen[rHc - 8][cHc + 25] = ',';
    screen[rHc - 8][cHc + 26] = '-';
    screen[rHc - 8][cHc + 27] = '-';
    screen[rHc - 8][cHc + 28] = '-';
    screen[rHc - 8][cHc + 29] = '\'';
    screen[rHc - 8][cHc + 30] = '\'';
    screen[rHc - 8][cHc + 31] = '\'';
    screen[rHc - 8][cHc + 32] = '\'';
    screen[rHc - 8][cHc + 33] = '-';
    screen[rHc - 8][cHc + 34] = '-';
    screen[rHc - 8][cHc + 35] = '-';
    screen[rHc - 8][cHc + 36] = ',';
    screen[rHc - 8][cHc + 37] = ',';
    screen[rHc - 8][cHc + 38] = ',';
    screen[rHc - 8][cHc + 39] = ',';
    screen[rHc - 8][cHc + 40] = ',';
    screen[rHc - 8][cHc + 41] = ',';
    screen[rHc - 8][cHc + 42] = ',';
    screen[rHc - 8][cHc + 43] = ',';
    screen[rHc - 8][cHc + 44] = ',';
    screen[rHc - 8][cHc + 45] = ',';
    screen[rHc - 7][cHc + 6] = '-';
    screen[rHc - 7][cHc + 7] = '-';
    screen[rHc - 7][cHc + 8] = '\'';
    screen[rHc - 7][cHc + 9] = '\'';
    screen[rHc - 7][cHc + 10] = '\'';
    screen[rHc - 7][cHc + 11] = '\'';
    screen[rHc - 7][cHc + 12] = '\'';
    screen[rHc - 7][cHc + 13] = '\'';
    screen[rHc - 7][cHc + 14] = '\'';
    screen[rHc - 7][cHc + 15] = '\'';
    screen[rHc - 7][cHc + 26] = '`';
    screen[rHc - 7][cHc + 27] = '`';
    screen[rHc - 7][cHc + 28] = '`';
    screen[rHc - 7][cHc + 29] = '`';
    screen[rHc - 7][cHc + 30] = ']';
    screen[rHc - 7][cHc + 31] = '[';
    screen[rHc - 7][cHc + 32] = '\'';
    screen[rHc - 7][cHc + 33] = '\'';
    screen[rHc - 7][cHc + 34] = '\'';
    screen[rHc - 7][cHc + 35] = '\'';
    screen[rHc - 7][cHc + 46] = '\'';
    screen[rHc - 7][cHc + 47] = '\'';
    screen[rHc - 7][cHc + 48] = '\'';
    screen[rHc - 7][cHc + 49] = '\'';
    screen[rHc - 7][cHc + 50] = '\'';
    screen[rHc - 7][cHc + 51] = '\'';
    screen[rHc - 7][cHc + 52] = '\'';
    screen[rHc - 7][cHc + 53] = '\'';
    screen[rHc - 7][cHc + 54] = '-';
    screen[rHc - 7][cHc + 55] = '-';
    screen[rHc - 6][cHc + 27] = '_';
    screen[rHc - 6][cHc + 28] = '3';
    screen[rHc - 6][cHc + 29] = '\'';
    screen[rHc - 6][cHc + 30] = '\'';
    screen[rHc - 6][cHc + 31] = '\'';
    screen[rHc - 6][cHc + 32] = '\'';
    screen[rHc - 6][cHc + 33] = ':';
    screen[rHc - 6][cHc + 34] = '.';
    screen[rHc - 5][cHc + 1] = '_';
    screen[rHc - 5][cHc + 20] = '.';
    screen[rHc - 5][cHc + 21] = ',';
    screen[rHc - 5][cHc + 22] = '-';
    screen[rHc - 5][cHc + 23] = '-';
    screen[rHc - 5][cHc + 24] = '-';
    screen[rHc - 5][cHc + 25] = '-';
    screen[rHc - 5][cHc + 26] = '-';
    screen[rHc - 5][cHc + 27] = '-';
    screen[rHc - 5][cHc + 28] = '-';
    screen[rHc - 5][cHc + 29] = '-';
    screen[rHc - 5][cHc + 30] = '-';
    screen[rHc - 5][cHc + 31] = '-';
    screen[rHc - 5][cHc + 32] = '-';
    screen[rHc - 5][cHc + 33] = '-';
    screen[rHc - 5][cHc + 34] = '-';
    screen[rHc - 5][cHc + 35] = '-';
    screen[rHc - 5][cHc + 36] = '-';
    screen[rHc - 5][cHc + 37] = '.';
    screen[rHc - 4][cHc + 1] = '\\';
    screen[rHc - 4][cHc + 2] = '\\';
    screen[rHc - 4][cHc + 7] = '/';
    screen[rHc - 4][cHc + 9] = '_';
    screen[rHc - 4][cHc + 10] = '_';
    screen[rHc - 4][cHc + 11] = '_';
    screen[rHc - 4][cHc + 12] = '_';
    screen[rHc - 4][cHc + 13] = '_';
    screen[rHc - 4][cHc + 14] = '_';
    screen[rHc - 4][cHc + 15] = '_';
    screen[rHc - 4][cHc + 16] = '_';
    screen[rHc - 4][cHc + 17] = '_';
    screen[rHc - 4][cHc + 18] = '.';
    screen[rHc - 4][cHc + 19] = '/';
    screen[rHc - 4][cHc + 22] = '|';
    screen[rHc - 4][cHc + 23] = '[';
    screen[rHc - 4][cHc + 24] = '_';
    screen[rHc - 4][cHc + 25] = '_';
    screen[rHc - 4][cHc + 26] = ']';
    screen[rHc - 4][cHc + 27] = '|';
    screen[rHc - 4][cHc + 29] = 'o';
    screen[rHc - 4][cHc + 33] = '|';
    screen[rHc - 4][cHc + 34] = 'J';
    screen[rHc - 4][cHc + 35] = '@';
    screen[rHc - 4][cHc + 36] = '"';
    screen[rHc - 4][cHc + 37] = '\\';
    screen[rHc - 4][cHc + 38] = '\\';
    screen[rHc - 4][cHc + 39] = '_';
    screen[rHc - 4][cHc + 40] = '_';
    screen[rHc - 3][cHc + 2] = '\\';
    screen[rHc - 3][cHc + 3] = '\\';
    screen[rHc - 3][cHc + 4] = '=';
    screen[rHc - 3][cHc + 5] = '=';
    screen[rHc - 3][cHc + 6] = 'o';
    screen[rHc - 3][cHc + 7] = '=';
    screen[rHc - 3][cHc + 8] = '=';
    screen[rHc - 3][cHc + 9] = '=';
    screen[rHc - 3][cHc + 10] = '=';
    screen[rHc - 3][cHc + 11] = '=';
    screen[rHc - 3][cHc + 12] = '=';
    screen[rHc - 3][cHc + 13] = '=';
    screen[rHc - 3][cHc + 14] = '=';
    screen[rHc - 3][cHc + 15] = '=';
    screen[rHc - 3][cHc + 16] = ':';
    screen[rHc - 3][cHc + 17] = ';';
    screen[rHc - 3][cHc + 22] = '|';
    screen[rHc - 3][cHc + 23] = '_';
    screen[rHc - 3][cHc + 24] = '_';
    screen[rHc - 3][cHc + 25] = '_';
    screen[rHc - 3][cHc + 26] = '_';
    screen[rHc - 3][cHc + 27] = '|';
    screen[rHc - 3][cHc + 28] = '[';
    screen[rHc - 3][cHc + 29] = 'I';
    screen[rHc - 3][cHc + 30] = 'L';
    screen[rHc - 3][cHc + 31] = '_';
    screen[rHc - 3][cHc + 32] = '_';
    screen[rHc - 3][cHc + 33] = '|';
    screen[rHc - 3][cHc + 34] = '\'';
    screen[rHc - 3][cHc + 35] = '\'';
    screen[rHc - 3][cHc + 36] = '\'';
    screen[rHc - 3][cHc + 37] = '\'';
    screen[rHc - 3][cHc + 38] = '/';
    screen[rHc - 3][cHc + 39] = '_';
    screen[rHc - 3][cHc + 40] = '/';
    screen[rHc - 3][cHc + 41] = '\'';
    screen[rHc - 3][cHc + 42] = ')';
    screen[rHc - 2][cHc + 5] = '/';
    screen[rHc - 2][cHc + 18] = '`';
    screen[rHc - 2][cHc + 19] = '\'';
    screen[rHc - 2][cHc + 20] = '-';
    screen[rHc - 2][cHc + 21] = ',';
    screen[rHc - 2][cHc + 22] = '.';
    screen[rHc - 2][cHc + 23] = '_';
    screen[rHc - 2][cHc + 24] = '_';
    screen[rHc - 2][cHc + 25] = '_';
    screen[rHc - 2][cHc + 26] = '_';
    screen[rHc - 2][cHc + 27] = '_';
    screen[rHc - 2][cHc + 28] = '=';
    screen[rHc - 2][cHc + 29] = '=';
    screen[rHc - 2][cHc + 30] = '=';
    screen[rHc - 2][cHc + 31] = '\\';
    screen[rHc - 2][cHc + 32] = '=';
    screen[rHc - 2][cHc + 33] = '_';
    screen[rHc - 2][cHc + 34] = '_';
    screen[rHc - 2][cHc + 35] = '_';
    screen[rHc - 2][cHc + 36] = '_';
    screen[rHc - 2][cHc + 37] = '_';
    screen[rHc - 2][cHc + 38] = '.';
    screen[rHc - 2][cHc + 39] = ',';
    screen[rHc - 2][cHc + 40] = '-';
    screen[rHc - 2][cHc + 41] = '\'';
    screen[rHc - 1][cHc + 26] = '\\';
    screen[rHc - 1][cHc + 36] = '\\';
    screen[rHc - 1][cHc + 42] = ',';
    screen[rHc - 0][cHc + 20] = '"';
    screen[rHc - 0][cHc + 21] = '"';
    screen[rHc - 0][cHc + 22] = '"';
    screen[rHc - 0][cHc + 23] = '"';
    screen[rHc - 0][cHc + 24] = '"';
    screen[rHc - 0][cHc + 25] = '"';
    screen[rHc - 0][cHc + 26] = '"';
    screen[rHc - 0][cHc + 27] = '"';
    screen[rHc - 0][cHc + 28] = '"';
    screen[rHc - 0][cHc + 29] = '"';
    screen[rHc - 0][cHc + 30] = '"';
    screen[rHc - 0][cHc + 31] = '"';
    screen[rHc - 0][cHc + 32] = '"';
    screen[rHc - 0][cHc + 33] = '"';
    screen[rHc - 0][cHc + 34] = '"';
    screen[rHc - 0][cHc + 35] = '"';
    screen[rHc - 0][cHc + 36] = '"';
    screen[rHc - 0][cHc + 37] = '"';
    screen[rHc - 0][cHc + 38] = '"';
    screen[rHc - 0][cHc + 39] = '"';
    screen[rHc - 0][cHc + 40] = '"';
    screen[rHc - 0][cHc + 41] = '"';
}



void DrawHero(unsigned char screen[][156], int rH, int cH) // ch = 11 , rh = 32
{
    screen[rH][cH + 5] = '_';
    screen[rH][cH + 6] = '_';
    screen[rH][cH + 7] = '_';
    screen[rH][cH + 8] = '_';
    screen[rH + 1][cH + 3] = '/';
    screen[rH + 1][cH + 4] = ' ';
    screen[rH + 1][cH + 5] = ' ';
    screen[rH + 1][cH + 6] = ' ';
    screen[rH + 1][cH + 7] = ' ';
    screen[rH + 1][cH + 8] = ' ';
    screen[rH + 1][cH + 9] = '\\';
    screen[rH + 2][cH + 2] = '|';
    screen[rH + 2][cH + 4] = 'o';
    screen[rH + 2][cH + 6] = 'o';
    screen[rH + 2][cH + 10] = '|';
    screen[rH + 3][cH + 2] = '|';
    screen[rH + 3][cH + 5] = '-';
    screen[rH + 3][cH + 6] = '-';
    screen[rH + 3][cH + 10] = '|';
    screen[rH + 4][cH + 1] = '\\';
    screen[rH + 4][cH + 4] = '_';
    screen[rH + 4][cH + 5] = '_';
    screen[rH + 4][cH + 6] = '_';
    screen[rH + 4][cH + 7] = '_';
    screen[rH + 4][cH + 10] = '/';
    screen[rH + 5][cH + 1] = '/';
    screen[rH + 5][cH + 2] = '|';
    screen[rH + 5][cH + 9] = '|';
    screen[rH + 5][cH + 10] = '\\'; //
    screen[rH + 6][cH] = '/';
    screen[rH + 6][cH + 2] = '|';
    screen[rH + 6][cH + 3] = '_';
    screen[rH + 6][cH + 4] = '_';
    screen[rH + 6][cH + 5] = '_';
    screen[rH + 6][cH + 6] = '_';
    screen[rH + 6][cH + 7] = '_';
    screen[rH + 6][cH + 8] = '_';
    screen[rH + 6][cH + 9] = '|';
    screen[rH + 6][cH + 11] = '\\'; //
    screen[rH + 7][cH + 4] = '|';
    screen[rH + 7][cH + 5] = '|';
    screen[rH + 7][cH + 8] = '|';
    screen[rH + 7][cH + 9] = '|';
    screen[rH + 8][cH + 4] = 'M';
    screen[rH + 8][cH + 5] = 'M';
    screen[rH + 8][cH + 8] = 'M';
    screen[rH + 8][cH + 9] = 'M';
}

void MoveHero(int& rH, int& cH, char Let)
{
    if (Let == 'w')
    {
        rH--;
    }
    if (Let == 's')
    {
        rH++;
    }
    if (Let == 'a')
    {
        cH--;
    }
    if (Let == 'd')
    {
        cH++;
    }
}

void main()
{
    unsigned char screen[42][156];
    char Let = ' ';
    int rHc = 10;
    int cHc = 10;
    int rH = 25;
    int cH = 11;
    int time = 0;

    for (;;)
    {
        for (; !_kbhit();)
        {
            drawFlat(screen);
            MoveHelicopter(rHc, cHc);
            DrawHelicopter(screen, rHc, cHc);
            DrawHero(screen, rH, cH);
            timer(screen, time);
            time++;
            coutAllToScreen(screen);
            system("cls");
        }
        Let = _getch();
        if (Let == 'p')
        {

        }
        MoveHero(rH, cH, Let);
    }
}