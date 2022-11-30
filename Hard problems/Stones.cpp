#include <vector>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string check(char c1, char c2){
	if (c1 == c2){
		return "G";
	}
	return "R";
}

string solve(int k, int pos, string stones){
	char c1, c2;		
	
	while(stones.length() > 1){
		
	pos = (pos + k) % stones.length();
	c1 = stones[pos];
	stones.erase(pos,1);
	
	pos = (pos + k) % stones.length();
	c2 = stones[pos];
	stones.replace(pos,1,check(c1,c2));
	
	pos = (pos + 1) % stones.length();
		
	}
		if (stones == "G"){
			return "Green";
		}
		else{
			return "Red";
		}
	}


int main(){
	int n, m, k;
	string initial;
	cin >> n >> m >> k;
	while (n != 0 || m != 0 || k != 0){ 
		initial = "";
		for (int i =0; i<n+m;++i){ 
			if (i<=n-1){
				initial = initial + "G";
			}
			else{
				initial = initial + "R";
			}
		}
		cout << solve(k - 1, 0, initial) << endl; 
		cin >> n >> m >> k;	
	}	
	
	return 0;
}
