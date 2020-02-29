#include <iostream>


int main()
{
    char const K = 'K'; // король
    char const F = 'F'; // ферзь
    char const S = 'S'; // слон
    char const H = 'H'; // конь
    char const L = 'L'; // ладья
    char const P = 'P'; // пешка

    char Pole[9][9] = {
            {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
            {'1', S, L, H, F, K, H, L, S},
            {'2', P, P, P, P, P, P, P, P},
            {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'7', P, P, P, P, P, P, P, P},
            {'8', S, L, H, K, F, H, L, S},
    };

    for (int i = 0; i < 9; i++) // вывод изначальной доски
    {
        for (int j = 0; j < 9; j++)
            std::cout << Pole[i][j] << ' ';
        std::cout << 
;
    }

    return 0;
}
