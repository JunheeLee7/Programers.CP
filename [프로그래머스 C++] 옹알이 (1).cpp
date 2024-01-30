◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120956

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    bool isCheck = false;
    
    for(int i = 0; i < babbling.size(); i++)
    {
        isCheck = true;
        
        for(int j = 0; j < babbling[i].size(); j++)
        {
            if(babbling[i].substr(j,3) == "aya")
            {
                j += 2;
            }
            else if(babbling[i].substr(j,2) == "ye")
            {
                j += 1;
            }
            else if(babbling[i].substr(j,3) == "woo")
            {
                j += 2;
            }
            else if(babbling[i].substr(j,2) == "ma")
            {
                j += 1;
            }
            else
            {
                isCheck = false;
                break;
            }
        }
        if(isCheck == true)
        {
            answer++;
        }
    }
    return answer;
}

