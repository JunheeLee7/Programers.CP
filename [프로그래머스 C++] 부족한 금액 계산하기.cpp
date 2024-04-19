◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/82612

◈ 작성 코드

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long t = 0;
    for(int i = 1; i < count + 1; i++)
    {
        t += (price * i);
    }
    if(t >= money)
    {
        answer = t - money;
    }
    else
    {
        answer = 0;
    }
    return answer;
}

