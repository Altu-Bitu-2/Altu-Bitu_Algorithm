//
// Created by LEE YUN JIN on 2022-03-22.
//

#include <iostream>

using namespace std;

// 유클리드 호제법
int gcdRecursion(int a, int b) {
    // a > b 일 때, a와 b의 최대공약수를 리턴
    if (b == 0) {//b가 0일때,
        return a; //b=0이므로 나눌 수 없음, a를 반환
    }
    return gcdRecursion(b, a % b); //b 그리고 a%b 의 최대공약수를 반환 (재귀 사용)
}

int main() {
    string s; // n:m

    //입력
    cin >> s;

    //연산(입력으로부터 n, m 추출하기)
    int index = s.find(':'); //':' 위치 찾기
    int n = stoi(s.substr(0, index)); //: 이전의 문자를 숫자로 변경
    int m = stoi(s.substr(index + 1, s.length())); //: 이후 문자를 숫자로 변경

    //최대공약수 g를 구하기
    int g = gcdRecursion(max(n, m), min(n, m));

    //출력
    cout << n / g << ':' << m / g << '\n'; //각각 n과 m을 g로 나눈 값을 출력

    return 0;
}