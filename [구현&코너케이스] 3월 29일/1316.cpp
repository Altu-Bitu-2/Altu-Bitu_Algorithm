#include <iostream>
#include <vector>

using namespace std;

bool isGroup(string str) { //isGroup 함수
    char cur = NULL; //현재의 문자
    vector<bool> alphabet(26, false); //각 알파벳의 등장 여부를 체크

    for (int i = 0; i < str.size(); i++) { // 각 알파벳을 볼때
        if (str[i] == cur) { //연속해서 나타난 문자는 continue를 통해 다음 문자확인
            continue;
        }
        //이전의 문자와 다른 문자가 나타났을 때
        if (alphabet[str[i] - 'a']) { //이전에 등장했던 문자면 떨어져서 나타난 것
            return false; //새로운 알파벳 등장
        }
        cur = str[i]; //새로운 알파벳이면 cur에 저장
        alphabet[str[i] - 'a'] = true; // 새로운 알파벳 true로
    }
    return true;  //그룹단어인 알파벳 true로
}

/**
 * [그룹 단어 체커] - 단순 구현 문제
 * - 이미 등장한 알파벳을 배열의 인덱스(알파벳)를 활용해서 정보 true/false로 저장
 * - set으로 체크할 수도 있겠지만 검색, 삽입 시마다 O(logN)의 시간복잡도가 걸리므로 인덱스 접근이 가능한 배열이 효율적
 * - 처음 등장하는 알파벳은 배열 정보 업데이트 하고, 무리에서 떨어졌는데 이미 등장한 알파벳이면 그룹 단어가 아니다.
 */

int main() {
    int n, result = 0;

    //입력
    cin >> n; //n 입력
    while (n--) { //n개 동안
        string word;
        cin >> word; //word 입력

        //연산
        if (isGroup(word)) { //그룹 단어인지 확인
            result++; // 그룹 단어 개수 추가
        }
    }

    //출력
    cout << result;//result 출력
    return 0;
}