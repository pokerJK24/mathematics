#include "Token.h"

template <typename T> 
class Polynom: public Token
{
  //implement templated class Polynom.
  //you can use following operations: T + T, T - T, T * T, T / T, T ^ int

  //you have to overload following operators: 
          //Polynom + Polynom, Polynom * Polynom, Polynom - Polynom, Polynom ^ int

  //also you have to implement Polynom(string), Polynom(), 
  //and of course Polynom(const Polynom&). The last one is IMPORTANT.

  


  
  //important remark 1: there's two different ways of implementing Polynom.
  
  
  //FIRST
  //store coeficients of Polynom using map<int, T>
    //the first parameter of map is the degree, and the second is the coefficient.

  //for example, if you have 3x^5 - 10x^2 + 7x - 30, your map is something like:
  //{ 5 -> 3; 2 -> -10; 1 -> 7; 0 - > -30 }

  //storing your coefficients in this way (NOT using array/list/vector) can save memory in the best way.
  //(because if you store your coefficients in the array, take a look at the next Polynom: x^10000 + 1
  
  //SECOND
  //storing coefficients of Polynom, using vector<T>
  //more convinient way, but if the degree of polynom is high, you can eat too much momory
  
  //(using map you can avoid it)


  //important remark 2: don't worry about ": public Token", it's for my needs (for parsing input string)
};