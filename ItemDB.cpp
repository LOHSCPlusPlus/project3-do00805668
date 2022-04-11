#include <iostream>
#include <fstream>
#include "ItemDB.h"

using namespace std; 

//function to return numBirds
int BirdDB::getnum(){
  return numBirds;
}

//function to read all birds
void BirdDB::readBirds(){
    ifstream File("birds.txt");
    numBirds = 0;
    while(File.peek() != EOF && numBirds < MAX_BIRDS) {
    birds[numBirds].readbirdType(File);
    numBirds++;
    }
}

//function to print all birds
void BirdDB::print(ostream &out){
    for (int i = 0; i < numBirds; i++){
      birds[i].printbirdType(out);
    }
  cout << numBirds << endl;
}

//function to save all birds
void BirdDB::save(){
  ofstream outFile("birds.txt");
  for(int i = 0; i < numBirds; i++){
    birds[i].printbirdType(outFile);
  }
}

//function to remove a bird
void BirdDB::remove(int index){
   for(int i = index; i <= numBirds; i++)birds[i] = birds[i+1];
   numBirds--;
   cout << "Removed!" << endl;
}

//function to add a bird
void BirdDB::add(){
  birds[numBirds].readFromUser();
  numBirds++;
}

//default constructor
BirdDB::BirdDB(){
  numBirds = 0;
}