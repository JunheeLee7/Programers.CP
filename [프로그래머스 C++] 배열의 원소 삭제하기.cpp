◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181844

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) 
{
    vector<int> answer;
    
    for(int i = 0; i < delete_list.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[j] == delete_list[i])
            {
                arr.erase(arr.begin()+j);
            }
        }
    }
    return answer = arr;
}
