#include <bits/stdc++.h>
#include "DFS.cpp"
#include "RubiksCube.cpp"
#include "RubiksCube.h"
#include "RubiksCube3dArray.cpp"
#include "BFS.cpp"
#include "IDDFS.cpp"

using namespace std;


int main()
{
    
    RubiksCube3dArray cube;
    cube.init();

    vector<string> shuffle_moves = cube.randomShuffleCube(5);
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    //DFS Solver
    // DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    // vector<string> solve_moves = dfsSolver.solve();

    //BFS Solver
    // BFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube);
    // vector<string> solve_moves = bfsSolver.solve();

    //IDDFS Solver
    IDDFSSolver<RubiksCube3dArray,Hash3d>IDDFSSolver(cube);
    vector<string> solve_moves = IDDFSSolver.solve();

    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";

}

