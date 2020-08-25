#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int pos_l = 10 -1;
    int pos_r = 12 -1;

    int move_num_l;
    int move_num_r;
    int temp;

    int temp_q;
    int temp_r;
    int l_q;
    int l_r; 
    int r_q;
    int r_r;
    for (int i = 0; i<numbers.size(); i++)
    {
        temp = numbers[i] -1;
        // if(temp == 0){temp = 11;}
        if(temp == -1){temp = 11 -1;}

        temp_r = temp % 3;
        
        if(temp_r == 0){pos_l = temp; answer +="L";}
        else if(temp_r == 2){pos_r = temp; answer +="R";}        
        else{
            temp_q = temp / 3;
            l_q = pos_l / 3;
            l_r= pos_l % 3; 
            r_q= pos_r / 3;
            r_r= pos_r % 3;
            move_num_l = abs(l_q - temp_q) + abs(l_r - temp_r);
            move_num_r = abs(r_q - temp_q) + abs(r_r - temp_r);
            
            if(move_num_l < move_num_r){pos_l = temp;answer+="L";}
            // else if(move_num_l > move_num_r){pos_r = temp;answer+="R2";}
            else if(move_num_l > move_num_r){pos_r = temp;answer+="R";}
            else{
                if (hand.compare("left") == 0){pos_l = temp;answer+="L";}
                else{pos_r = temp;answer+="R";}
            }
        }
    }
    return answer;
}
