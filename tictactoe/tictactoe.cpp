//
//  tictactoe.cpp
//  tictactoe
//
//  Created by mark melling on 5/12/21.
//

#include "tictactoe.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;
using std::cin;

void print_out(vector<char> &board, int one_two) {
    char X{'X'}, O{'O'};
    int input;
    cin >> input;
    string barrier{"|"};
    for (int i = 0; i < board.size(); i++) {
        if (input == i + 1 && one_two == 1) {
            board[i] = X;
        }
        if (input == i + 1 && one_two == 2) {
            board[i] = O;
        }
        switch (i) {
                //first indent
            case 2:
                cout << board[i] << "\n";
                break;
                //second indent
            case 5:
                cout << board[i] << "\n";
                break;
                //third indent
            case 8:
                cout << board[i] << "\n";
                break;
            default:
                cout << board[i] << barrier;
                break;
        }
        
    }
    
}

bool more_empty(vector<char> board) {
    for (int i = 0; i < board.size(); i++) {
        if (board[i] == ' ') {
            return true;
        }
    }
    int none = 3;
    print_out(board, none);
    return false;
}



int main() {
    
    
    char empty{' '};
    //we will add a vector that will put spaces in default places;
    //input empty everywhere there is nothing
    vector<char> board {empty, empty, empty, empty, empty, empty, empty, empty, empty};
    
    //assign each a number
    int one = 1, two = 2;
    //user will input in for loop
    while (more_empty(board)) {
        print_out(board, one);
        print_out(board, two);
    }
    
        
    
    
}
