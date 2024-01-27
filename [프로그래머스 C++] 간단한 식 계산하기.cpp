◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181865

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string binomial) 
{
    int answer = 0;
    string a1 = "";
    string a2 = "";
    string a3 = "";
    bool isSet = false;
    for(int i = 0; i < binomial.size(); i++)
    {
        if(binomial[i] >= '0' && binomial[i] <= '9')
        {
            if(!isSet)
            {
                a1.push_back(binomial[i]);
            }
            else if(isSet)
            {
                a2.push_back(binomial[i]);
            }
        }
        else
        {
            a3 += binomial[i];
            isSet = true;
        }
    }
    int num1 = stoi(a1);
    int num2 = stoi(a2);
    if(a3 == " + ")
    {
        answer = num1 + num2;
    }
    else if(a3 == " - ")
    {
        answer = num1 - num2;
    }
    else if(a3 == " * ")
    {
        answer = num1 * num2;
    }
    else if(a3 == " / ")
    {
        answer = num1 / num2;
    }
    return answer;
}


