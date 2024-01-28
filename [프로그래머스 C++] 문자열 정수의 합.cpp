◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181849

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string num_str) 
{
    int answer = 0;
    
    for(int i = 0; i < num_str.size(); i++)
    {
        answer += num_str[i] - '0';
    }
    return answer;
}

