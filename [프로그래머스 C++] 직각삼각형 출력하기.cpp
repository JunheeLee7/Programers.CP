◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120823

◈ 작성 코드

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
