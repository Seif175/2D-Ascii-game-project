#include <iostream>
#include <conio.h>
using namespace std;

void coutAllToScreen(unsigned char X[][80])
{
    for (int r = 0; r < 24; r++)
    {
        for (int c = 0; c < 80; c++)
        {
            cout << X[r][c];
        }
        cout << endl;
    }
}

void MoveMarkaba(int& rM, int& cM)
{
    cM++;
}

void DrawMarkaba(unsigned char X[][80], int rM, int cM)
{
    X[rM][cM] = '^';
    int a = 2;
    for (int r = 1; r < 3; r++)
    {
        for (int c = cM - a; c <= cM + a; c++)
        {
            X[rM + r][c] = '^';
        }
        a++;
    }
}

void DrawHero(unsigned char X[][80], int rH, int cH)
{
    X[rH][cH] = 'O';
    X[rH + 1][cH] = '|';
    X[rH + 2][cH - 1] = '/';
    X[rH + 2][cH + 1] = '\\';
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
    unsigned char X[24][80];
    char Let = ' ';
    int rM = 10;
    int cM = 10;
    int rH = 20;
    int cH = 12;

    for(;;)
    {
        for (; !_kbhit();)
        {
            for (int r = 0; r < 24; r++)
            {
                for (int c = 0; c < 80; c++)
                {
                    if (r == 0 || r == 23 || c == 0 || c == 79)
                        X[r][c] = '*';
                    else
                        X[r][c] = ' ';
                }
            }
            MoveMarkaba(rM, cM);
            DrawMarkaba(X, rM, cM);
            DrawHero(X, rH, cH);
            system("cls");
            coutAllToScreen(X);
        }
            Let = _getch();
            MoveHero(rH, cH, Let);
    }
}

// hello seif
