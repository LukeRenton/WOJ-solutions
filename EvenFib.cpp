#include <iostream>
using namespace std;

bool isEven(int n){
	if (n%2 == 0){
		return true;
	}
	return false;
}

int main(){
	int n, num1 = 1, num2 = 1, temp, tot=0;
	cin >> n;
	while (num2+num1 <= n){
		temp = num1;
		num1 = num2;
		num2 += temp;
		if (isEven(num2)){
			tot += num2;
		}
	}
	cout << tot << endl;
	return 0;
}
