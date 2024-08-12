#include<bits/stdc++.h>
#include "RubiksCube.h"
#include "DFS.h"

template<typename T, typename H>
class IDDFSSolver 
{

private:
    int max_search_depth;
    vector<string> moves;

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
    T rubiksCube,temp;

    IDDFSSolver(T _rubiksCube, int _max_search_depth = 7) 
    {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
        temp=_rubiksCube;
    }

    vector<string> solve() 
    {
        for (int i = 1; i <= max_search_depth; i++) 
        {
            DFSSolver<T, H> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();

            if (dfsSolver.rubiksCube.isSolved()) 
            {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }
        }

        for(auto& vv:moves)
        {
            temp.move(vv);
            temp.print();
        }

        return moves;
    }


};
