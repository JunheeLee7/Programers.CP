◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181880

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int i = 0; i < num_list.size(); i++)
    {
        while(num_list[i] > 1)
        {
            if(num_list[i] % 2 == 0)
            {
                num_list[i] = num_list[i] / 2;
            }
            else if(num_list[i] % 2 != 0)
            {
                num_list[i] = (num_list[i]-1) / 2;
            }
            answer++;
        }
    }
    return answer;
}


