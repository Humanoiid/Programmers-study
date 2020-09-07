#include <string>
#include <vector>


using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int>::iterator iter_v;
    vector<int> students(n,1);
    
    // students update: reserve student: 2/ lost student: 0
    
    // vector based
    for (int i = 0; i < lost.size(); i++) {
        students[lost[i] - 1]--;
    }
    for (int i = 0; i < reserve.size(); i++) {
        students[reserve[i] - 1]++;
    }

    
    // greedy
// vector - index method
    for(int i=0; i < n; i++){
        if(students[i] == 0){
           if((i > 0 ) && (students[i-1] == 2)){
                students[i]++;
                students[i-1]--;
           } 
           else if((i < n-1 ) && (students[i+1] == 2)){
                students[i]++;
                students[i+1]--;
           } 
        }
        if(students[i] >= 1){
            answer++;
        }
     }
    return answer;
}
