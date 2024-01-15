◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181916

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) 
{
    int answer = 0;
    if(a == b && b == c && c == d)
    {
        answer = 1111 * a;
    }
    else if(a == b && b == c)
    {
        answer = (10 * a + d) * (10 * a + d);
    }
    else if(b == c && c == d)
    {
        answer = (10 * b + a) * (10 * b + a);
    }
    else if(a == b && b == d)
    {
        answer = (10 * a + c) * (10 * a + c);
    }
    else if(a == c && c == d)
    {
        answer = (10 * a + b) * (10 * a + b);
    }
    else if(a == b)
    {
        if(c == d)
        {
            answer = (a + c) * (a - c);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = c * d;
        }
    }
    else if(a == c)
    {
        if(b == d)
        {
            answer = (a + b) * (a - b);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = b * d;
        }
    }
    else if(a == d)
    {
        if(b == c)
        {
            answer = (a + b) * (a - b);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = b * c;
        }
    }
    else if(b == c)
    {
        if(a == d)
        {
            answer = (b + a) * (b - a);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = a * d;
        }
    }
    else if(b == d)
    {
        if(a == c)
        {
            answer = (b + a) * (b - a);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = a * c;
        }
    }
    else if(c == d)
    {
        if(a == b)
        {
            answer = (c + a) * (c - a);
            if(answer < 0)
            {
                answer *= -1;
            }
        }
        else
        {
            answer = a * b;
        }
    }
    else if(a != b && b != c && c != d)
    {
        if(a < b && a < c && a < d)
        {
            answer = a;
        }
        else if(b < a && b < c && b < d)
        {
            answer = b;
        }
        else if(c < a && c < b && c < d)
        {
            answer = c;
        }
        else if(d < a && d < b && d < c)
        {
            answer = d;
        }
    }
    return answer;
}


