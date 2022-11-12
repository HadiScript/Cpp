#include <iostream>
#include <stdio.h>
#include <conio.h>

int display_board();
int player_chance();
bool game_over();

using namespace std;

char turn = 'X';
bool draw;
int row, column;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int main()
{
    while (game_over())
    {
        display_board();
        player_chance();
        display_board();
        game_over();
    }

    if(turn == 'O' && draw == false )
    cout<<"player_one win the match"<<endl;

    else if(turn == 'X' && draw == false)
    cout<<"player_two win the match"<<endl;
    else{
        cout<<"game is draw"<<endl;
    }

    return 0;
}


// status of the game
bool game_over()
{
    // player win line
    for (int i = 0; i < 3; i++)
        if(board[i][0] == board[i][1] && board[i][0]  == board[i][2] || board[0][i] == board[1][i] && board[0][i]  == board[2][i])
        return false;

        if(board[0][0] == board[1][1] && board[0][0]  == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0] )
        return false;
   

        // game continue
        for(int i = 0; i<3 ; i++)
        for(int j=0; j<3; j++)
        if(board[i][j] != 'X' && board[i][j] != 'O')
        return true;


    // for the draw match
    draw = true;
    return false;

    
}





// PLAYERS
int player_chance()
{
    int choice;

    if (turn == 'X')
    {
        cout << "player_one chance" << endl;
        
    }
    if (turn == 'O')
    {
        cout << "chance of palyer_two" << endl;

    }

        cin >> choice;
   
    switch (choice)
    {
    case 1:
        row = 0;
        column = 0;
        break;

    case 2:
        row = 0;
        column = 1;
        break;

    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;

    case 5:
        row = 1;
        column = 1;
        break;

    case 6:
        row = 1;
        column = 2;
        break;

    case 7:
        row = 2;
        column = 0;
        break;

    case 8:
        row = 2;
        column = 1;
        break;

    case 9:
        row = 2;
        column = 2;
        break;

    default:
        cout << "please enter valid choice which is avaible in the game board" << endl;
    }

    if (turn == 'X')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }

    return 0;
}

// GAME'S BOARD
int display_board()
{
    system("cls");
    cout << " TIC TAC " << endl;
    cout << "player_1[X] - player_2[0]" << endl
         << endl;

    cout << "     |       |       " << endl;
    cout << "  " << board[0][0] << "  |   " << board[0][1] << "   |   " << board[0][2] << "   " << endl;
    cout << "_____|_______|_______" << endl;
    cout << "     |       |       " << endl;
    cout << "  " << board[1][0] << "  |   " << board[1][1] << "   |   " << board[1][2] << "   " << endl;
    cout << "_____|_______|_______" << endl;
    cout << "     |       |       " << endl;
    cout << "  " << board[2][0] << "  |   " << board[2][1] << "   |   " << board[2][2] << "   " << endl;
    cout << "     |       |       " << endl;

    return 0;
}