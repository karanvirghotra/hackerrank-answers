/*
Alice has recently learned about a new function called XOR(), which is used to compute the XOR of all elements of a sequence. She has a sequence A of size N and has created a new sequence B with size N^2 using a formula that involves adding elements of sequence A.

In order to calculate the elements of sequence B, Alice has used the following formula: XOR(a1..n) = a1⊕a2⊕⋯⊕an.

Now, your task is to compute the XOR of sequence B. To do this, you will need to apply the following XOR function to all the elements of sequence B. This will give you a single value which will be the answer to the problem.

BiN+j+1=(Ai+1+Aj+1)∀0≤i,j

Once you have the XOR of sequence B, you can print it as the final answer to the problem. This will give you the value of XOR(B) and complete your task.

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Constraints

1 ≤ T ≤ 10^9
1 ≤ N ≤ 500
20 ≤ Ai < 220 for each valid i
Output Format

For each test case, print a single line containing one integer — the answer to the problem.

Sample Input 0

1
2
1 2
Sample Output 0

6
Explanation 0

The sequence B is {A1+A1,A1+A2,A2+A1,A2+A2}={2,3,3,4}. The XOR of its elements is B1⊕B2⊕B3⊕B4=6.
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b[n*n];
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[k++] = a[i] + a[j];
            }
        }
        int res = 0;
        for (int i = 0; i < n*n; i++) {
            res ^= b[i];
        }
        cout << res << endl;
    }
    return 0;
}

