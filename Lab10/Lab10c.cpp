#include<iostream>
using namespace std;
void printArray(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void addFive(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]+=5;
}
void addThree(int &a){
	a=a+3;
}
void printArray(int a[][4],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"    ";
		}
		cout<<endl;
	}
	cout<<endl;
}
//e
void multiTwo(int a[][4],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]*=2;
		}
		
	}

}
int main(){
	int a[6]={4,5,6,3,5,4};
	int b[3][4]={{4,3,5,6},{6,8,4,3},{1,2,9,7}};
	cout<<"Before: \n";
	printArray(a,6);
	cout<<endl;
	addFive(a,6);
	addThree(a[3]);
	cout<<"After: \n";
	printArray(a,6);
	cout<<endl;
	
	cout<<"Before: \n";
	printArray(b,3,4);
	multiTwo(b,3,4);
	cout<<"After: \n";
	printArray(b,3,4);
	
}