//
// Created by LEE YUN JIN on 2022-03-10.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> arr(21);
    for(int i=1;i<=20;i++)
        arr[i] = i;

    for(int i=0;i<10;i++){
        int b,c;
        cin>>b>>c;
        reverse(arr.begin()+b, arr.begin()+c+1);
    }

    for(int i =1;i<=20;i++)
        cout << arr[i] <<'\n';
    return 0;

}