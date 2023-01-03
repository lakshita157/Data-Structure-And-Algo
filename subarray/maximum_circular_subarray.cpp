/*circular subarray is that ki jo elements h wo circle me placed h example->
we have taken an array {-1 4 -6 7 5 -4}
if we have to find only subarray then we do by simple method that we have done earlier
but for circular subarray we will assume that the elements are in circular i.e. after -4 we will take -1 and then so on like they are in circle */

/*Find maximum circular subarray sum
input : 4 -4 6 -5 10 -11 12
output: 22

we will do using kadenes algorithm
isme hum non wrapping element nikl linge aur fir sare wrapping elemnt ko add kr dinge
Max subarray sum = total sum of array - sum of non-contributing elements

non contributing elements ko niklne ke liye sare elements ka sign reverse kr dinge*/

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);
    cout << max(wrapsum, nonwrapsum) << endl;
}