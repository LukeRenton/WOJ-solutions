#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    string student, bud;
    vector<string> group_1;
    vector<string> group_2;
    map<string, vector<string>> friends;
    cin >> n >> m;
    for (int i=0;i<m;i++){
        cin >> student >> bud;
        friends[student].push_back(bud);
    }
    
    for (pair<string, vector<string>> entry : friends){
        if ()
		group_1.push_back(entry.first);
        cout << "Pushed back: " << entry.first << " to group_1" << endl << endl;
        for (int i=0;i<entry.second.size();i++){
            group_2.push_back(entry.second[i]);
            cout << "Pushed back: " << entry.second[i] << " to group_2" << endl;
        }
        cout << endl;
    }
    
}