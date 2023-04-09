/*Alice is a student in 12th grade who has encountered a problem in his homework that he is unable to solve. The problem involves determining whether a given number B will appear in an infinite sequence or not, with A as the first number and C as the common difference between consecutive numbers. To solve this problem, Alice requires assistance from someone with a good understanding of mathematics and programming.

Alice, your good friend, is stuck on a problem related to infinite sequences. Alice has turned to you for help. As a good friend, you want to help her find the solution to her problem

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three integer, a, b and c.


For each test case, print a single line "Yes" if number will appear otherwise print "No"*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((b - a) % c == 0 && (b - a) / c >= 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
