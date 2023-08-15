//
// Created by Hej on 13. 8. 2023.
//

#ifndef LEET_CODE_PRIJECTS_VALIDSUDOKU_H
#define LEET_CODE_PRIJECTS_VALIDSUDOKU_H
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class ValidSudoku {
public:
    static bool isValidSudoku2(vector<vector<char>>& board) {
        unordered_set<int> explored;

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] != '.') {
                    int currentNumber = board[row][col] - '0';

                    int rowID = (currentNumber * 10) + row;
                    int colID = (currentNumber * 100) + col;
                    int boxID = (currentNumber * 1000) + (col/3 * 10) + row/3;

                    if (!explored.insert(rowID).second ||
                        !explored.insert(colID).second ||
                        !explored.insert(boxID).second
                    ) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> explored;

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                char currentNumber = board[row][col];

                if (currentNumber != '.') {
                    string rowID = to_string(currentNumber) + " in row " + to_string(row);
                    string colID = to_string(currentNumber) + " in col " + to_string(col);
                    string boxID = to_string(currentNumber) + " in box " + to_string(row/3) + "-" + to_string(col/3);

                    if (!explored.insert(rowID).second ||
                        !explored.insert(colID).second ||
                        !explored.insert(boxID).second
                            ) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};


#endif //LEET_CODE_PRIJECTS_VALIDSUDOKU_H
