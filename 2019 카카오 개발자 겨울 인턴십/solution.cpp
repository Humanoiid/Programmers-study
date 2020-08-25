#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int> > board, vector<int> moves) {
    int answer = 0;
    
    vector<int> basket;
    vector<int> ::iterator iter = moves.begin();
    
    for (int m=0;m<moves.size();m++){
    // for (iter=moves.begin();iter != moves.end();iter++){
        for (int i =0; i<board.size();i++){
            // if (board[i][*iter-1] != 0){
            //     basket.push_back(board[i][*iter-1]);
            //     board[i][*iter-1] = 0;
            //     break;
                if (board[i][moves[m]-1] != 0){
                basket.push_back(board[i][moves[m]-1]);
                board[i][moves[m]-1] = 0;
                break;
            }
        }
        if(basket[basket.size() - 2] == basket.back()){basket.pop_back(); basket.pop_back();answer +=2 ;}
                
    }
    return answer;
}
