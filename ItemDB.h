#include "ItemClass.h"
#include <fstream>

using namespace std;
//class declarations for the database of Birds
class BirdDB{
private:
      enum {MAX_BIRDS = 500};
      birdType birds[MAX_BIRDS];
      int numBirds;
public:
      BirdDB();
      int getnum();
      void readBirds();
      void print(ostream &out);
      void save();
      void remove(int index);
      void add();
};
