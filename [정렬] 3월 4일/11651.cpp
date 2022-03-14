//
// Created by LEE YUN JIN on 2022-03-10.
//

#include <iostream>
#include <algorithm>
# include <vector>

using namespace std;

bool cmp(pair <int,int>a, pair<int,int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }//y축 비교
    else
        return a.second < b.second; //x축 비교

}

int main (){
    vector<pair<int,int>> vec;
    int n,x,y;
    cin >> n;

    for(int i=0; i< n ;i++){
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }

    sort(vec.begin(),vec.end(),cmp); //오름차순 정렬

    for(int i=0; i<n;i++){
        cout << vec[i].first<< ' '<< vec[i].second << '\n';
    }


}

