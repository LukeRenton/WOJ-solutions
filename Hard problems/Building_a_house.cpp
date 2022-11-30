#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

vector<pair<int,int>> stack_merge(vector<pair<int,int>> stream){
	stack<pair<int,int>> merged_stream;
	merged_stream.push(stream[0]);
	
	for (int i=0;i<stream.size()-1;i++){
		//Check if the elements over lap, if they do replace the stack.top's second value with the second value of the next element in the stream (1,3),(1,6) --> (1,6)
		if (merged_stream.top().second >= stream[i+1].first && merged_stream.top().second < stream[i+1].second){
			merged_stream.top().second = stream[i+1].second;
		}
		else if (merged_stream.top().second < stream[i+1].first){
			merged_stream.push(stream[i+1]);
		}
	}
	
	vector<pair<int,int>> final_stream;
	while (merged_stream.empty()==false){
		final_stream.push_back(merged_stream.top());
		merged_stream.pop();
	}
	return final_stream;
}

int main(){
	int l,n, start,stop, max_dist = 0;
	
	cin >> l >> n;
	vector<pair<int, int>> stream;
	
	stream.push_back(make_pair(0, 0));
	stream.push_back(make_pair(l, l));
	
	for (int i=0;i<n;i++){
		cin >> start >> stop;
		stream.push_back(make_pair(start, stop));	
	}
	sort(stream.begin(), stream.end());
	
	vector<pair<int,int>> final_stream = stack_merge(stream);
	
	//flip the stream back
	reverse(final_stream.begin(), final_stream.end());
	
	for (int i=0;i<final_stream.size()-1;i++){
		if (final_stream[i+1].first - final_stream[i].second > max_dist){
				max_dist = final_stream[i+1].first - final_stream[i].second;
			}
	}
	
	cout << max_dist << endl;
}

