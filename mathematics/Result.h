#include <iostream>
#include <vector>
#include "Token.h"

using std::vector;

class Result
{
private:
  vector<Token> result
public:
  void addToken(const Token& t);

  //add some methods (probably iterators or just get for vector) 
  //to access result.
};