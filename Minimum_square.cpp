#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n,x,y;
	cin >> n;
	vector<pair<int,int>> plane;
	vector<int> areas;
	for (int i=0;i<n;i++){
		cin >> x >> y;
		plane.push_back(make_pair(x,y));
	}
	
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (abs(plane[i].first-plane[j].first) >= abs(plane[i].second-plane[j].second)){
				areas.push_back(pow(abs(plane[i].first-plane[j].first),2));
			}
			else{
				areas.push_back(pow(abs(plane[i].second-plane[j].second),2));
			}
			
		}
	}
	// for (int i=0;i<areas.size();i++){
	//     cout << areas[i] << endl;
	// }
	cout << *min_element(areas.begin(),areas.end());
}
