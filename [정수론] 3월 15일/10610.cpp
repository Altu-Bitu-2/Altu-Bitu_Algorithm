//
// Created by LEE YUN JIN on 2022-03-22.
//

#include <iostream>
#include <algorithm>

using namespace std;

string findNumber(string s) {
    bool isTen = false; //isTen : 0이 존재하는지 확인
    int sum = 0; //sum : 3의 배수인지 확인하기 위해 수 더함

    //돌면서 3의 배수와 10의 배수인지 확인 그래야 30의 배수가 될 수 있음
    for (int i = 0; i < s.length(); i++) {
        sum += (s[i] - '0'); // string s를 int형으로 바꿈, sum을 사용해 3의 배수 확인
        if (s[i] == '0') { //string 중에서 0이 존재하면
            isTen = true; // isTen은 0이 존재하므로 true
        }
    }

    if (sum % 3 != 0 || !isTen) { //3의 배수가 아니거나, 10의 배수가 아니라면
        return "-1"; // -1로 값을 반환
    }

    //가장 큰 수 만들기 위해 내림차순 정렬, sort 사용하기!
    sort(s.begin(), s.end(), greater<>());
    return s; //s 반환
}

/**
 * [30]
 * 30의 배수 = 10의 배수 && 3의 배수
 * 1. 10의 배수 -> 입력된 수에 0이 포함되어 있는지 확인
 * 2. 3의 배수 -> 모든 자리수의 합이 3의 배수인지 확인
 *
 * 30의 배수임이 확인 되었으면,
 * 가장 큰 수를 만들기 위해 9부터 0까지 역순으로 나열한다.
 */

int main() {
    string s;

    //입력
    cin >> s;

    //연산 & 출력
    cout << findNumber(s);
    return 0;
}