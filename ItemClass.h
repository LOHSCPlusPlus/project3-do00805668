#include <fstream>
 using namespace std;
//class declarations for one bird
class birdType{
  private:
      enum {MAX_CHAR_LEN=100};
      char name[MAX_CHAR_LEN];
      char sname[MAX_CHAR_LEN];
      char conStatus[MAX_CHAR_LEN];
      char color[MAX_CHAR_LEN];
      char diet[MAX_CHAR_LEN];
  public:
      birdType();
      void readbirdType(ifstream &inFile);
      void printbirdType(ostream &out);
      void readFromUser();
      
      
};  