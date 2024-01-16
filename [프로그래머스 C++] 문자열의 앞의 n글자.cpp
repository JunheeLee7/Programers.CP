◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181907

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    for(int i = 0 ; i < n; i++)
    {
        answer += my_string[i];
    }
    return answer;
}


