#include <iostream>
#include <string>

using namespace std;

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int player = 1;
        char num1 = '1', num2 = '2', num3 = '3';
        char num4 = '4', num5 = '5', num6 = '6';
        char num7 = '7', num8 = '8', num9 = '9';
        
        int move;
        char icon;
        bool gameWon = false;

        cout << "Game Display" << endl << "************" << endl;
        cout << num1 << "|" << num2 << "|" << num3 << endl 
             << num4 << "|" << num5 << "|" << num6 << endl 
             << num7 << "|" << num8 << "|" << num9 << endl;

        for (int i = 0; i < 9; i++) {
            if (player == 1) {
                icon = 'O';
            } else {
                icon = 'X';
            }

            bool validMove = false;

            while (!validMove) {
                cout << "(" << player << ") Select Move :" << endl;
                cin >> move;

                switch (move) {
                    case 1: 
                        if (num1 == 'X' || num1 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num1 = icon;
                            validMove = true;
                        }
                        break;
                    case 2: 
                        if (num2 == 'X' || num2 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num2 = icon;
                            validMove = true;
                        }
                        break;
                    case 3: 
                        if (num3 == 'X' || num3 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num3 = icon;
                            validMove = true;
                        }
                        break;
                    case 4: 
                        if (num4 == 'X' || num4 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num4 = icon;
                            validMove = true;
                        }
                        break;
                    case 5: 
                        if (num5 == 'X' || num5 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num5 = icon;
                            validMove = true;
                        }
                        break;
                    case 6: 
                        if (num6 == 'X' || num6 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num6 = icon;
                            validMove = true;
                        }
                        break;
                    case 7: 
                        if (num7 == 'X' || num7 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num7 = icon;
                            validMove = true;
                        }
                        break;
                    case 8: 
                        if (num8 == 'X' || num8 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num8 = icon;
                            validMove = true;
                        }
                        break;
                    case 9: 
                        if (num9 == 'X' || num9 == 'O') {
                            cout << "Already selected!" << endl;
                        } else {
                            num9 = icon;
                            validMove = true;
                        }
                        break;
                    default: 
                        cout << "Invalid option" << endl;
                        break;
                }
            }

            cout << "Game Display" << endl << "************" << endl;
            cout << num1 << "|" << num2 << "|" << num3 << endl 
                 << num4 << "|" << num5 << "|" << num6 << endl 
                 << num7 << "|" << num8 << "|" << num9 << endl;

            // Check Win Conditions (3 in a row)
            if ((num1 == num2 && num2 == num3) || // Row 1
                (num4 == num5 && num5 == num6) || // Row 2
                (num7 == num8 && num8 == num9) || // Row 3
                (num1 == num4 && num4 == num7) || // Col 1
                (num2 == num5 && num5 == num8) || // Col 2
                (num3 == num6 && num6 == num9) || // Col 3
                (num1 == num5 && num5 == num9) || // Diag 1
                (num3 == num5 && num5 == num7)) {  // Diag 2
                
                cout << "\nPlayer " << player << " (" << icon << ") WINS!" << endl;
                gameWon = true;
                break; // Exit the 9-turn loop
            }

            // Switch player
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        }

        if (!gameWon) {
            cout << "\nGame Over - It's a DRAW!" << endl;
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    }

    return 0;
}