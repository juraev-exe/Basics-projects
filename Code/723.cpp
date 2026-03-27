#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
using namespace std;
int main() 
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int arr[]={x1,x2,x3};
    sort(arr,arr+3);
    cout << abs(arr[1] - arr[0])+abs(arr[1] - arr[1])+abs(arr[1] - arr[2]) << "\n";
    return 0;
}
