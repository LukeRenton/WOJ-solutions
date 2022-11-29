#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, tot=0, num;
    cin >> n;
    vector<int> nums;
    for (int i=0;i<n;i++){
        cin >> num;
        tot += num;
        nums.push_back(num);
    }
    for (auto x : nums){
        cout << float(x)/float(tot) << "\n";
    }
    
}
