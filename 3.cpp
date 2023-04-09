/*As a referee of a table tennis match, your role is to oversee the game and ensure that the rules are followed. In addition to keeping track of the score, you also need to know when to switch the player who serves.

In this particular match, Alice and Bob have decided to change the serving player after every K points scored instead of the traditional 2 points. As the referee, you need to keep track of the score and determine who should serve next based on the current number of points and the value of K.

At the start of the game, Chef serves first. As the game progresses, you must keep track of the points scored by Alice and Bob, and update the serving player after every K points.

Your programming skills will come in handy to help you keep track of the score and determine which player should serve next. You can easily determine the serving player based on the current score and the value of K. This will ensure that the match is played fairly and in accordance with the rules.

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers P1, P2 and K.
Constraints

1 ≤ T ≤ 105
1 ≤ K ≤ 109
0 ≤ P1,P2 ≤ 109
Output Format

For each test case, print a single line containing the string "Alice" if it is Alice's turn or "Bob" if it is Bob's turn. cpp*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, k;
        cin >> p1 >> p2 >> k;
        int totalPoints = p1 + p2;
        if ((totalPoints / k) % 2 == 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    return 0;
}
