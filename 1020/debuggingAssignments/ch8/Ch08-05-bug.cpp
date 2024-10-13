#include <iostream>
#include <vector>
#include <cstdlib>  // for std::stoi
using namespace std;

int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// read size of triangle from command line argument and convert to an integer
int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <number_of_lines>" << endl;
        return 1;
    }

    int numLines = stoi(argv[1]);  // convert the command line argument to an integer

    vector<vector<int>> pascal;

    for (int line = 0; line < numLines; line++) {
        vector<int> aRow;
        for (int row = 0; row <= line; row++) {
            if (row == 0 || row == line)
                aRow.push_back(1);  // first and last elements of each row are 1
            else
                aRow.push_back(binomialCoeff(line, row));  // binomial coefficient for other elements
        }
        pascal.push_back(aRow);
    }

    /* Now we print the vector that we just defined using a simple
    range-based for loop. */
    for (const vector<int>& row : pascal) {
        for (int value : row)
            cout << value << " ";
        cout << endl;  // use std::endl to end the line
    }

    return 0;
}
