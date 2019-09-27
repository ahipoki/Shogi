#include <stdio>
#include <cstring>

using namespace std;

/*
 Finn McKinley
 9/26/19
 A shogi program
*/
void showBoard(char board[] [SIDE]) {
 printf("\n\n");
 
 printf("\t\t\t  %c | %c  | %c  \n", board[0][0], board[0][1], board[0][2]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n"", board[1][0], board[1][1], board[1][2]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[2][0], board[2][1], board[2][2]);
 
 return;
}

void shogi() {
 int player1Wins = 0;
 //Keeps track of player 1's wins
 int player2Wins = 0;
 //Keeps track of player 2's wins
}
        
int main() {
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
