◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120883

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
    string answer = "";
    string login = "login";
    string wrong = "wrong pw";
    string fail = "fail";
    for(int i = 0; i < db.size(); i++)
    {
        if(db[i][0] == id_pw[0])
        {
            if(db[i][1] == id_pw[1])
            {
                answer = login;
            }
            else
            {
                answer = wrong;
            }
        }
    }
    if(answer == "")
    {
        answer = fail;
    }
    return answer;
}
