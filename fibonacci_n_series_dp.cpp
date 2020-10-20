//Condition is t < 85 (increase it by your requirement)

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	long int dp[85]={0};
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2;i<85;i++){
	    dp[i] = dp[i-1] + dp[i-2];
	}
	while(t--){
	    int n;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cout << dp[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
