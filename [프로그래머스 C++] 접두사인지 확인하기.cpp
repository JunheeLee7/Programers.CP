◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181906

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int answer = 1;
    for(int i = 0; i < is_prefix.size(); i++)
    {
        if(my_string[i] != is_prefix[i])
        {
            answer = 0;
        }
    }
    return answer;
}


