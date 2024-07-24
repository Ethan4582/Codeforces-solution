#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	
	cin>>x;
	
	int h[x], g[x];
	for(int i = 0; i < x; i++) {
		cin>>h[i]>>g[i];
	}
	
	int count = 0;
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < x; j++) {
			if(h[i] == g[j]) {
				count++;
			}
		}
	}
	cout<<count;
}
