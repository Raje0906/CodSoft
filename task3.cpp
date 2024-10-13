#include <iostream>
using namespace std;

char board[3][3]; // 3x3 game board
char currentPlayer; // Current player ('X' or 'O')

// Function to initialize the game board
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '1' + i * 3 + j; // Fill the board with numbers 1-9
        }
    }
}

// Function to display the game board
void displayBoard() {
    cout << "Current Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---|---|---" << endl;
    }
}

// Function to switch between players
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Function to check if the input move is valid
bool isValidMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    return (move >= 1 && move <= 9 && board[row][col] != 'X' && board[row][col] != 'O');
}

// Function to update the board with the player's move
void updateBoard(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    board[row][col] = currentPlayer;
}

// Function to check if the current player has won
bool checkWin() {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true;
        }
    }
    return (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
           (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer);
}

// Function to check if the game is a draw
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

// Function to play the Tic-Tac-Toe game
void playGame() {
    int move;
    currentPlayer = 'X'; // 'X' always starts first
    bool gameEnd = false;

    while (!gameEnd) {
        displayBoard();
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        if (isValidMove(move)) {
            updateBoard(move);

            if (checkWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameEnd = true;
            } else if (checkDraw()) {
                displayBoard();
                cout << "It's a draw!" << endl;
                gameEnd = true;
            } else {
                switchPlayer(); // Switch turns
            }
        } else {
            cout << "Invalid move, please try again." << endl;
        }
    }
}

// Main function to start and manage the game
int main() {
    char playAgain = 'y';

    do {
        initializeBoard(); // Start with a fresh board
        playGame(); // Play one round of Tic-Tac-Toe

        // Ask if players want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing Tic-Tac-Toe!" << endl;
    return 0;
}
