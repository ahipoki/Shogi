#include "shogi.h"

Square::Square()
{
 piece = EMPTY;
 color = NONE;
}

void Square::setSpace(Square* space)
{
 color = space->getColor();
 piece = space->getPiece();
}

void Square::setEmpty()
{
 color = NONE;
 piece = EMPTY;
}

Piece square::getPiece()
{
 return piece;
}

Color square::getColor()
{
 return color;
}

void Square::setPieceAndColor(Piece p, Color c)
{
 piece = p;
 color = c;
}

void Board::printBoard()
{
 using namespace std;
 cout << "  y: 0  1  2  3  4  5  6  7 " << endl << "x:" << endl;
 for (int i = 0; i < 8; i++)
 {
  cout << " " << i << "   ";
  for (int j = 0; j < 8; j++)
  {
   Piece p = square[i][j].getPiece();
   Color c = square[i][j].getColor();
   
   switch (p)
   {
    case KING: (c == BLACK) ? cout << " K " : cout << " k ";
      break;
    case GOLD: (c == BLACK) ? cout << " G " : cout << " g ";
      break;
    case SILVER: (c == BLACK) ? cout << " S " : cout << " s ";
      break;
    case BISHOP: (c == BLACK) ? cout << " B " : cout << " b ";
      break;
    case KNIGHT: (c == BLACK) ? cout << " N " : cout << " n ";
      break;
    case ROOK: (c == BLACK) ? cout << " R " : cout << " r ";
      break;
    case LANCE: (c == BLACK) ? cout << " L " : cout << " l ";
      break;
    case PAWN: (c == BLACK) ? cout << " P " : cout << " p ";
      break;
    case EMPTY: cout << " " << "\21" << " ";
      break;
    default: cout << "XXX";
      break;
   }
  }
  cout << endl;
 }
}

bool Board::doMove()
{
 using namespace std;
 string move;
 int x1, x2, y1, y2;
 bool stop = false;
 while (!stop)
 {
  if (turn == BLACK)
  {
   cout << "Black's Turn" << endl;
  }
  else if (turn == WHITE)
  {
   cout << "White's Turn" << endl;
  }
  cout << "Type in your move as a single four character string. Use x-coordinates first in each pair." << endl;
  cin >> move;
  x1 = move[0] - 48;
  y1 = move[1] - 48;
  x2 = move[2] - 48;
  y2 = move[3] - 48;
  if (getSquare(x1, y1)->getColor() == turn)
  {
   if (makeMove(x1, y1, x2, y2) == false)
   {
    cout << "Invalid move. Try again." << endl;
   }
   else
   {
    stop = true;
   }
  }
  else
  {
   cout << "That's not your piece. Try Again." << endl;
  }
 }
 if (getSquare(x2, y2)->getPiece() == KING)
 {
  if (getSquare(x1, y1)->getColor() == BLACK)
  {
   cout << "Black Wins!" << endl;
   return false;
  }
  else
  {
   cout << "White Wins!" << end;
   return false;
  }
 }
 if (turn == BLACK)
 {
  turn = WHITE;
 }
 else
 {
  turn = BLACK;
 }
 return true;
}

void Board::setBoard()
{
 Square[0][0].setPieceAndColor(LANCE, BLACK);
 Square[1][0].setPieceAndColor(KNIGHT, BLACK);
 Square[2][0].setPieceAndColor(SILVER, BLACK);
 Square[3][0].setPieceAndColor(GOLD, BLACK);
 Square[4][0].setPieceAndColor(KING, BLACK);
 Square[5][0].setPieceAndColor(GOLD, BLACK);
 Square[6][0].setPieceAndColor(SILVER, BLACK);
 Square[7][0].setPieceAndColor(KNIGHT, BLACK);
 Square[8][0].setPieceAndColor(LANCE, BLACK);
 
 Square[0][9].setPieceAndColor(LANCE, WHITE);
 Square[1][9].setPieceAndColor(KNIGHT, WHITE);
 Square[2][9].setPieceAndColor(SILVER, WHITE);
 Square[3][9].setPieceAndColor(GOLD, WHITE);
 Square[4][9].setPieceAndColor(KING, WHITE);
 Square[5][9].setPieceAndColor(GOLD, WHITE);
 Square[6][9].setPieceAndColor(SILVER, WHITE);
 Square[7][9].setPieceAndColor(KNIGHT, WHITE);
 Square[8][9].setPieceAndColor(LANCE, WHITE);
 
 for (int i = 0; i < 9; i++)
 {
  square[i][2].setPieceAndColor(PAWN, BLACK);
  square[i][6]
 }
}
void shogi() {
 int player1Wins = 0;
 //Keeps track of player 1's wins
 int player2Wins = 0;
 //Keeps track of player 2's wins
 bool whiteMove = false;
 //Doesn't start on white's move
 bool blackMove = true;
 //Black moves first
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
