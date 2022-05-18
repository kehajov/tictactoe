#include <iostream>
#include <vector>
#include <string>
#include "ttt_func.hpp"

int main()
{
    while (true)
    {
        std::vector<std::vector<char>> tictactoemesh{
            {' ', ' ', ' '},
            {' ', ' ', ' '},
            {' ', ' ', ' '}};
        int player1_1;
        int player1_2;
        int player2_1;
        int player2_2;
        int turn = 1;
        char new_game;
        bool foo = true;

        displayMesh(tictactoemesh);

        while (foo)
        {
            std::cout << "\nTurn " << turn << "\n";

            std::cout << "Player 1 enter coordinates: ";
            std::cin >> player1_1 >> player1_2;
            while (true)
            {
                if (tictactoemesh[player1_2][player1_1] == ' ')
                {
                    tictactoemesh[player1_2][player1_1] = 'X';
                    break;
                    std::cout << "Coordinate " << player1_1 << ";" << player1_2 << " updated for player 1 with X!\n";
                }
                else if (tictactoemesh[player1_2][player1_1] == 'X')
                {
                    std::cout << "Coordinate already taken by X!\n";
                    std::cout << "Please enter new coordinates: ";
                    std::cin >> player1_1 >> player1_2;
                    std::cout << "\n";
                    continue;
                }
                else if (tictactoemesh[player1_2][player1_1] == 'O')
                {
                    std::cout << "Coordinate already taken by O!\n";
                    std::cout << "Please enter new coordinates: ";
                    std::cin >> player1_1 >> player1_2;
                    std::cout << "\n";
                    continue;
                }
            }
            displayMesh(tictactoemesh);
            bool end_game = winner(tictactoemesh, foo);
            if (end_game == false)
            {
                std::cout << "\nDo you want to play again? y/n: ";
                std::cin >> new_game;
                std::cout << "\n";

                if (new_game == 'y')
                {
                    continue;
                }
                else
                {
                    return 1;
                    break;
                }
            }

            // player2(tictactoemesh, player2_1, player2_2);
            std::cout << "Player 2 enter coordinates: ";
            std::cin >> player2_1 >> player2_2;
            while (true)
            {
                if (tictactoemesh[player2_2][player2_1] == ' ')
                {
                    tictactoemesh[player2_2][player2_1] = 'O';
                    break;
                    std::cout << "Coordinate " << player2_1 << ";" << player2_2 << " updated for player 1 with O!\n";
                }
                else if (tictactoemesh[player2_2][player2_1] == 'O')
                {
                    std::cout << "Coordinate already taken by X!\n";
                    std::cout << "Please enter new coordinates: ";
                    std::cin >> player2_1 >> player2_2;
                    std::cout << "\n";
                    continue;
                }
                else if (tictactoemesh[player2_2][player2_1] == 'X')
                {
                    std::cout << "Coordinate already taken by O!\n";
                    std::cout << "Please enter new coordinates: ";
                    std::cin >> player2_1 >> player2_2;
                    std::cout << "\n";
                    continue;
                }
            }

            displayMesh(tictactoemesh);
            end_game = winner(tictactoemesh, foo);

            if (end_game == false)
            {
                std::cout << "\nDo you want to play again? y/n: ";
                std::cin >> new_game;
                std::cout << "\n";

                if (new_game == 'y')
                {
                    continue;
                }
                else
                {
                    return 1;
                    break;
                }
            }

            turn++;
        }
    }
    return 0;
}