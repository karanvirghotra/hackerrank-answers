/*For 10, the divisors are 1, 2, 5 and 10. Hence, the sum of odd divisors is 1+5=6.
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        
        int count=0;
        cin >> x;
        y=x;
      while(y!=0)
      {
        if(x%y==0)
        {
            if(y%2!=0)
            {
                count+=y;
            }
        }
        y--;
      }

      cout<<count;
    }


    return 0;
}*/
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 1) c += i;
                if ((n / i) % 2 == 1 && i != n / i) c += n / i;
            }
        }
 

        cout << c << endl;
    }

    return 0;
}
