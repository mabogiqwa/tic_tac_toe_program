//Created: 29-11-2023
//Author: Mabo Giqwa
//Purpose: Tic-Tac-Toe game

#include <iostream>
#include <string>

const int ROWS = 7;
const int COLUMNS = 7;

class ticTacToe
{
public:
    void get_name_of_players();
    //Precondition: The input must not be empty or else the program will
    //encounter an error loop.
    //Postcondition: The function enters the input into the reference variables
    void print_board();
    //Precondition: The tic-tac-toe two dimensional must already be populated with the initial
    //values necessary to display the board.
    //Postcondition: Prints the tic-tac-toe board.
    void begin_game();
    //Begins the tic-tac toe game
    ticTacToe();
    //Default Constructor
private:
    char board[ROWS][COLUMNS];
    std::string player1;
    std::string player2;
    void populate_board();
    //Precondition: The two-dimensional array must be of 7 x 7 dimensions.
    //Postcondition: The function enters the values necessary to display
    //the tic-tac-toe board using the two-dimensional array.
    std::string check_if_a_player_has_won();
    //Precondition: The tic-tac-toe board must be populated with
    //necessary X or O values to win.
    //Postcondition: Returns a string indicating which player has won.
    void reflect_move_on_board(char move, int turn);
    //Postcondition: The move entered by a player is reflected on the board as either
    //the character 'X' or 'O'.
    bool check_if_space_is_already_played(char move);
    //Precondition:
    //Postcondition: Checks if the space entered
    //by the user does not already have a X or O symbol.
    //Returns true if that is the case.
    bool check_if_play_is_valid(char move);
    //Precondition: The 'play' from the user must be a single character and a
    //choice between the characters A, B, C, D, E, F, G, H, I.
    //Postcondition: Returns a boolean whose truth depends on whether the 
    //character input from the user if between the letters A, B, C, D, E, F, G,
    //H, I or not. Returns true if it is between the letters.
    int check_win_scenario_1();
    int check_win_scenario_2();
    int check_win_scenario_3();
    int check_win_scenario_4();
    int check_win_scenario_5();
    int check_win_scenario_6();
    int check_win_scenario_7();
    int check_win_scenario_8();
};

ticTacToe::ticTacToe()
{
    populate_board();
    player1 = "Dar-man 1";
    player2 = "Dar-man 2";
}

void ticTacToe::get_name_of_players()
{
    std::cout << "Welcome to a game of Tic-Tac-Toe" << std::endl << std::endl;
    std::cout << "Enter your name player 1: ";
    std::cin >> player1;
    std::cout << std::endl;
    std::cout << "Enter your name player 2: ";
    std::cin >> player2;
}

void ticTacToe::populate_board()
{
    //This for loop generates the horizontal outer boundaries
    //of the board.

    for(int i = 0; i <= 6; i = i + 6)
    {
        for (int j = 0; j <= 6; j++)
        {
            board[i][j] = '-';
        }
    }

    //This for loop generates the vertical boundaries
    //of the board
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 6; j = j + 2)
        {
            board[i][j] = '|';
        }
    }

    //This for loop generates spaces within the board
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j = j + 2)
        {
            board[i][j] = ' ';
        }
    }

    board[1][1] = 'A';
    board[1][3] = 'B';
    board[1][5] = 'C';
    board[3][1] = 'D';
    board[3][3] = 'E';
    board[3][5] = 'F';
    board[5][1] = 'G';
    board[5][3] = 'H';
    board[5][5] = 'I';

    //Adds boundaries
    for (int i = 2; i <= 4; i = i + 2)
    {
        for (int j = 1; j <= 5; j = j + 2)
        {
            board[i][j] = '-';
        }
    }
}

void ticTacToe::reflect_move_on_board(char move, int turn)
{
    if (move == 'A') {
        if (turn % 2 == 0) {
            board[1][1] = 'O';
            print_board();
        }
        else {
            board[1][1] = 'X';
            print_board();
        }
    }
    else if (move == 'B') {
        if (turn % 2 == 0) {
            board[1][3] = 'O';
            print_board();
        }
        else {
            board[1][3] = 'X';
            print_board();
        }
    }
    else if (move == 'C') {
        if (turn % 2 == 0) {
            board[1][5] = 'O';
            print_board();
        }
        else {
            board[1][5] = 'X';
            print_board();
        }
    }
    else if (move == 'D') {
        if (turn % 2 == 0) {
            board[3][1] = 'O';
            print_board();
        }
        else {
            board[3][1] = 'X';
            print_board();
        }
    }
    else if (move == 'E') {
        if (turn % 2 == 0) {
            board[3][3] = 'O';
            print_board();
        }
        else {
            board[3][3] = 'X';
            print_board();
        }
    }
    else if (move == 'F') {
        if (turn % 2 == 0) {
            board[3][5] = 'O';
            print_board();
        }
        else {
            board[3][5] = 'X';
            print_board();
        }
    }
    else if (move == 'G') {
        if (turn % 2 == 0) {
            board[5][1] = 'O';
            print_board();
        }
        else {
            board[5][1] = 'X';
            print_board();
        }
    }
    else if (move == 'H') {
        if (turn % 2 == 0) {
            board[5][3] = 'O';
            print_board();
        }
        else {
            board[5][3] = 'X';
            print_board();
        }
    }
    else if (move == 'I') {
        if (turn % 2 == 0) {
            board[5][5] = 'O';
            print_board();
        }
        else {
            board[5][5] = 'X';
            print_board();
        }
    }
}

void ticTacToe::print_board()
{
    std::cout << std::endl;
    std::cout << "Tic-Tac-Toe board" << std::endl;

    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}

