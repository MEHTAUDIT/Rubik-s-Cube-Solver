
#include "CornerPatternDatabase.h"
#include "RubiksCube3dArray.cpp"

using namespace std;

class CornerDBMaker 
{
private:
    string fileName;
    CornerPatternDatabase cornerDB;

    string MOVE[18]={
        "L",
        "LPRIME",
        "L2",
        "R",
        "RPRIME",
        "R2",
        "U",
        "UPRIME",
        "U2",
        "D",
        "DPRIME",
        "D2",
        "F",
        "FPRIME",
        "F2",
        "B",
        "BPRIME",
        "B2"
    };
    

public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName, uint8_t init_val);

    bool bfsAndStore();
};
