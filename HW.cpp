#include <iostream>
using namespace std;
void foo(void);
int main(void){
	int m, b1, b2, b3, sum = 0; 
	cout << "master branch";
	cout << "branch1"; 
	cout << "branch2";
	cout << "branch3";
	for(int i = 0; i < b3; i++){
		sum += i; 
	} 
	foo(); 
	return 0; 
}
void foo(void) {
	print("I'm branch3"); 
}