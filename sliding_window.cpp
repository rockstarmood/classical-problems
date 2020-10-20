#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int arr[] = { 9, 2, 4, 12, 5, 8, 2, 7, 6 }; 
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max_sum = INT_MIN; 
  
    for (int i = 0; i < n - k + 1; i++) { 
        int current_sum = 0; 
        for (int j = 0; j < k; j++) {
            current_sum = current_sum + arr[i + j]; 
        }
        max_sum = max(current_sum, max_sum); 
    } 
    
    cout << max_sum << endl;
    return 0; 
} 
