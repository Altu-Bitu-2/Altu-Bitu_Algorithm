//
// Created by LEE YUN JIN on 2022-03-15.
//

#include <iostream>
#include <unordered_set>

using namespace std;

/* 정렬을 할 필요가 없고 삽입과 검색 기능만 필요
입력의 수가 최대 1000,000임 너무나도 많은 삽입과 탐색이 발생
따라서 O(log N)의 set이 아니라 O(1)인 unordered_set 사용해야 함 */

int main (){
    //입출력 처리속도 향상을 위한 코드
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //테스트케이스 개수 입력
    int test;
    cin >>test;
    while (test--){
        int input, N,M;
        unordered_set<int> note1;

        // 수첩 1에 해당하는 원소들을 unordered_set에 삽입하기
        cin >> N;
        while(N--){
            cin >> input;
            note1.insert(input);

        }

        cin >> M;

        while (M--){
            cin >> input;
            //반복자를 이용해서 원소가 set에 포함되어 있는지 확인
            auto iter = note1.find(input);

            if(iter == note1.end()){
                cout << "0\n";}
            else{
                cout << "1\n";}
        }
    }
    return 0;
}