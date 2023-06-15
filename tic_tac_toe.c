#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

char board[3][3];
const char PLAYER = 'O';
const char COMPUTER = 'X';

void reset_board();
void print_board();
int check_free_spaces();
void player_move();
void computer_move();
char check_winner();
void print_winner(char);

int main()
{
    char winner = ' ';
    char response;

    do
    {
        winner = ' ';
        response = ' ';

        reset_board();

        while(winner == ' ' && check_free_spaces() != 0)
        {
            print_board();

            player_move();
            winner = check_winner();

            if(winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }

            computer_move();
            winner = check_winner();
            
            if(winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }
        }

        print_board();
        print_winner(winner);

        printf("\nWould you like to play again? (y/N): ");
        fflush(stdout);
        scanf(" %c", &response);

        response = tolower(response);

    } while (response == 'y');

    printf("\nThanks for playing!\n");
    
    return 0;
}

void reset_board()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void print_board()
{
    for(int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);

        if (i != 2)
        {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}

int check_free_spaces()
{
    int free_spaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {   
            if(board[i][j] != ' ')
            {
                free_spaces--;
            }
        }
    }
    return free_spaces;
}

void player_move()
{
    int x;
    int y;

    do
    {
        printf("Enter row number (1-3): ");
        scanf("%d", &x);
        x--;

        printf("Enter column number (1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}
    

void computer_move()
{
    //creates a seed based on current time
    srand(time(0));
    int x;
    int y;

    if(check_free_spaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        
        board[x][y] = COMPUTER;
    }
    else
    {
        print_winner(' ');
    }
}

char check_winner()
{
    // check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}

void print_winner(char winner)
{
    if(winner == PLAYER)
    {
        printf("YOU WIN!");
    }
    else if(winner == COMPUTER)
    {
        printf("YOU LOSE!");
    }
    else
    {
        printf("IT'S A DRAW!");
    }
}