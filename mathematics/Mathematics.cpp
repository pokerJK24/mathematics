#include <iostream>
#include <string>
#include <vector>

#include "IOHandler.h";

using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::getline;
using std::endl;


int main()
{
  IOHandler handler;

  string currentCommand;
  int currentStep;

  while (true)
  {
    currentStep = handler.getCurrentStep();
    cout << "In" << "[" << currentStep << "] >";
   
    getline(cin, currentCommand);
    
    if (!currentCommand.compare("exit"))
      break;
    else
    {
      string response = handler.command(currentCommand);
      
      cout << "Out" << "[" << currentStep << "] >";
      cout << response << endl;
    }
  }
  
  return 0;
}