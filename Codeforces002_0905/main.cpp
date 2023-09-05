//166A. Tram
//exit first, get in later
//number operate and two array
/*#include <iostream>

using namespace std;

bool isBigger(int max, int num){
    return max < num;
}

int main()
{
    int stop;
    int max = 0;
    int num = 0;
    cin >> stop;
    int out[stop], in[stop];
    for(int i = 0; i < stop; i ++){
        cin >> out[i];
        cin >> in[i];
    }
    for(int i = 0; i < stop; i ++){
        num -= out[i];
        num += in[i];
        if(isBigger(max, num)){
            max = num;
        }
    }
    cout << max;
    return 0;
}*/

//41A.Translation
//reverse string

/*#include <iostream>
#include <string>
using namespace std;
string reverse(string input){
    string tmp;
    for(int i = input.length() - 1; i >= 0 ; i --){//that =s
        tmp.push_back(input[i]);
    }
    return tmp;
}
bool isReverse(string input1, string input2){
    return (input1 == reverse(input2));
}

int main(void)
{
    string input1, input2;
    cin >> input1 >> input2;
    //cout << reverse(input1) << endl;
    if(isReverse(input1, input2)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}*/

//677A. Vanya and Fence
//number operate

/*#include <iostream>
using namespace std;

int main(void)
{
    int n, height;
    cin >> n >> height;
    int friends[n];
    for(int i = 0; i < n; i ++){
        cin >> friends[i];
    }
    int width = 0;
    for(int i = 0; i < n; i ++){
        if(friends[i] > height){
            width += 2;
        }else{
            width++;
        }
    }
    cout << width;
    return 0;
}*/

//266B. Queue at the school
//string and swap

/*#include <iostream>
#include <string>
using namespace std;
void swap(char* Queue, int i){
    char tmp;
    tmp = Queue[i];
    Queue[i] = Queue[i+1];
    Queue[i+1] = tmp;
}

int main(void)
{
    int num, time;
    cin >> num >> time;
    char Queue[num];
    for(int i = 0; i < num; i++){
        cin >> Queue[i];
    }

    while(time--){
        for(int i = 0; i < num - 1;){
            if(Queue[i] == 'B' && Queue[i+1] == 'G'){
                swap(Queue, i);
                i+=2;
            }else{
                i++;
            }
        }
    }
    for(int i = 0; i < num; i++){
        cout << Queue[i];
    }
    return 0;
}*/

//271A. Beautiful Year
//number operate
//year with distinct digits
/*#include <iostream>
using namespace std;

int main(void)
{
    int year;
    cin >> year;
    for(int i = year + 1; i < 9013; i++){
            int tmp[4];
            int t = i;
        for(int j = 0; j < 4; j++){
            tmp[j] = t % 10;
            t /= 10;
        }
        int digit = 0;
        for(int k = 0; k < 4; k++){
            for(int l = 0; l < 4; l++){
                if(tmp[k]!=tmp[l]){
                    digit ++;
                }
            }
            if(digit == 9){
                   cout << i;
                   return 0;
                }
        }
    }
    return 0;
}*/
//omg too many "for"

//58A. Chat room
//string operate

#include <iostream>
#include <string>
using namespace std;
//find the position of each number where they first appeare
bool isHello(string n){
    int h_posi = 101, e_posi = 101,
    l1_posi = 101, l2_posi = 101, o_posi = 101;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == 'h' && i < h_posi){
            h_posi = i;
        }
        if(n[i] == 'e' && i < e_posi){
            e_posi = i;
        }
        if(n[i] == 'l' && i < l1_posi){
            l1_posi = i;
        }
        if(n[i] == 'l' && i < l2_posi && l1_posi != 101){
            l2_posi = i;
        }
        if(n[i] == 'o' && i < o_posi){
            o_posi = i;
        }
    }
    //wether it is non-decreasing array
    return ((h_posi < e_posi)  &&(e_posi < l1_posi)
            &&(l1_posi < l2_posi)&&( l2_posi < o_posi));
    //number don't need to be the time they first appear
}

int main(void)
{
    string input;
    cin >> input;
    if(isHello(input)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
