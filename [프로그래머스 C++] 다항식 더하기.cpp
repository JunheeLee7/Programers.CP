◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120863

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string polynomial) 
{
    string answer = "";
    string w = "";
    int a = 0;
    int b = 0;

    for(int i = 0 ; i < polynomial.size(); i++)
    {
        if(polynomial[i] == ' ')
        {
            if(w != "")
            {
                int t = stoi(w);
                b += t;
                w = "";
            }
        }
        else if(polynomial[i] == 'x')
        {
            if(w != "")
            {
                int t = stoi(w);
                a += t;
            }
            else
            {
                a += 1;
            }
            w = "";
        }
        else if(polynomial[i] == '+')
        {
            
        }
        else
        {
            w += polynomial[i];
        }
    }
    
    if(w != "")
    {
        int t = stoi(w);
        b += t;
        w = "";
    }
    
    string ace = to_string(a);
    string beta = to_string(b);
    if(ace != "0")
    {
        if(ace == "1")
        {
            ace = "x";
        }
        else
        {
            ace += "x";
        }
    }
    
    if(beta == "0")
    {
        answer = ace;
    }
    else
    {
        if(ace != "0")
        {
            answer = ace + " + " + beta;
        }
        else
        {
            answer = beta;
        }
    }
    return answer;
}

