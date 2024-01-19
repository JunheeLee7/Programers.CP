◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181896

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int e = 0;
    bool isEls = false;
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] < 0 && !isEls)
        {
            e = i;
            isEls = true;
        }
    }
    if(!isEls)
    {
        e = -1;
    }
    answer = e;
    return answer;
}
