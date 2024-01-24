◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181878

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    int mSL = myString.length();
    int pL = pat.length();
    for(int i = 0; i <= mSL - pL; i++)
    {
        bool isM = true;
        for(int j = 0; j < pL; j++)
        {
            if(tolower(myString[i + j]) != tolower(pat[j]))
            {
                isM = false;
                break;
            }
        }
        if(isM)
        {
            answer = 1;
        }
    }
    
             
    return answer;
}


