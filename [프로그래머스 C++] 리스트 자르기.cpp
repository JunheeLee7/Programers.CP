◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181897

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) 
{
    vector<int> answer;
    if(n >0 && n <= 1)
    {
        for(int i = 0; i < slicer[1] + 1; i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if(n > 1 && n <= 2)
    {
        for(int j = slicer[0]; j < num_list.size(); j++)
        {
            answer.push_back(num_list[j]);
        }
    }
    else if(n > 2 && n <= 3)
    {
        for(int k = slicer[0]; k < slicer[1] + 1;k++)
        {
            answer.push_back(num_list[k]);
        }
    }
    else if(n > 3 && n <= 4)
    {
        for(int k = slicer[0]; k < slicer[1] + 1;k += slicer[2])
        {
            answer.push_back(num_list[k]);
        }
    }
    return answer;
}


