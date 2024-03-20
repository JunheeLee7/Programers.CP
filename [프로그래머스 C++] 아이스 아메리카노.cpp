◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120819

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) 
{
    vector<int> answer;
    int a = 0;
    while(money >= 5500)
    {
        money -= 5500;
        a++;
    }
    
    answer.push_back(a);
    answer.push_back(money);
    return answer;
}
