#include <iostream>

int main() {
	
	int n, c=1;
	cout<<"Please enter your number"<<endl;
	cin>>n;
	
	for ( int i=2; i<n-1; i++){
		if (n%i!=0){
			
			continue;
			
		}
		else{
			
			c=0;
			
		}
	}
	if (c=0){
		cout<<"number is not a prime"<<endl;
		
	}
	else{
		cout<<"number is a prime"<<endl;
	}
	return 0;
}
