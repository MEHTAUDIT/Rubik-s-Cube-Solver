#include <bits/stdc++.h>
#include "DFS.h"
#include "BFS.h"
#include "IDDFS.h"

#include "RubiksCube.cpp"
#include "RubiksCube.h"
#include "RubiksCube3dArray.cpp"
#include "IDAstarSolver.cpp"
#include "RubiksCube1dArray.cpp"
#include "RubikCubeBitboard.cpp"

using namespace std;


int main()
{
    
    srand(time(0));

    //-------------------3D DFS Solver---------------------

    RubiksCube3dArray cube;
    cube.init();

    vector<string> shuffle_moves = cube.randomShuffleCube(4);
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    vector<string> solve_moves = dfsSolver.solve();

    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    //----------------3D BFS Solver--------------------

    // RubiksCube3dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube, 8);
    // vector<string> solve_moves = bfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";


    //-----------------3D IDDFS Solver-----------------------

    // RubiksCube3dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCube3dArray, Hash3d> iddfsSolver(cube, 8);
    // vector<string> solve_moves = iddfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    //------------------1D DFS Solver------------------------

    // RubiksCube1dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCube1dArray, Hash1d> dfsSolver(cube, 8);
    // vector<string> solve_moves = dfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    //------------------1D BFS Solve----------------------------

    // RubiksCube1dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCube1dArray, Hash1d> bfsSolver(cube, 8);
    // vector<string> solve_moves = bfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";


    //--------------------1D IDDFS Solver----------------------

    // RubiksCube1dArray cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCube1dArray, Hash1d> iddfsSolver(cube, 8);
    // vector<string> solve_moves = iddfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";



    //-----------------Bit Board DFS Solver----------------------

    // RubiksCubeBitboard cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCubeBitboard, HashBitboard> dfsSolver(cube, 8);
    // vector<string> solve_moves = dfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    
    //------------------Bit Board BFS Solver-------------------------

    // RubiksCubeBitboard cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube, 8);
    // vector<string> solve_moves = bfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    //------------------Bit Board IDDFS Solver------------------------

    // RubiksCubeBitboard cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // DFSSolver<RubiksCubeBitboard, HashBitboard> iddfsSolver(cube, 8);
    // vector<string> solve_moves = iddfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    //---------------------IDA* Solver-----------------------

    // RubiksCubeBitboard cube;
    // cube.init();

    // vector<string> shuffle_moves = cube.randomShuffleCube(4);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";

    // string s="/Users/uditmehta/Desktop/Rubik-s-Cube-Solver/t.txt";
    // IDAstarSolver<RubiksCubeBitboard, HashBitboard> idAstarSolver(cube,s);
    // vector<string> solve_moves = idAstarSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";


}

