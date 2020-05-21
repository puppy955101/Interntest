#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
string A(string s){
	int i;
	string re = "";
	for(i=0;i<s.size();i++){
		re += s[s.size()-1-i];
	}
	return re;
}
string B(string s){
	int i;
	string tmp = "";
	string re = "";
	for(i=0;i<s.size();i++){
		if(s[i]!=' ')tmp += s[i];
		else{
			re += A(tmp);
			re += s[i];
			tmp = "";
		}
	}
	re += A(tmp);
	return re;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	cout << A(s) << '\n';
	cin.ignore();
	getline(cin,s);
	cout << B(s) << '\n';
}

