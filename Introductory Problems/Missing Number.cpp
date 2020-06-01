#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    long long int n, numbers[200000], sum=0, total_sum=0,  i;
    
    cin >> n;
    for(i=0; i<n-1; i++){
        cin >> numbers[i];
    }
    
    total_sum = n*(n+1)/2;
    sum = accumulate(numbers, numbers+(n-1), sum);
    
    cout << total_sum - sum;
    
    return 0;
}
