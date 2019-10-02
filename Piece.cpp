#include <iostream>
#include <cstring>

using namespace std;

int Piece() {
  private String type = "Empty";
  private String symbol = "E";
  protected int owner;
  protected boolean promoted = false;
  
  public Piece(int owner) {
    this.owner = owner;
  }
  
  public String getSymbol() {
    return symbol;
  }
  
  public int getOwner() {
    return owner();
  }
  
  public boolean canMove(Square from, Square to, board b) {
    return false;
  }
  
  public void setOwner(int owner) {
    this.owner = owner;
  }
  
  public void setSymbol(String newSymbol) {
    this.symbol = newSymbol;
  }
  
  public void setType(String newType) {
    this.type = newType;
  }
  
  public void promote() {
    promoted = true;
    if (!symbol.substring(symbol.length() -1 ).equals("!")) {
      symbol = symbol += "!";
    }
  }
  
  public void demote() {
    promoted = false;
    Symbol = symbol.split("!")[0];
  }
}
