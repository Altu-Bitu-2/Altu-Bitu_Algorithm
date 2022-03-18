//
// Created by LEE YUN JIN on 2022-03-15.
//

# include <iostream>
# include <set>

using namespace std;

//서로 다른 부분 문자열을 구하는 함수
int cntDiff (string s){
    set <string> sub ; //중복없이 부분 문자열 저장
    for (int i=0; i< s.length(); i++){
        string temp =" ";
        for(int j=i;j<s.length();j++){
            temp += s[j];
            sub.insert(temp);
        }
    }
    return sub.size();
}

int main(){
    string s;

    cin >> s;

    cout << cntDiff(s);
    return 0;
}
