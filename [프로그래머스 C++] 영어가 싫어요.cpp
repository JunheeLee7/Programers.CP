◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120894

◈ 작성 코드

#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) 
{
    long long answer = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        int ch = 0;
        
        if(numbers[i] == 'o')
        {
            ch = 1;
            i += 2;
        }
        else if(numbers[i] == 't')
        {
            if(numbers[i + 1] == 'w')
            {
                ch = 2;
                i += 2;
            }
            else
            {
                ch = 3;
                i += 4;
            }
        }
        else if(numbers[i] == 'f')
        {
            if(numbers[i + 1] == 'o')
            {
                ch = 4;
                i += 3;
            }
            else
            {
                ch = 5;
                i += 3;
            }
        }
        else if(numbers[i] == 's')
        {
            if(numbers[i + 1] == 'i')
            {
                ch = 6;
                i += 2;
            }
            else
            {
                ch = 7;
                i += 4;
            }
        }
        else if(numbers[i] == 'e')
        {
            ch = 8;
            i += 4;
        }
        else if(numbers[i] == 'n')
        {
            ch = 9;
            i += 3;
        }
        else
        {
            ch = 0;
            i += 3;
        }
        
        answer = answer * 10 + ch;
    }
    
    return answer;
}

