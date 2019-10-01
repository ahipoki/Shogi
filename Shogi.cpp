#include <iostream>
#include <cstring>

using namespace std;

/*
 Finn McKinley
 9/26/19
 A shogi program
*/
void showBoard(char board[] [SIDE]) {
  for (int r = 0; r < board.length(); r++) {
    for (int c = 0; c < board[r].length(); c++) {
      cout << board[r][c];
    }
  }
}

void shogi() {
 int player1Wins = 0;
 //Keeps track of player 1's wins
 int player2Wins = 0;
 //Keeps track of player 2's wins
 bool whiteMove = false;
 bool blackMove = true;
}
        
int main() {
 showBoard();
 //9x9 board
 //Pieces moving
 //1 king
 //1 Rook
 //1 Bishop
 //2 Gold Generals
 //2 Silver Generals
 //2 Knights
 //2 Lances
 //9 Pawns
 
 //Black goes first
 //White goes second
 
 /*
 L N S G K G S N L
   R           B
 P P P P P P P P P
 
 
 
 P P P P P P P P P
   B           R
 L N S G K G S N L
 */
 
 //Ask player to select a move by selecting a piece's location (ex. b7)
 //Then ask them to select their desired move location (ex. c3)
 //If it's a legal move, move the piece
 //If it's not a legal move, tell the user that the move is illegal and tell them to select a move
}
