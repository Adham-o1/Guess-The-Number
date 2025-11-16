#include <iostream>
using namespace std;

int main ()
{
    int points = 0;
    int answers [3] = {};
    int seq[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};
    string msg [3] = {};

        cout << "====================================\n";
        cout << "Type The Missing Number In Sequences\n";
        cout << "====================================\n";

        cout << "Q1:\n";
        cout << "1 | 5 | 10 | 16 | ?? \n";
        cout << "=> ";
        cin >> answers[0];

        cout << "=====================\n";
        cout << "Q2:\n";
        cout << "2 | 4 | 8 | 16 | ?? \n";
        cout << "=> ";
        cin >> answers[1];

        cout << "=====================\n";
        cout << "Q3:\n";
        cout << "1 | 1 | 2 | 3 | ?? \n";
        cout << "=> ";
        cin >> answers[2];

        cout << "===========================\n";
        
        if (answers[0] == seq[0][4])
        {
            points++ ;
        }else {
            cout << "[1] The correct answer : " << seq[0][4] << endl;
        }
        if (answers[1] == seq[1][4])
        {
            points++ ;
        }else {
            cout << "[2] The correct answer : " << seq[1][4] << endl;
        }
        if (answers[2] == seq[2][4])
        {
            points++ ;
        }else {
            cout << "[3] The correct answer : " << seq[2][4] << endl;
        }
        
        cout << "Your Points : "<< points << " / 3" << endl;
    return 0;
}