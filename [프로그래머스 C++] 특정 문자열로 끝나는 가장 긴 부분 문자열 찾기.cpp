◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181872

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) 
{
    string answer = myString.substr(0, myString.rfind(pat)+pat.length());
    
    return answer;
}


