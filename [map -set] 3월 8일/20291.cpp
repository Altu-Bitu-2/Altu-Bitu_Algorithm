//
// Created by LEE YUN JIN on 2022-03-15.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

// 중복없이 정렬이 필요한 경우 key와 value 쌍이 필요함 map 사용

int main () {
    int n;
    string input;
    map <string, int> extension; // key 확장자 , value 확장자 파일 개수

    cin >> n;
    while (n--){
        cin >> input;
        string ext = input.substr(input.find('.')+1, input.length() );
        extension[ext]++;

    }

    for(auto iter =extension.begin(); iter!= extension.end();iter++){
        cout << iter->first<< ' '<< iter->second << '\n';
    }
    return 0;
}