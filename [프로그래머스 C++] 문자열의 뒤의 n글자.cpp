◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181910

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    int a = my_string.size() - n;
    for(int i = a; i < my_string.size(); i++)
    {
        answer += my_string[i];
    }
    return answer;
}


