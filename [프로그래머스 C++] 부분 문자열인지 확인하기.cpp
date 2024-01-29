◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181843

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) 
{
    int answer = 0;
    if(my_string.find(target) != string::npos)
    {
        answer = 1;
    }
    return answer;
}
