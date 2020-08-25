def solution(answers):
    answer = []
    
    # 1. %5, 0 -> 5
    # 2. 2칸씩 2 or 1~5
    # 3. -2 0 +1 0 +2 0 +1 +0
    count_1 =0; count_2=0; count_3 = 0
    template_1 = [1,2,3,4,5]
    template_2 = [2,1,2,3,2,4,2,5]
    template_3 = [3,3,1,1,2,2,4,4,5,5]
    # for i in range(0,len(answers)-1):
    for index, value in enumerate(answers):
        
        # temp = answers[i]
        
        # ans_1
        if template_1[index % 5] == value: count_1 = count_1 + 1
                
        # ans_2
        if template_2[index % 8] == value: count_2 = count_2 + 1
            
        # ans_3
        if template_3[index % 10] == value: count_3 = count_3 + 1
    
    competition = [count_1, count_2, count_3]
    
    max_value = max(competition)
    
    for i, count in enumerate(competition):
        if count == max_value:
            answer.append(i+1)
        
#        answer = answer + (int(i) +1)
    
    
    # answer = list(top)
    
    return answer