bool ticTacToe::check_if_space_is_already_played(char move)
{
    if (move == 'A')
    {
        if ((board[1][1] == 'X') || (board[1][1] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'B')
    {
        if ((board[1][3] == 'X') || (board[1][3] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'C')
    {
        if ((board[1][5] == 'X') || (board[1][5] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'D')
    {
        if ((board[3][1] == 'X') || (board[3][1] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'E')
    {
        if ((board[3][3] == 'X') || (board[3][3] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'F')
    {
        if ((board[3][5] == 'X') || (board[3][5] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'G')
    {
        if ((board[5][1] == 'X') || (board[5][1] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'H')
    {
        if ((board[5][3] == 'X') || (board[5][3] == 'O'))
            return true;
        else
            return false;
    }
    else if (move == 'I')
    {
        if ((board[5][5] == 'X') || (board[5][5] == 'O'))
            return true;
        else
            return false;
    } else
        return false;
}

bool ticTacToe::check_if_play_is_valid(char move)
{
    const int SIZE = 9;

    char possible_moves[SIZE] = {'A','B','C','D','E','F','G','H','I'};

    for (int i = 0; i < 9; i++)
    {
        if (possible_moves[i] == move)
            return true;
    }

    return false;
}

int ticTacToe::check_win_scenario_1()
{
    //Win scenario 1
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 1; i <= 5; i = i + 2)
    {
        for (int j = 1; j <= 1; j++)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;

}

int ticTacToe::check_win_scenario_2()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 5; j = j + 2)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_3()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win

    for (int i = 1; i <= 5; i = i + 2)
    {
        for (int j = i; j <= i; j++)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_4()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    
    int column_index = 5;
    for (int i = 1; i <= 5; i = i + 2)
    {
        for (int j = column_index; j <= column_index; j++)
        {
            column_index = column_index - 2;
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_5()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 5; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j = j + 2)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_6()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 1; i <= 5; i = i + 2)
    {
        for (int j = 5; j <= 5; j++)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_7()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 1; i <= 5; i = i + 2)
    {
        for (int j = 3; j <= 3; j++)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

int ticTacToe::check_win_scenario_8()
{
    int satisfaction1 = 0; //Counts if player one has met
    //the necessary condition in this scenario to win
    int satisfaction2 = 0; //Counts if player two has met
    //the necessary condition in this scenario to win
    //
    for (int i = 3; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j = j + 2)
        {
            if (board[i][j] == 'X')
                satisfaction1 = satisfaction1 + 1;
            if (board[i][j] == 'O')
                satisfaction2 = satisfaction2 + 1;
        }
    }

    if (satisfaction1 == 3)
        return 1;
    else if (satisfaction2 == 3)
        return 2;
    else
        return 3;
}

std::string ticTacToe::check_if_a_player_has_won()
{
    int checkValue;

    checkValue = check_win_scenario_1();
    if (checkValue == 1)
        return  "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_2();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_3();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_4();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_5();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_6();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_7();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    checkValue = check_win_scenario_8();
    if (checkValue == 1)
        return "Player one has won.";
    else if (checkValue == 2)
        return "Player two has won.";

    if (checkValue == 3)
        return "";
}

void ticTacToe::begin_game()
{
    char player_one_move, player_two_move;
    int sentinel, turn;
    int check_if_player_has_won;
    bool validMove = false, validPlay;
    int checkValue, total_plays;
    std::string winner;

    total_plays = 0;
    for (int i = 1; i <= 5; i++)
    {
        sentinel = 0;
        turn = 0;
        do
        {
            std::cout << std::endl;
            std::cout << "Enter your move " << player1 << ": ";
            std::cin >> player_one_move;
            std::cout << std::endl;

            validPlay = check_if_play_is_valid(player_one_move);
        
            if(validPlay) {
                validMove = check_if_space_is_already_played(player_one_move);

                if (validMove) {
                    std::cout << std::endl;
                    std::cout << "Invalid move, try again." << std::endl;
                    sentinel = 0;
                } else {
                    turn = turn + 1;
                    reflect_move_on_board(player_one_move, turn);
                    total_plays = total_plays + 1;
                    sentinel = -1;
                }
            } else {
                std::cout << "Invalid play, try again. Choose a space without an X or O" << std::endl << std::endl;
                sentinel = 0;
            }

        std::cin.get();

        } while (sentinel != -1);

        if (i >= 2)
        {
            winner = check_if_a_player_has_won();
            if (!winner.empty()) {
                std::cout << winner;
                i = 6;
                sentinel = -1;
            } else {
                sentinel = 0;
            }
        } else
            sentinel = 0;

        if (total_plays == 9) {
            sentinel = -1;
            i = 6;
            std::cout << "It is a draw. Well played." << std::endl;
        }

        while (sentinel != -1) 
        {
            std::cout << std::endl;
            std::cout << "Enter your move " << player2 << ": ";
            std::cin >> player_two_move;

            validPlay = check_if_play_is_valid(player_two_move);

            if(validPlay) {
                validMove = check_if_space_is_already_played(player_two_move);

                if (validMove) {
                    std::cout << std::endl;
                    std::cout << "Invalid move, try again." << std::endl;
                    sentinel = 0;
                } else {
                    turn = turn + 1;
                    reflect_move_on_board(player_two_move, turn);
                    total_plays = total_plays + 1;
                    sentinel = -1;
                }
            } else {
                std::cout << "Invalid play, try again. Choose a space without an X or O" << std::endl << std::endl;
                sentinel = 0;
            }

        std::cin.get();

        }

        if (i >= 2 && i != 6)
        {
            winner = check_if_a_player_has_won();
            if (!winner.empty()) {
                std::cout << winner;
                i = 6;
            }
        }
    }
}

int main()
{
    ticTacToe game1;

    game1.get_name_of_players();
    game1.print_board();
    game1.begin_game();

    return 0;
}
