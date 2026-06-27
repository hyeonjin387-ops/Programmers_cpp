#include <string>
#include <vector>

using namespace std;

int min(vector<int>money){
    int min= 0;
    if (money[0] >= money[1]) min = money[1];
    else min = money[0];
    return min;
}
int max(vector<int>money){
    int max = 0;
    if (money[0] >= money[1]) max = money[0];
    else max = money[1];
    return max;
}

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while(min(wallet) < min(bill) || max(wallet) < max(bill)){
        if(bill[0] > bill[1]){
            bill[0] /= 2;
        }
        else if(bill[0] < bill[1]){
            bill[1] /=2;
        }
        answer++;
    }
    return answer;
}