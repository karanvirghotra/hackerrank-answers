/*Alice and Bob are great friends and they love to play games together. Today, they are playing a game with a number X. The game has a simple rule: in one turn, they can multiply X by 2. The goal of the game is to make X divisible by 10.

At first, they thought the game was easy, but soon they realized that it was more challenging than they thought. They tried different numbers, but none of them worked. They were about to give up when they had an idea.

They decided to work together to solve the problem. They started by looking for patterns in the numbers that are divisible by 10. They found out that all these numbers end with a zero. So, they tried to find a way to make X end with a zero. Help Alice and Bob to find the smallest number of turns necessary to win the game (it may be possible to win in zero turns) or determine that it is impossible.

Alice and Bob were so sad that they didn't solve the problem together. They learned that it's better to take help from you. Will you help them?

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first and only line of each test case contains a single integer denoting the initial value of X.

Constraints

1 ≤ T ≤ 1000
0 ≤ X ≤ 109
Output Format

For each test case, print a single line containing one integer — the minimum required number of turns or −1 if there is no way to win the game

Sample Input 0

3
10
25
1
Sample Output 0

0
1
-1
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x % 10 == 0) {
            cout << 0 << endl;
        } else if (x % 5 == 0) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}