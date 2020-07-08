#include <iostream>
#include <vector>
using namespace std;


int bubbleSort(vector<int> &v){
//reference so we don't make a copy, copying big arrays is bad time complexity


    for(int j = 0; j<v.size(); j++){
	
	int swapCount = 0;  //initialize swap count here so it refreshes the value everytime

 	 for(int i = 0; i<v.size()-1; i++){
	
		if(v[i] > v[i+1]){

			//swap function
			int temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;   	
			swapCount++; // adding a counter so we do not perform any swaps if everything is already in the correct order.
			//cout<<"Swap Count: "<<swapCount<<endl;
		}
   	 }

	if(swapCount==0){
		return j;
	}
    }

}


void displayArray(const vector<int> &v){
//putting const and &, don't want to make copies or chnage lvariables when displaying numbers from the array

	//display numbers
	cout<<"The array numbers are: "<<endl;
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<"  "; //storing values into vector array
	}
	cout<<endl;

}




int main(){

	int n = 0;
	cout<<"Please enter array size: "<<endl;
	cin>>n;

	vector<int> v(n); //size of vector is n;

	cout<<"Please enter n numbers to be sorted"<<endl;
	for(int i = 0; i<n; i++){
		cin>>v[i]; //storing values into vector array
	}
	
	cout<<"Before bubbleSort: "<<endl;
	displayArray(v);
	int swapCount = bubbleSort(v);
	cout<<"swap Count is "<<swapCount<<endl;
	
	cout<<endl;
	cout<<"After bubbleSort: "<<endl;
	displayArray(v);
	


	

	return 0;


}
