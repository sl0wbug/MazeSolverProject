#pragma once
#include <vector>
#include <random>

class MazeGenerator {
private:
    int rows, cols;
    std::vector<std::vector<char>> maze;
    std::mt19937 rng;  // Modern random number generator
    
    void dfs(int x, int y);

public:
    MazeGenerator(int r, int c);
    void generateMaze();
    void printMaze();
    const std::vector<std::vector<char>>& getMaze() const;
};