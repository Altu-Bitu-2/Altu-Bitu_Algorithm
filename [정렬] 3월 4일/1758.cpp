//
// Created by LEE YUN JIN on 2022-03-10.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (int x, int y) {
    return x>y;
}

int main(){
    int N;
    cin >> N;
    vector <int> tip(N);
    for(int i =0;i< N;i++) {
        cin >> tip[i];
    }

    sort(tip.begin(), tip.end(), cmp);

    long long money = 0;
    for(int i =0 ; i< N ;i++){
        if(tip[i]- ((i+1)-1) >= 0)
            money += (long long) (tip[i]- i);
    }

    cout << money << '\n';


}