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
 
 printf("\t\t\t  %c | %c  | %c  \n", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6], board[0][7], board[0][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5], board[1][6], bpard[1][7], board[1][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4], board[2][5], board[2][6], board[2][7], board[2][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4], board[3][5], board[3][6], board[3][7], board[3][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4], board[4][5], board[4][6], board[4][7], board[4][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[5][0], board[5][1], board[5][2], board[5][3], board[5][4], board[5][5], board[5][6], board[5][7], board[5][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[6][0], board[6][1], board[6][2], board[6][3], board[6][4], board[6][5], board[6][6], board[6][7], board[6][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[7][0], board[7][1], board[7][2], board[7][3], board[7][4], board[7][5], board[7][6], board[7][7], board[7][8]);
 printf("\t\t\t--------------\n");
 printf("\t\t\t  %c | %c  | %c  \n\n", board[8][0], board[8][1], board[8][2], board[8][3], board[8][4], board[8][5], board[8][6], board[8][7], board[8][8]);
 printf("\t\t\t--------------\n");
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
