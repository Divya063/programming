#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll link[MAX], size[MAX];
#define mod 1000000007

void init(ll n){

	for(ll i=1;i<=n;i++){
		link[i]=i;
	}

	for(ll i=1; i<=n;i++){
		size[i]=1;
	}
}

ll find1(ll x){

	while(link[x]!=x)
		x=link[x];

	return x;	
}

bool same(ll a, ll b){
	return find1(a)==find1(b);
}

void union1(ll a , ll b){

	a = find1(a);
	b = find1(b);
	if(size[a]<size[b])
		swap(a, b);
	size[a]+=size[b];
	link[b]=a;
}


int main(){

		ll n, e;
		cin >> n >> e;	
		init(n);

		for(ll i=0;i<e;i++){
		ll a, b;
		cin >> a >> b;
        union1(a, b);
    }
        ll weight[n];
        for(ll i=1;i<=n;i++){

        	weight[i]=0;
        }

        for(ll i=1;i<=n;i++)
    	{
        	weight[find1(i)]++;
    	}

        ll int ans=1;
        for(ll i=1;i<=n;i++){
        	if(weight[i]){
        		ans=ans*weight[i];
        		ans%=mod;
        	}
        }

        printf("%lld",ans);

}