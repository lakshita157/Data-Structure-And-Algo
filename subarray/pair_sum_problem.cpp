/*check if there exists two elements in an array such that their sum is equal to gven k*/
/* First approach Brute force approach*/
/*#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
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
    int k;
    cin >> k;
    cout<<pairsum(arr,n,k)<<endl;
}
*/
/*Second approach*/

#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int low =0; 
    int high =n-1; 
    sort(arr,arr+n);
    
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;

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
    int k;
    cin >> k;
    cout<<pairsum(arr,n,k)<<endl;
}