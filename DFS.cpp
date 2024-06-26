#include<bits/stdc++.h>
#include "RubiksCube.h"

template<typename T, typename H>
class DFSSolver {
private:
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

    vector<string> moves;
    int max_search_depth;

    bool dfs(int dep) 
    {
        if (rubiksCube.isSolved()) return true;
        if (dep > max_search_depth) return false;

        for (int i = 0; i < 18; i++) 
        {
            rubiksCube.move(MOVE[i]);
            moves.push_back(MOVE[i]);
            if (dfs(dep + 1)) return true;
            moves.pop_back();
            rubiksCube.invert(MOVE[i]);
        }

        return false;
    }

public:
    T rubiksCube;
    T temp;

    DFSSolver(T _rubiksCube, int _max_search_depth = 8) 
    {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
        temp=_rubiksCube;
    }

    vector<string> solve() 
    {
        dfs(1);

        for(auto& vv:moves)
        {
            temp.move(vv);
            temp.print();
        }

        return moves;
    }

};
