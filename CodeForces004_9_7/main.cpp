//58A. Chat room
//string operate

/*#include <iostream>
#include <string>
using namespace std;
//find the position of each number where they first appeare
bool isHello(string n){
    int tmp;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == 'h'){
            tmp = i + 1;
        }
        if(i == )
    }
    for(int i = tmp; i < n.length();i ++){
        if(n[i] == 'e'){
            tmp = i + 1;
        }
    }
    for(int i = tmp; i < n.length();i ++){
        if(n[i] == 'l'){
            tmp = i + 1;
        }
    }
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
}*/

//C. Querits for the Array
/*#include <iostream>
#include <string>
using namespace std;

void yesOrNo(string input){
    int numplus = 0;
    int numminus = 0;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '+')
            numplus++;
        else if(input[i] == '-')
            numminus++;
        if(input[i] == '0'){
            if(numplus - numminus==0||numplus - numminus==1){
                cout << "NO" << endl;
                break;
            }

        }
    }
}

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        string tmp;
        cin >> tmp;
        yesOrNo(tmp);
    }
    return 0;
}*/
//A.Prime Numbers
/*#include <iostream>
#include <string>
using namespace std;
/*bool isPrime(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            count ++;
    }
    return (count == 2 ? TRUE : FALSE);
}*/
/*bool getThirteen(int n)
{
    for(int i = 0; i < 10; i++){
        if(n % 10 == 3){
            return 1;
        }
        if(n % 10 == 1){
            return 0;
        }
        n/=10;
    }
}

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        long input;
        cin >> input;
        if(getThirteen(input)){
            cout << 13 << endl;
            continue;
        }else{
            cout << 31 << endl;
            continue;
        }
    }
    return 0;
}*/
//B. Two
/*#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void judge(){
    string x1, x2;
    cin >> x1 >> x2;
    if(x1==x2){//how to use compare
        cout << "YES" <<endl;
        return;
    }
    int one = 0, zero = 0;
    for(int i = x1.length() - 2; i > 0; i--){
        if(x2[i] == '1' && x1[i] == '1'){
            one = i;
            if(one == 1 ||( x1[one - 1] == x2[one - 1] && x1[one - 1] == '0')){
                cout << "YES" << endl;
                return;
            }
        }
    }
    for(int i = 1; i < x1.length() - 1; i++){
        if(x1[i] == x2[i] && x1[i] == '0'){
            zero = i;
        }
    }
    //cout << zero << endl << one << endl;
    if((x1[one - 1] == x2[one - 1] && x1[one - 1] == '0')||(x1[zero + 1] == x2[zero + 1])){
        cout << "YES" <<endl;
        return;//this method
    }else{
        cout << "NO" <<endl;
        return;
    }
}

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        judge();
    }
    system("pause");//stdlib.h
    return 0;
}
*/










