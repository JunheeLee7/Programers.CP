◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181901

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) 
{
    vector<int> answer(n/k,0);
    int a = 0;
    for(int i = 1; i < n+1; i++)
    {
        if(i % k == 0)
        {
            answer[a] = i;
            a++;
        }
    }
    return answer;
}


