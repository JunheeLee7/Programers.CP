◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120899

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) 
{
    vector<int> answer;
    vector<int> ace = array;
    sort(array.begin(), array.end());
    int a = array[array.size() - 1];
    answer.push_back(a);
    for(int i = 0; i < ace.size(); i++)
    {
        if(ace[i] == a)
        {
            answer.push_back(i);
        }
    }
    return answer;
}

