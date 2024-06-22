#include "RubiksCube.h"

char RubiksCube::getColorLetter(string color) 
{
    if(color=="BLUE")
    {
        return 'B';
    }
    else if(color=="GREEN")
    {
        return 'G';
    }
    else if(color=="RED")
    {
        return 'R';
    }
    else if(color=="YELLOW")
    {
        return 'Y';
    }
    else if(color=="WHITE")
    {
        return 'W';
    }
    else if(color=="ORANGE")
    {
        return 'O';
    }
    else
    {
        return ' ';
    }
}

string RubiksCube::getMove(string ind) 
{
    if(ind=="L")
    {
        return "L";
    }
    else if(ind=="LPRIME")
    {
        return "L'";
    }
    else if(ind=="L2")
    {
        return "L2";
    }
    else if(ind=="R")
    {
        return "R";
    }
    else if(ind=="RPRIME")
    {
        return "R'";
    }
    else if(ind=="R2")
    {
        return "R2";
    }
    else if(ind=="U")
    {
        return "U";
    }
    else if(ind=="UPRIME")
    {
        return "U'";
    }
    else if(ind=="U2")
    {
        return "U2";
    }
    else if(ind=="D")
    {
        return "D";
    }
    else if(ind=="DPRIME")
    {
        return "D'";
    }
    else if(ind=="D2")
    {
        return "D2";
    }
    else if(ind=="F")
    {
        return "F";
    }
    else if(ind=="FPRIME")
    {
        return "F'";
    }
    else if(ind=="F2")
    {
        return "F2";
    }
    else if(ind=="B")
    {
        return "B";
    }
    else if(ind=="BPRIME")
    {
        return "B'";
    }
    else if(ind=="B2")
    {
        return "B2";
    }
    else
    {
        return " ";
    }
}

RubiksCube &RubiksCube::move(string ind) 
{
    if(ind=="L")
    {
        return this->l();
    }
    else if(ind=="LPRIME")
    {
        return this->lPrime();
    }
    else if(ind=="L2")
    {
        return this->l2();
    }
    else if(ind=="R")
    {
        return this->r();
    }
    else if(ind=="RPRIME")
    {
        return this->rPrime();
    }
    else if(ind=="R2")
    {
        return this->r2();
    }
    else if(ind=="U")
    {
        return this->u();
    }
    else if(ind=="UPRIME")
    {
        return this->uPrime();
    }
    else if(ind=="U2")
    {
        return this->u2();
    }
    else if(ind=="D")
    {
        return this->d();
    }
    else if(ind=="DPRIME")
    {
        return this->dPrime();
    }
    else if(ind=="D2")
    {
        return this->d2();
    }
    else if(ind=="F")
    {
        return this->f();
    }
    else if(ind=="FPRIME")
    {
        return this->fPrime();
    }
    else if(ind=="F2")
    {
        return this->f2();
    }
    else if(ind=="B")
    {
        return this->b();
    }
    else if(ind=="BPRIME")
    {
        return this->bPrime();
    }
    else if(ind=="B2")
    {
        return this->b2();
    }
    
}

RubiksCube &RubiksCube::invert(string ind) 
{
    if(ind=="L")
    {
        return this->lPrime();
    }
    else if(ind=="LPRIME")
    {
        return this->l();
    }
    else if(ind=="L2")
    {
        return this->l2();
    }
    else if(ind=="R")
    {
        return this->rPrime();
    }
    else if(ind=="RPRIME")
    {
        return this->r();
    }
    else if(ind=="R2")
    {
        return this->r2();
    }
    else if(ind=="U")
    {
        return this->uPrime();
    }
    else if(ind=="UPRIME")
    {
        return this->u();
    }
    else if(ind=="U2")
    {
        return this->u2();
    }
    else if(ind=="D")
    {
        return this->dPrime();
    }
    else if(ind=="DPRIME")
    {
        return this->d();
    }
    else if(ind=="D2")
    {
        return this->d2();
    }
    else if(ind=="F")
    {
        return this->fPrime();
    }
    else if(ind=="FPRIME")
    {
        return this->f();
    }
    else if(ind=="F2")
    {
        return this->f2();
    }
    else if(ind=="B")
    {
        return this->bPrime();
    }
    else if(ind=="BPRIME")
    {
        return this->b();
    }
    else if(ind=="B2")
    {
        return this->b2();
    }
}

