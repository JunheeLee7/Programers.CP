◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181904

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) 
{
    string answer = "";
    string ans = "";
    int d = my_string.size() / m;
    for(int i = 0; i < d; i++)
    {
        answer += my_string[(c-1) + (m * i)];
    }
    return answer;
}
