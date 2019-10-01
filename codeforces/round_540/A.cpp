#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



// Complete the latestStudent function below.
string latestStudent(vector<vector<string>> attendanceData) {

    vector<pair<string, int>> arr;
    map<string, int> arr1;
    map<string, int> lateness;
    map<string, int> sum;
    
    bool cmp

    for(auto i : attendanceData){
            string date = i[0];
            int late = stoi(i[3])-stoi(i[2]);
            lateness[date]++;
            sum[date]+=late;
            arr1[i[1]]=late;

    }
    int count =0;
    for(auto i : attendanceData){
        int count = lateness[i[0]];
        int val = sum[i[0]];
        int avg = val/count;
        for(auto j : arr1){
            if(j.second>=avg)
            arr.push_back({j.first, j.second-avg});
        }

    }

   sort(arr.begin(), arr.end(), cmp);
    


}

int main()