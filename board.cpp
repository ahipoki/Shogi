#include <iostream>
#include <cstring>

using namespace std;

int board()
{
  private Square[][] board = new Square[9][9];
  
  private Hand[] playerHands = { null, new Hand(1), new Hand(2) };
  
  public Board() {
    for (int r = 0; r < board.length; r++) {
      for (int c = 0; c < board[r].length; c++) {
        board[r][c] = new Square(r, c);
      }
    }
    for (int i = 0; i < 9; i++) {
      board[2][i].setPiece(new Pawn(1));
      board[6][i].setPiece(new Pawn(2));
    }
    board[
  }
}
