#include <iostream>
#include <vector>

void displayMesh(std::vector<std::vector<char>> tictactoemesh)
{
    std::cout << "   0   1   2";

    for (int i = 0; i < tictactoemesh.size(); i++)
    {
        std::cout << "\n  ___________\n";
        std::cout << i << " |";

        for (int j = 0; j < tictactoemesh.size(); j++)
        {
            std::cout << tictactoemesh[i][j] << " | ";
        }
        // std::cout << "\n  ___________";
    }
    std::cout << "\n";
}

void player2(std::vector<std::vector<char>> tictactoemesh, int player2_1, int player2_2)
{
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
}

bool winner(std::vector<std::vector<char>> tictactoemesh, bool foo)
{
    if (tictactoemesh[0][0] != ' ' && tictactoemesh[0][0] == tictactoemesh[0][1] && tictactoemesh[0][1] == tictactoemesh[0][2])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[0][0] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[1][0] != ' ' && tictactoemesh[1][0] == tictactoemesh[1][1] && tictactoemesh[1][1] == tictactoemesh[1][2])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[1][0] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[2][0] != ' ' && tictactoemesh[2][0] == tictactoemesh[2][1] && tictactoemesh[2][1] == tictactoemesh[2][2])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[2][0] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[0][0] != ' ' && tictactoemesh[0][0] == tictactoemesh[1][0] && tictactoemesh[1][0] == tictactoemesh[2][0])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[0][0] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[0][1] != ' ' && tictactoemesh[0][1] == tictactoemesh[1][1] && tictactoemesh[1][1] == tictactoemesh[2][1])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[0][1] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[0][2] != ' ' && tictactoemesh[0][2] == tictactoemesh[1][2] && tictactoemesh[1][2] == tictactoemesh[2][2])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[0][2] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[0][0] != ' ' && tictactoemesh[0][0] == tictactoemesh[1][1] && tictactoemesh[1][1] == tictactoemesh[2][2])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[1][0] << " wins!\n";
        foo = false;
    }
    if (tictactoemesh[0][2] != ' ' && tictactoemesh[0][2] == tictactoemesh[1][1] && tictactoemesh[1][1] == tictactoemesh[2][0])
    {
        std::cout << "We have a winner!";
        std::cout << "\n"
                  << tictactoemesh[0][2] << " wins!\n";
        foo = false;
    }

    return foo;
}
