#include <iostream>
using namespace std;

long long int unitSum(long long int n)
{
    return (n*(n+1))/2;
}
int main(){
	int n, num;
	long long int sum;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> num;
		--num;
		sum = 3*unitSum((long long int)(num/3)) + 5*unitSum((long long int)(num/5)) - 15*unitSum((long long int)(num/15));
		cout << sum << "\n";
	}

}
