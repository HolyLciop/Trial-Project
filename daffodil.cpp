#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int number;
	int min=1;
	int max=1000000000;//set range
	for(number=min;number<max;number++){//go through all numbers
		int digit=1;
		int i=number;
		int unit=10;
		int sum=0;
		while(i/unit!=0){//get its digit number to "digit"
			digit++;
			unit*=10;
		}
		while(i!=0){
			int least=i%10;
			i/=10;
			int sum_temp=1;
			for(int j=0;j<digit;j++){
				sum_temp*=least;
			}
			sum+=sum_temp;
		}
		if(sum==number){
			cout<<number<<endl;
		}
	}
	return 0;
}