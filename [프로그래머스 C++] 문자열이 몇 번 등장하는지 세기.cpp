◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181871

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    int patS = pat.size();
    int myS = myString.size();
    for(int i = 0; i < myS - patS + 1; i++)
    {
        if(myString.substr(i, patS) == pat)
        {
            answer++;
        }
    }
    return answer;
}


