/*isme ek current sum naam ka ek array bnayinge jisme -ve wale element ko 0 maan linge jaise
we have taken an ARRAY -1 4 -6 7 -4
then another array currentsum is
-1 (first number in an array)(assume it as a 0 )
4 (0+4 = 4)
-2(4+(-6) = -2) (as it is -ve assume it as 0)
7(0 + 7 = 7)
3(7+-4 = 3)
ab ek aur array bnayinge maximum sum krke jo currentSum ka maximum sum dekhega
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;
}