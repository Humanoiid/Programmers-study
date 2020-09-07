#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> left;
    for(auto elem : completion){
        if(left.count(elem) == 1 ){
            left[elem]++;
        } 
        else{
            left[elem] = 1;    
        }
    }
    
    for(auto elem : participant){
        if(left.end() == left.find(elem)){
            answer = elem;
            break;
        }
        else{
            left[elem]--;
            if(left[elem] < 0){
                answer = elem;
                break;
            }
        }
    }
    return answer;
}
