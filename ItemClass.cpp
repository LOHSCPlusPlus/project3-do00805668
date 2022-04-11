#include <iostream>
#include <fstream>
#include "ItemClass.h"

using namespace std;

//default constructor
birdType::birdType()
{
  for(int i = 0; i < MAX_CHAR_LEN; i++)
    {
      name[i] = ' ';
      sname[i] = ' ';
      conStatus[i] = ' ';
      color[i] = ' ';
      diet[i] = ' ';
    }
}

//function to read a single bird
 void birdType::readbirdType(ifstream &inFile){
    inFile.get(name, birdType::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile.get(sname, birdType::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile.get(conStatus, birdType::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile.get(color, birdType::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile.get(diet, birdType::MAX_CHAR_LEN);
    inFile.ignore(100,'\n');
 }

//function to print
 void birdType::printbirdType(ostream &out){
   out << name << "; " << sname << "; " << conStatus << "; " << color << "; " << diet << endl;
 }

//function to read a bird from the user
 void birdType::readFromUser(){
       if (cin.peek() == '\n') {
        cin.ignore(100, '\n');
    }
    cout << "Enter birds name: ";
    cin.get(name, birdType::MAX_CHAR_LEN);
    cin.ignore(100,'\n');
    cout << "Enter birds scientific name: ";
    cin.get(sname, birdType::MAX_CHAR_LEN);
    cin.ignore(100,'\n');
    cout << "Enter Conservation Status: ";
    cin.get(conStatus, birdType::MAX_CHAR_LEN);
    cin.ignore(100,'\n');
    cout << "Enter color: ";
    cin.get(color, birdType::MAX_CHAR_LEN);
    cin.ignore(100,'\n');
    cout << "Enter diet: ";
    cin.get(diet, birdType::MAX_CHAR_LEN);
 }