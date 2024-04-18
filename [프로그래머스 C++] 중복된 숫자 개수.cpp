◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120583

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] == n)
        {
            answer++;
        }
    }
    return answer;
}
