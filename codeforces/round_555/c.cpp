#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
deque<int> q;
stack<int> s;
for(int i=0; i<n; i++){
	ll num;
	cin >> num;
	q.push_back(num);
}

string ans;
ll numduplicates=0, numduplicates1=0;
ll count, count1;
for(int i=0; i<n; i++){
	if(i==0){
		if(q.front()<q.back()){
		s.push(q.front());
		q.pop_front();
		ans+= "L";
		}

		else if(q.front()==q.back()){
				count=0, count1=0;
				numduplicates=0, numduplicates1=0;
				for(int i=0; i<q.size()-1; i++){
					if(q.at(i)<q.at(i+1))
						count++;
					if(q.at(i)==q.at(i+1))
						numduplicates++;
				}
				for(int i=q.size()-1; i>1; i--){
					if(q.at(i-1)>q.at(i))
						count1++;
				}
				if(count>count1){
					s.push(q.front());
					q.pop_front();
					ans+="L";
				}
				else if(count<count1){

					s.push(q.back());
					q.pop_back();
					ans+= "R";

				}
				else{

					if(q.at(0)!=q.at(1)){
						s.push(q.front());
						q.pop_front();
						ans+="L";
					}
					else{
						s.push(q.back());
						q.pop_back();
						ans+= "R";

					}

				}

			}

		else{
			s.push(q.back());
			q.pop_back();
			ans+= "R";
		}

}
	else if(q.front()>s.top() && q.back()>s.top()){
		if(q.front()<q.back()){
			s.push(q.front());
			q.pop_front();
			ans+= "L";
		}
		else{
			if(q.front()==q.back()){
				count=0, count1=0;
				numduplicates=0, numduplicates1=0;
				for(int i=0; i<q.size()-1; i++){
					if(q.at(i)<q.at(i+1))
						count++;
				}
				for(int i=q.size()-1; i>1; i--){
					if(q.at(i-1)>q.at(i))
						count1++;
	
				}
				if(count>count1){
					s.push(q.front());
					q.pop_front();
					ans+="L";
				}
				else if(count<count1){
					s.push(q.back());
					q.pop_back();
					ans+= "R";
				}
				else{

					if(q.at(0)!=q.at(1)){
						s.push(q.front());
						q.pop_front();
						ans+="L";
					}
					else{
						s.push(q.back());
						q.pop_back();
						ans+= "R";

					}

				}

			}
			else{
			s.push(q.back());
			q.pop_back();
			ans+= "R";
		}
		}

	}

	else if(q.front()>s.top() && (q.back()<s.top() || q.back()==s.top())){
		s.push(q.front());
		q.pop_front();
		ans+= "L";
	
	}

	else if(q.back()>s.top() && (q.front()<s.top()|| q.front()==s.top())){
		s.push(q.back());
		q.pop_back();
		ans+= "R";
	}

}
cout << ans.length() << endl;
cout << ans;
return 0;
}

