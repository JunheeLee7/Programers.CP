◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120840

◈ 작성 코드

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int balls, int share) 
{
    long long answer = 0;
    long long a = 1;
    long long c = 1;
    
    if(balls - share >= share)
    {
        for(int j = balls; j > balls-share; j--)
        {
            c *= j;
            if(c % a == 0 && a <= share)
            {
                c /= a;
                a++;
            }
        }
        
        if(a < share)
        {
            for(int i = a + 1; i <= share; i++)
            {
                a *= i;
            }
            
            c /= a;
        }
    }
    else
    {
        for(int j = balls; j > share; j--)
        {
            c *= j;
            if(c % a == 0 && a <= balls - share)
            {
                c /= a;
                a++;
            }
        }
        
        if(a < balls - share)
        {
            for(int i = a + 1; i <= balls - share; i++)
            {
                a *= i;
            }
            
            c /= a;
        }
    }
    
    long long e = round(c);
    
    answer = e;
    return answer;
}

