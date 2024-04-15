◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120808

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);   // b / (a % b) == 0 이 될 때까지.
    }
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    vector<int> answer;
    int a = denom1 * denom2;                        // 분모
    int b = (denom1 * numer2 + denom2 * numer1);    // 분자
    
    int c = gcd(a, b);                              // 최대 공약수
    
    a /= c;
    b /= c;
    
    if(a == b)
    {
        answer.push_back(1);
        answer.push_back(1);
    }
    else
    {
        answer.push_back(b);
        answer.push_back(a);
    }
    return answer;
}

