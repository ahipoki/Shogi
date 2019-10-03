#pragma once

#include iostream>
#include <cmath>
#include <string>

enum Piece { KING, GOLD, SILVER, BISHOP, KNIGHT, LANCE, ROOK, PAWN, EMPTY };
enum Color { WHITE, BLACK, NONE };

class Square()
{
  Piece piece;
  Color color;
  int x, y;
public:
        void setSpace(Square*);
        //Moves a piece to the new square
        void setEmpty();
        //Sets the previous square to empty
        void setPieceAndColor(Piece, Color);
        //Set a piece and the color
        Piece getPiece();
        //Get a piece on a given square
        Color getColor();
        //Get the color of a piece on a given square
        void setX(int ex)
        {//Set the x value
          x = ex;
        }
        void setY(int why)
        {//Set the Y value
          y = why;
        }
        int getX()
        {//get the x value
          return x;
        }
        int getY()
        {//get the y value
          return y;
        }
        Square();
};

class Board()
{
  Square square[9][9];
  Color turn = BLACK;
  bool moveKing(Square* thisKing, Square* thatSpace);
  bool moveGold(Square* thisGold, Square* thatSpace);
  bool moveSilver(Square* thisSilver, Square* thatSpace);
  bool moveBishop(Square* thisBishop, Square* thatSpace);
  bool moveKnight(Square* thisKnight, Square* thatSpace);
  bool moveRook(Square* thisRook, Square* thatSpace);
  bool moveLance(Square* thisLance, Square* thatSpace);
  bool movePawn(Square* thisPawn, Square* thatSpace);
  bool makeMove(int x1, int y1, int x2, int y2);
  void printBoard();
public:
        Square* getSquare(int x, int y)
        {
          return &square[x][y];
        }
        void setSquare(Square * s, int x, int y)
        {
          square[x][y]=*s;
        }
        bool doMove();
  
        void setBoard();
        bool playGame();
};
