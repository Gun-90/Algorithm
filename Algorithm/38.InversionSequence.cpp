#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> is(n+1), os(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &is[i]);
	}
	for(i=n; i>=1; i--){
		pos=i;
		for(j=1; j<=is[i]; j++){
			os[pos]=os[pos+1];
			pos++;
		}
		os[pos]=i;
	}
	for(i=1; i<=n; i++){
		printf("%d ", os[i]);
	}	
	return 0;
}


//<1부터 처리하는 방법>
#include<bits/stdc++.h>
int main(){
	//freopen("input.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	int n, tmp;
	cin>>n;
	vector<int> os(n);
	for(int i=0; i<n; i++){
		cin>>tmp;
		for(int j=0; j<n; j++){
			if(tmp==0 && os[j]==0){
				os[j]=i+1;
				break;
			}
			else if(os[j]==0) tmp--;
		}
	}
	for(auto x : os) cout<<x<<" ";	
	return 0;
}







