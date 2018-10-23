// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
map<string,int>frequency;
std::vector<string> swaps;
int n;
void getswaps(string s,int k = 0){
	if(k == n){
		frequency[s]++;
		return;
	}
	for(int i = 0 ; i<n ; i++){
		swap(s[i],s[k]);
		getswaps(s,k+1);
		swap(s[i],s[k]);
	}
}
int main(){
	cin>>n;
	string input;
	for(int i = 0 ; i<n ; i++){
		input.push_back(i+1+'0');
	}
	string input_temp = input;
	do{
		frequency[input] = 0;
	}while(next_permutation(input.begin(),input.end()));
	getswaps(input_temp);
	map<string,int>::iterator it = frequency.begin();
	int max = INT_MIN;
	int min = INT_MAX;
	while(it!=frequency.end()){
		if(it->second>max){
			max = it->second;
		}
		if(it->second<min){
			min = it->second;
		}
		it++;
	}
	it = frequency.begin();
	while(it!=frequency.end()){
		if(it->second == max){
			cout<<it->first<<endl;
		}
		it++;
	}
	cout<<"Min starts"<<endl;
	it = frequency.begin();
	while(it!=frequency.end()){
		if(it->second == min){
			cout<<it->first<<endl;
		}
		it++;
	}
}