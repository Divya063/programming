#include<bits/stdc++.h>

using namespace std;


int main(){

	vector<int> A={3, 1, 2, 5, 3};

	int sum=0, sum1=0;
   
   for(int i=0;i<A.size();i++){
       
       sum=sum+A[i];
   }
   int n=A.size();
   int sumn= (n*(n+1))/2;
   
   int square1=abs(sumn-sum);
   
   for(int i=0;i<A.size();i++){
       
       sum1=sum1+(A[i]*A[i]);
   }
   
   int sumsquare=  (n * (n + 1) * ((2*n) + 1)) / 6;
   
   int square= abs(sumsquare-sum1);
   int aplusb;
   if(square1!=0){
   aplusb=square/square1;
   int a = (aplusb+square1)/2;
   int b= aplusb-a;
   cout << a;
   }

   
	


}