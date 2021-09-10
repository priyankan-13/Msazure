/* print the sum, Difference an product of two complex number*/

#include<iostream>
using namespace std;
class complex{
	public:
		int r1, r2, i1, i2;
		int sum_real, sum_imaginary;
		int diff_real, diff_imaginary;
		int mul_real, mul_imaginary;
		int sum(int r1, int i1, int r2, int i2){
			sum_real=r1 + r2;
			sum_imaginary= i1+i2;
			if(sum_imaginary>=0)
			cout<< "sum of two complex number is:" <<sum_real<<"+"<<sum_imaginary<<"i."<<endl;
			else
			cout<< "sum of two complex number is:" <<sum_real<<sum_imaginary<<"i."<<endl;
			
		}
		int difference(int r1,int i1,int r2,int i2){
			diff_real=r1-r2;
			diff_imaginary=i1-i2;
			if(diff_imaginary>=0)
			cout<< "Difference of two complex number is:" <<diff_real<<"+"<<diff_imaginary<<"i"<<endl;
			else
			cout<< "Difference of two complex number is:" <<diff_real<<diff_imaginary<<"i."<<endl;
		}
		int product(int r1,int i1,int r2,int i2){
			mul_real=r1*r2-i1*i2;
			mul_imaginary=i1*i2+r1*r2;
			if(mul_imaginary>=0)
			cout<< "Product of two complex number is:" <<mul_real<<"+"<<mul_imaginary<<"i."<<endl;
			else
			cout<< "Product of two complex number is:" <<mul_real<<mul_imaginary<<"i."<<endl;
		}
};
int main(){
	complex com;
	int real1,imagei1,real2,imagei2;
	cout<<"Enter the first number"<< endl << "Enter the Real value:";
	cin>>real1;
	cout<<endl<<"Enter the imaginary value:";
	cin>>imagei1;
	cout<<"Enter the second number"<< endl << "Enter the Real value:";
	cin>>real2;
	cout<<endl<<"Enter the imaginary value:";
	cin>>imagei2;
	cout<<com.sum(real1,imagei1,real2,imagei2)<<endl;
	cout<<com.difference(real1,imagei1,real2,imagei2)<<endl;
	cout<<com.product(real1,imagei1,real2,imagei2)<<endl;
	com.display()
	com.display()
	com.display() 

	
	
}
