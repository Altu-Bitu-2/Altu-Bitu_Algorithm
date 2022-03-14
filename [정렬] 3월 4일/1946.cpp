//
// Created by LEE YUN JIN on 2022-03-10.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while (test --){
        pair<int, int> grade[100001];
        int N;
        cin >> N;

        for(int i =0; i< N; i++){
            cin>> grade[i].first >> grade[i].second;
        }
        sort(grade, grade+N);

        int result = 1;
        int temp = grade[0].second;

        for(int i =1 ;i<N;i++){
            if(grade[i].second < temp ){
                result ++;

                temp = grade[i].second;

            }

        }

        cout<< result<<'\n';

    }
    return 0;
}
