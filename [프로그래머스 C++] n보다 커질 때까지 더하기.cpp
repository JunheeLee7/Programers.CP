◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181884

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) 
{
    int answer = 0;
    int i = 0;
    while(n >= answer)
    {
        answer += numbers[i];
        i+=1;
    }
    return answer;
}


