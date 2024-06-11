#ifndef RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
#define RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H

#include "bits/stdc++.h"

using namespace std;

class RubiksCube 
{
public:

    string FACE[6]={
        "UP",
        "LEFT",
        "FRONT",
        "RIGHT",
        "BACK",
        "DOWN"
    };

    string COLOR[6]={
        "WHITE",
        "GREEN",
        "RED",
        "BLUE",
        "ORANGE",
        "YELLOW"
    };

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

    virtual string getColor(string face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(string color);

    virtual bool isSolved() const = 0;

    static string getMove(string ind);

    void print() const;

    vector<string> randomShuffleCube(unsigned int times);

    RubiksCube &move(string ind);

    RubiksCube &invert(string ind);

    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};


#endif
