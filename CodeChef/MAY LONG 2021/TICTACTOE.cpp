#include <bits/stdc++.h>
using namespace std;
int solution(char board[], char ch)
{
    if ((board[0] == ch) && (board[0] == board[1]) && (board[0] == board[2]))
        return 1;
    if ((board[0] == ch) && (board[0] == board[3]) && (board[0] == board[6]))
        return 1;
    if ((board[0] == ch) && (board[0] == board[4]) && (board[0] == board[8]))
        return 1;

    if ((board[1] == ch) && (board[1] == board[4]) && (board[1] == board[7]))
        return 1;

    if ((board[2] == ch) && (board[2] == board[4]) && (board[2] == board[6]))
        return 1;
    if ((board[2] == ch) && (board[2] == board[5]) && (board[2] == board[8]))
        return 1;

    if ((board[3] == ch) && (board[3] == board[4]) && (board[3] == board[5]))
        return 1;
    if ((board[6] == ch) && (board[6] == board[7]) && (board[6] == board[8]))
        return 1;

    return 0;
}
int checkcond(char characters[])
{
    int countX = 0, countO = 0;
    for (int i = 0; i < 3; i++)
    {
        if (characters[i] == 'X')
            countX++;
        if (characters[i] == 'O')
            countO++;
    }

    int count_ = 9 - (countX + countO);
    if (countX < countO)
    {
        return 3;
    }
    if (countX > countO + 1)
    {
        return 3;
    }

    int winX = solution(characters, 'X');
    int winO = solution(characters, 'O');

    if (winX == 1 && winO == 1)
    {
        return 3;
    }
    if (winX == 1 && countX == countO)
    {
        return 3;
    }
    if (winO == 1 && countX > countO)
    {
        return 3;
    }
    if (winO == 1 || winX == 1)
    {
        return 1;
    }
    if (count_ == 0)
        return 1;
    return 2;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string board;
        cin >> board;
        char characters[3];
        strcpy(characters, board.c_str());
        cout << checkcond(characters);
    }

    return 0;
}