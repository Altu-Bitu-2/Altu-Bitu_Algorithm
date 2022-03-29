//
// Created by LEE YUN JIN on 2022-03-29.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> findPattern(int num) { //a^b 의 일의 자리수 패턴을 찾는 함수
    vector<int> pattern = {num};

    int temp = num; //temp변수에 num을 저장
    while (num != (temp * num) % 10) { //만약 num이 3일 때 셍각해보면 3,9,7,1까지만 while문 사용
        temp *= num; //거듭 제곱할 때
        temp %= 10;//일의 자리수 찾는 방법
        pattern.push_back(temp);
    }
    return pattern;// pattern 값 반환
}

/**
 * [분산처리]
 *
 * - a^b의 일의 자리를 구하는 문제
 * - 일의 자리는 0 ~ 9 중 하나 이므로, 어떤 수를 계속 곱해 나가면 일의 자리는 패턴을 가지게 되어 있음
 *     ex) 2 -> 4 -> 8 -> 6 -> 2 ...
 * - 0 ~ 9까지 일의 자리 패턴을 미리 구한 후, a의 일의 자리에 대한 (b - 1 % 패턴의 길이)번째 수를 출력하면 된다.
 * - 0이 나올 경우 10번 컴퓨터가 처리하므로, 0이 출력되지 않도록 예외처리
 */

int main() {
    int t, a, b; // 테스트 케이스 a^b

    //0 ~ 9까지 일의 자리 패턴 미리 구하기
    vector<vector<int>> last_digit(10, vector<int>(0));
    vector<int> pattern_size(10, 1); //0~9 총 10개 pattern_size를 각각 1로
    for (int i = 0; i < 10; i++) { // 0~9까지 반복
        last_digit[i] = findPattern(i);// pattern을 찾아서 last_digit에 넣음
        pattern_size[i] = last_digit[i].size(); //pattern_size를 저장
    }

    //입력
    cin >> t;//테스트케이스 개수
    while (t--) { //테스트케이스 동안
        cin >> a >> b;// 정수 a,b 입력
        a %= 10; //일의자리만 필요함

        if (a == 0) { //10의자리라면 일의자리가 0이지만
            cout << "10\n"; //10번 컴퓨터가 데이터 처리함
            continue; //다음 테스트 케이스로 가기
        }
        //인덱스가 0부터 시작하므로 (b - 1)로 계산해야 함을 주의
        cout << last_digit[a][(b - 1) % pattern_size[a]] << '\n';
    }
    return 0;
}

