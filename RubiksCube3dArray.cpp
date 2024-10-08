#include "RubiksCube.h"

class RubiksCube3dArray : public RubiksCube 
{
private:

    void rotateFace(int ind) 
    {
        char temp_arr[3][3] = {};

        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                temp_arr[i][j] = cube[ind][i][j];
            }
        }

        for (int i = 0; i < 3; i++) cube[ind][0][i] = temp_arr[2 - i][0];
        for (int i = 0; i < 3; i++) cube[ind][i][2] = temp_arr[0][i];
        for (int i = 0; i < 3; i++) cube[ind][2][2 - i] = temp_arr[i][2];
        for (int i = 0; i < 3; i++) cube[ind][2 - i][0] = temp_arr[2][2 - i];
    }

public:
    char cube[6][3][3];
    virtual ~RubiksCube3dArray() = default;

    void init()
    {
        for (int i = 0; i < 6; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++)
                {
                    cube[i][j][k] = getColorLetter(COLOR[i]);
                }
            }
        }
        
    }

    string getColor(string face, unsigned row, unsigned col) const 
    {
        int index;

        if (face == "UP") index = 0;
        else if (face == "LEFT") index = 1;
        else if (face == "FRONT") index = 2;
        else if (face == "RIGHT") index = 3;
        else if (face == "BACK") index = 4;
        else index = 5;

        char color = cube[index][row][col];

        if(color == 'W') return "WHITE";
        else if(color == 'G') return "GREEN";
        else if(color == 'R') return "RED";
        else if(color == 'B') return "BLUE";
        else if(color == 'O') return "ORANGE";
        else return "YELLOW";

    }

    bool isSolved() const 
    {
        for (int i = 0; i < 6; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++) 
                {
                    if (this->cube[i][j][k] == getColorLetter(COLOR[i])) continue;
                    return false;
                }
            }
        }
        return true;
    }

    RubiksCube &u() 
    {
        this->rotateFace(0);

        char temp_arr[3];

        for (int i = 0; i < 3; i++) temp_arr[i] = cube[4][0][2 - i];
        for (int i = 0; i < 3; i++) cube[4][0][2 - i] = cube[1][0][2 - i];
        for (int i = 0; i < 3; i++) cube[1][0][2 - i] = cube[2][0][2 - i];
        for (int i = 0; i < 3; i++) cube[2][0][2 - i] = cube[3][0][2 - i];
        for (int i = 0; i < 3; i++) cube[3][0][2 - i] = temp_arr[i];

        return *this;
    }

    RubiksCube &uPrime() 
    {
        this->u();
        this->u();
        this->u();

        return *this;
    }

    RubiksCube &u2() 
    {
        this->u();
        this->u();

        return *this;
    }

    RubiksCube &l() override 
    {
        this->rotateFace(1);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][i][0];
        for (int i = 0; i < 3; i++) cube[0][i][0] = cube[4][2 - i][2];
        for (int i = 0; i < 3; i++) cube[4][2 - i][2] = cube[5][i][0];
        for (int i = 0; i < 3; i++) cube[5][i][0] = cube[2][i][0];
        for (int i = 0; i < 3; i++) cube[2][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &lPrime() 
    {
        this->l();
        this->l();
        this->l();

        return *this;
    }

    RubiksCube &l2() 
    {
        this->l();
        this->l();

        return *this;
    }

    RubiksCube &f() 
    {
        this->rotateFace(2);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][2][i];
        for (int i = 0; i < 3; i++) cube[0][2][i] = cube[1][2 - i][2];
        for (int i = 0; i < 3; i++) cube[1][2 - i][2] = cube[5][0][2 - i];
        for (int i = 0; i < 3; i++) cube[5][0][2 - i] = cube[3][i][0];
        for (int i = 0; i < 3; i++) cube[3][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &fPrime() 
    {
        this->f();
        this->f();
        this->f();

        return *this;
    }

    RubiksCube &f2() 
    {
        this->f();
        this->f();

        return *this;
    }

    RubiksCube &r() 
    {
        this->rotateFace(3);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][2 - i][2];
        for (int i = 0; i < 3; i++) cube[0][2 - i][2] = cube[2][2 - i][2];
        for (int i = 0; i < 3; i++) cube[2][2 - i][2] = cube[5][2 - i][2];
        for (int i = 0; i < 3; i++) cube[5][2 - i][2] = cube[4][i][0];
        for (int i = 0; i < 3; i++) cube[4][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &rPrime() 
    {
        this->r();
        this->r();
        this->r();

        return *this;
    }

    RubiksCube &r2() 
    {
        this->r();
        this->r();

        return *this;
    }

    RubiksCube &b() 
    {
        this->rotateFace(4);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][0][2 - i];
        for (int i = 0; i < 3; i++) cube[0][0][2 - i] = cube[3][2 - i][2];
        for (int i = 0; i < 3; i++) cube[3][2 - i][2] = cube[5][2][i];
        for (int i = 0; i < 3; i++) cube[5][2][i] = cube[1][i][0];
        for (int i = 0; i < 3; i++) cube[1][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &bPrime() 
    {
        this->b();
        this->b();
        this->b();

        return *this;
    }

    RubiksCube &b2() 
    {
        this->b();
        this->b();

        return *this;
    }

    RubiksCube &d() 
    {
        this->rotateFace(5);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[2][2][i];
        for (int i = 0; i < 3; i++) cube[2][2][i] = cube[1][2][i];
        for (int i = 0; i < 3; i++) cube[1][2][i] = cube[4][2][i];
        for (int i = 0; i < 3; i++) cube[4][2][i] = cube[3][2][i];
        for (int i = 0; i < 3; i++) cube[3][2][i] = temp_arr[i];

        return *this;
    }

    RubiksCube &dPrime() 
    {
        this->d();
        this->d();
        this->d();

        return *this;
    }

    RubiksCube &d2() 
    {
        this->d();
        this->d();

        return *this;
    }

    bool operator==(const RubiksCube3dArray &r1) const 
    {
        for (int i = 0; i < 6; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++) 
                {
                    if (r1.cube[i][j][k] != cube[i][j][k]) return false;
                }
            }
        }
        return true;
    }

    RubiksCube3dArray &operator=(const RubiksCube3dArray &r1) 
    {
        for (int i = 0; i < 6; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++) 
                {
                    cube[i][j][k] = r1.cube[i][j][k];
                }
            }
        }
        return *this;
    }
};

struct Hash3d 
{
    size_t operator()(const RubiksCube3dArray &r1) const 
    {
        string str = "";
        for (int i = 0; i < 6; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                for (int k = 0; k < 3; k++) 
                {
                    str += r1.cube[i][j][k];
                }
            }
        }
        return hash<string>()(str);
    }

};
