#pragma once

#include iostream>
#include <cmath>
#include <string>

enum Piece { KING, GOLD, SILVER, BISHOP, KNIGHT, LANCE, PAWN, EMPTY };
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
  
}














