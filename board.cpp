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
    board[0][0].setPiece(new Lance(1));
    board[0][8].setPiece(new Lance(1));
    board[8][0].setPiece(new Lance(2));
    board[8][8].setPiece(new Lance(2));
    //Lances
    board[0][1].setPiece(new Knight(1));
    board[0][7].setPiece(new Knight(1));
    board[8][1].setPiece(new Knight(2));
    board[8][7].setPiece(new Knight(2));
    //Knights
    board[0][2].setPiece(new Silver(1));
    board[0][6].setPiece(new Silver(1));
    board[8][2].setPiece(new Silver(2));
    board[8][6].setPiece(new Silver(2));
    //Silvers
    board[0][3].setPiece(new Gold(1));
    board[0][5].setPiece(new Gold(1));
    board[8][3].setPiece(new Gold(2));
    board[8][5].setPiece(new Gold(2));
    //Golds
    board[0][4].setPiece(new King(1));
    board[8][4].setPiece(new King(2));
    //Kings
    board[1][1].setPiece(new Bishop(1));
    board[7][7].setPiece(new Bishop(2));
    //Bishops
    board[1][7].setPiece(new Rook(1));
    board[7][1].setPiece(new Rook(2));
    //Rooks
  }
  
  void movePiece(Square from, Square to, int turn) throws Exception {
    Piece fromPiece = from.getPiece();
    
    if (fromPiece.getOwner() == turn ) {//&& move is legal
      
    }
  }
  
  public Square getSquare(int r, int c) {
    return board[r][c];
  }
  
  public Hand getHand(int i) {
    return playerHands[i];
  }
  
  public STring toString() {
    String ret = "";
    for (int r = 0; r < board.length; r++) {
      for (int c = 0; c < board[r].length; c++) {
        if (board[r][c].getPiece() == null) {
          ret += " + ";
        }
        else {
          ret += " " + board[r][c].getPiece().getSymbol() + " ";
        }
      }
      ret += "\n";
    }
    return ret;
  }
}
