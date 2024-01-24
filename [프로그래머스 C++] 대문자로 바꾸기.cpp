◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181877

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(int i = 0; i < myString.length(); i++)
    {
        answer += toupper(myString[i]);
    }
    return answer;
}
