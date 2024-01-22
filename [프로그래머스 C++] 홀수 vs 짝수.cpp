◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181887

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < num_list.size(); i += 2)
    {
        a += num_list[i];
    }
    
    for(int j = 1; j < num_list.size(); j += 2)
    {
        b += num_list[j];
    }
    
    if(a > b)
    {
        answer = a;
    }
    else if(b > a)
    {
        answer = b;
    }
    else
    {
        answer = a;
    }
    return answer;
}


