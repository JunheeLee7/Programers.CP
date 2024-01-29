◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181846

◈ 작성 코드

#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(string a, string b) 
{
    int alen = a.length();
    int blen = b.length();
    int carry = 0;
    string answer = "";
    
    for(int i = 1; i <= max(alen, blen); i++)
    {
        int numa = (i > alen)? 0 : a[alen-i]-'0';
        int numb = (i > blen)? 0 : b[blen-i]-'0';
        int num = numa + numb + carry;

        if(num >= 10)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        
        char numc = num%10+'0';
        answer = numc + answer;
    }

    if(carry)
    {
        answer = "1"+answer;
    }
    return answer;
}

