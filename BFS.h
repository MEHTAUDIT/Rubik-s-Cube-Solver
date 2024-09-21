#include<bits/stdc++.h>
#include "RubiksCube.h"

template<typename T, typename H>
class BFSSolver 
{
private:
    vector<string> moves;
    unordered_map<T, bool, H> visited;
    unordered_map<T,string, H> move_done;

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

    T bfs() 
    {
        srand(time(0));
        queue<T> q;
        q.push(rubiksCube);
        visited[rubiksCube] = true;

        while (!q.empty()) 
        {
            T node = q.front();
            q.pop();

            if (node.isSolved()) 
            {
                return node;
            }

            for (int i = 0; i < 18; i++) 
            {
                auto curr_move = MOVE[i];
                node.move(curr_move);

                if (!visited[node]) 
                {
                    visited[node] = true;
                    move_done[node] = curr_move;
                    q.push(node);
                }

                node.invert(curr_move);
            }

        }

        return rubiksCube;
    }

public:
    T rubiksCube;
    T temp;

    BFSSolver(T _rubiksCube) 
    {
        rubiksCube = _rubiksCube;
        temp=rubiksCube;
    }

    vector<string> solve() 
    {
        T solved_cube = bfs();
        T curr_cube = solved_cube;

        while (!(curr_cube == rubiksCube)) 
        {
            string curr_move = move_done[curr_cube];
            moves.push_back(curr_move);
            curr_cube.invert(curr_move);
        }

        rubiksCube = solved_cube;
        reverse(moves.begin(), moves.end());

        for(auto& vv:moves)
        {
            temp.move(vv);
            temp.print();
        }

        return moves;
    }

};
