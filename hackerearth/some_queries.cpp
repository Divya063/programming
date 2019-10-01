#include<bits/stdc++.h>

using namespace std;


int main(){

	priority_queue<int> queue;
	priority_queue<int, vector<int>, greater<int>> queue1;
	int arr[10000]={0};
	int t;
	cin >> t;
	while(t--){
		int op,num;
		cin >> op;
		if(op==1){
			cin >> num;
			queue.push(num);
			queue1.push(num);
			arr[num]++;
		}
		else if(op==2){
			cin >> num;

			if(arr[num]){
				arr[num]--;
			}
			else{
				cout << "-1" <<endl;
			}
		}
		else if(op==3){

			while(queue.size() && arr[queue.top()]==0){

				queue.pop();
			}
			if(queue.size()){

				cout << queue.top() <<endl;

			}
			else{
				cout << "-1" <<endl;
			}
		}
	else if(op==4){

while(queue1.size() && arr[queue1.top()]==0){

				queue1.pop();
			}
			if(queue1.size()){

				cout << queue1.top() <<endl;

			}
			else{

				cout << "-1" <<endl;
			}
	}


	}
	
}