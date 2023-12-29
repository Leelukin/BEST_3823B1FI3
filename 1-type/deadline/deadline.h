#include <math.h>
int get_score(short score, int start, int stop, int now) {
    int sco_re = 0;
    int result = 0;

    float one_two = score / 2;
    float res_ult = 0;
    
    if(stop <= now){
        return (score + 1) / 2; 
    } 
    if(start >= now){
        return score;
    }
    if((start < now)){
        res_ult = one_two / (stop - start) * (now - start) + 0.15;
        result = res_ult;
        sco_re = score - result;
    }
    return sco_re;
}