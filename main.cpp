#include <bits/stdc++.h>
#include "DFS.cpp"
#include "RubiksCube.cpp"
#include "RubiksCube.h"
#include "RubiksCube3dArray.cpp"
#include "BFS.cpp"
#include "IDDFS.cpp"
#include "IDAstarSolver.cpp"
// #include "RubiksCube1dArray.cpp"

using namespace std;


int main()
{
    
    RubiksCube3dArray cube;
    // RubiksCube1dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    //DFS Solver
    // DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    // DFSSolver<RubiksCube1dArray, Hash3d> dfsSolver(cube, 8);
    // vector<string> solve_moves = dfsSolver.solve();

    //BFS Solver
    // BFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube);
    // vector<string> solve_moves = bfsSolver.solve();

    //IDDFS Solver
    // IDDFSSolver<RubiksCube3dArray,Hash3d>IDDFSSolver(cube);
    // vector<string> solve_moves = IDDFSSolver.solve();

    //IDAstar Solver
    IDAstarSolver<RubiksCube3dArray,Hash3d>IDAstarSolver(cube,"");
    vector<string> solve_moves = IDAstarSolver.solve();


    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";

}