void RubiksCube::print() const
{
    cout<<"Rubik's Cube:\n\n";

    for (int row =0;row<3;row++) 
    {
        for (unsigned i=0;i<7;i++) cout << " ";

        for (int col=0;col<3;col++) 
        {
            cout << getColorLetter(getColor("UP", row, col)) << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int row = 0; row <3; row++) 
    {
        for (int col = 0; col<3; col++) 
        {
            cout << getColorLetter(getColor("LEFT", row, col)) << " ";
        }

        cout << " ";

        for (int col = 0;col<3; col++) 
        {
            cout << getColorLetter(getColor("FRONT", row, col)) << " ";
        }

        cout << " ";

        for (int col = 0; col <3; col++) 
        {
            cout << getColorLetter(getColor("RIGHT", row, col)) << " ";
        }

        cout << " ";

        for (int col = 0; col <3; col++) 
        {
            cout << getColorLetter(getColor("BACK", row, col)) << " ";
        }

        cout << "\n";
    }

    cout << "\n";

    for (int row = 0; row <3; row++) 
    {
        for (unsigned i = 0; i < 7; i++) cout << " ";

        for (int col = 0; col <3; col++) 
        {
            cout << getColorLetter(getColor("DOWN", row, col)) << " ";
        }

        cout << "\n";
    }

    cout << "\n";
}

vector<string> RubiksCube::randomShuffleCube(unsigned int times) 
{
    vector<string> moves_performed;

    for (unsigned int i = 0; i < times; i++) 
    {
        int selectMove = (rand() % 18);
        moves_performed.push_back(MOVE[selectMove]);
        this->move(MOVE[selectMove]);
    }

    return moves_performed;
}

string RubiksCube::getCornerColorString(uint8_t ind) const 
{
    string str = "";

    switch (ind) {
//        UFR
        case 0:
            str += getColorLetter(getColor("UP",2, 2));
            str += getColorLetter(getColor("FRONT", 0, 2));
            str += getColorLetter(getColor("RIGHT", 0, 0));
            break;

//            UFL
        case 1:
            str += getColorLetter(getColor("UP",2, 0));
            str += getColorLetter(getColor("FRONT", 0, 0));
            str += getColorLetter(getColor("LEFT", 0, 2));
            break;

//            UBL
        case 2:
            str += getColorLetter(getColor("UP",0, 0));
            str += getColorLetter(getColor("BACK", 0, 2));
            str += getColorLetter(getColor("LEFT", 0, 0));
            break;

//            UBR
        case 3:
            str += getColorLetter(getColor("UP",0, 2));
            str += getColorLetter(getColor("BACK", 0, 0));
            str += getColorLetter(getColor("RIGHT", 0, 2));
            break;

//            DFR
        case 4:
            str += getColorLetter(getColor("DOWN", 0, 2));
            str += getColorLetter(getColor("FRONT", 2, 2));
            str += getColorLetter(getColor("RIGHT", 2, 0));
            break;

//            DFL
        case 5:
            str += getColorLetter(getColor("DOWN", 0, 0));
            str += getColorLetter(getColor("FRONT", 2, 0));
            str += getColorLetter(getColor("LEFT", 2, 2));
            break;

//            DBR
        case 6:
            str += getColorLetter(getColor("DOWN", 2, 2));
            str += getColorLetter(getColor("BACK", 2, 0));
            str += getColorLetter(getColor("RIGHT", 2, 2));
            break;

//            DBL
        case 7:
            str += getColorLetter(getColor("DOWN", 2, 0));
            str += getColorLetter(getColor("BACK", 2, 2));
            str += getColorLetter(getColor("LEFT", 2, 0));
            break;
    }
    return str;
}

uint8_t RubiksCube::getCornerIndex(uint8_t ind) const 
{
    string corner = getCornerColorString(ind);

    uint8_t ret = 0;
    
    for (auto c: corner) 
    {
        if (c != 'W' && c != 'Y') continue;

        if (c == 'Y') 
        {
            ret |= (1 << 2);
        }
    }

    for (auto c: corner) 
    {
        if (c != 'R' && c != 'O') continue;

        if (c == 'O') 
        {
            ret |= (1 << 1);
        }
    }

    for (auto c: corner) 
    {
        if (c != 'B' && c != 'G') continue;

        if (c == 'G') 
        {
            ret |= (1 << 0);
        }
    }

    return ret;
}

uint8_t RubiksCube::getCornerOrientation(uint8_t ind) const 
{
    string corner = getCornerColorString(ind);

    string actual_str = "";

    for (auto c: corner) 
    {
        if (c != 'W' && c != 'Y') continue;
        actual_str.push_back(c);
    }

    if (corner[1] == actual_str[0]) 
    {
        return 1;
    }

    else if (corner[2] == actual_str[0]) 
    {
        return 2;
    }

    else return 0;
}
