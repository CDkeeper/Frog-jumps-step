#include<bits/stdc++.h>
using namespace std;
int state[65];
int main(){
	int n;
	cin>>n;
	while(n--){
		int step;
		cin>>step;
		memset(state,0,sizeof(state));
		state[1]=1;
		state[2]=2;
		for(int i=3;i<=step;i++)
		state[i]=state[i-1]+state[i-2];
		cout<<state[step]<<endl;
	}
	return 0;
}
