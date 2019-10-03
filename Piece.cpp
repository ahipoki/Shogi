#include <iostream>
#include <cstring>

using namespace std;

int Piece() {
  char type = "Empty";
  //Tracks if a square is empty
  char symbol = "E";
  int owner;
  bool promoted = false;
  
  void Piece(int owner) {
    this.owner = owner;
  }
  
  void char getSymbol() {
    return symbol;
  }
  
  int getOwner() {
    return owner();
  }
  
  bool canMove(Square from, Square to, board b) {
    return false;
  }
  
  void setOwner(int owner) {
    this.owner = owner;
  }
  
  void setSymbol(char newSymbol) {
    this.symbol = newSymbol;
  }
  
  void setType(char newType) {
    this.type = newType;
  }
  
  void promote() {
    promoted = true;
    if (!symbol.substring(symbol.length() -1 ).equals("!")) {
      symbol += "!";
    }
  }
  
  void demote() {
    promoted = false;
    Symbol = symbol.split("!")[0];
  }
}
