/*#include <iostream>
#include <algorithm>
#include <string>
using namespace std;*/
/*int main(void){
    int t = 0;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d ;
        int* x = new int[3];
        x[0] = a;
        x[1] = b;
        x[2] = c;
        //find the biggest number
        std::sort(x, x+3);
        /*for(int i = 0; i<3;i++){
            cout << x[i] <<" ";
        }*//*
        int tmp = x[2] - x[1] + x[2] - x[0];
        delete []x;
        if(tmp > d){
            cout << "NO" << endl;
            continue;
        }
        if((d - tmp)%3 == 0){
            cout << "YES" << endl;
            continue;
        }else if((d - tmp)%3 != 0){
            cout << "NO" << endl;
            continue;
        }
    }
    system("pause");
    return 0;
}*/

/*int main(void){
    string input;
    cin >> input;
    //string outcome;
    int j = 0;
    //cout << input.length() << endl;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '.'){
            cout<<0;
            j++;
        }else if(input[i] == '-'&&input[i+1] == '.'){
            cout<<1;
            j++;i++;
        }else if(input[i] == '-'&&input[i+1] == '-'){
            cout<<2;
            j++;i++;
        }
    }
    //cout <<outcome<<endl;
    return 0;
}*/
/*
int main(void){
    int num = 0;
    int sum = 0;
    int count = 0;
    cin >> num;
    int* arr = new int[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= 3;
    int edge1, edge2, edge3;
    for(int i = 0;;i++){
        int tempsum = 0;
        tempsum+=arr[i];
        if(tempsum==sum){
            edge1 = i;
            break;
        }
    }
    for(int i = edge1;;i++){
        int tempsum = 0;
        tempsum+=arr[i];
        if(tempsum==sum){
            edge2 = i;
            break;
        }
    }
    for(int i = edge2;;i++){
        int tempsum = 0;
        tempsum+=arr[i];
        if(tempsum==sum){
            edge3 = i;
            break;
        }
    }
    cout << edge1 << edge2 << edge3;
    if(num < 3){
        cout << 0;
        return 0;
    }

    return 0;
}*/

//71A.Way Too Long

/*int main(void){
    int n;
    cin >> n;
    while(n--){
        string tmp;
        cin >> tmp;
        if(tmp.length() > 10){
            cout << tmp[0] << tmp.length() - 2 << tmp[tmp.length() - 1] << endl;
        }else{
        cout << tmp<< endl;
        }
    }
    return 0;
}*/

//231A.Team

/*int main(void){
    int num;
    cin >> num;
    int matrix[num][3];
    for(int i = 0;i<num;i++){
        for(int j =0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    int outcome = 0;
    int count;

    for(int i = 0;i<num;i++){
        count = 0;
        for(int j =0;j<3;j++){
            count+=matrix[i][j];
        }
        if(count >= 2){
            outcome++;
        }
    }
    cout<<outcome;
    return 0;
}*/

//1A.Theatre Square
/*#include<iostream>
#include<string>
using namespace std;

int main(void){
    long long n, m, a;
    cin >> n >> m >> a;
    long  long t = a - 1;
    if(n == a){
        cout << (m + t) / a;
        return 0;
    }else if(m == a){
        cout << (n + t) / a;
    }else if(m<a&&n<a){
        cout <<1;
    }else{
        cout << ((n + t) / a) * ((m + t) / a);
    }
    return 0;
}*/

//158A.Next Round
/*#include<iostream>
#include<string>
using namespace std;

int main(void){
    int total, advanced;
    int ans = 0;
    cin >> total >> advanced;
    int* arr = new int[total];
    //neglect this '*'
    for(int i  = 0; i < total; i++){
        cin >> arr[i];
    }
    for(int i  = 0; i < total; i++){
        if(arr[i] >= arr[advanced-1] && arr[i] > 0){//advanced should minus one
            ans++;
        }
    }
    cout << ans <<endl;
    //neglect the rule "positive score"
    return 0;
}*/
//50A.Domino piling
/*#include <iostream>
using namespace std;

int main(void){
    int len, wid;
    cin >> len >> wid;
    cout << len * wid /2 << endl;
    return 0;
}
*/

//282A.Bit++
/*#include <iostream>
using namespace std;

int main(void){
    int num = 0, n =0;
    cin >> n;
    while(n--){
        string x;
        cin>> x;
        if(x=="X++"||x=="++X"){
           num++;
        }else if(x=="X--"||x=="--X"){
            num--;
        }
    }
    cout << num;
    return 0;
}
*/

//263A.Beautiful matrix

/*#include<iostream>
using namespace std;

int main(void){
    //input the matrix
    int** matrix = new int*[5];
    for(int i =0;i<5;i++){
        matrix[i] = new int [5];
    }
    for(int i =0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin >> matrix[i][j];
        }
    }
    //locate the number one
    int x, y;
    for(int i =0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(matrix[i][j]==1){
                x = i;
                y = j;
            }
        }
    }
    //get the answer
    int ans1, ans2;
    if(x >= 2){
        ans1 = x-2;
    }else if(x < 2){
        ans1 = 2-x;
    }
    if(y >= 2){
        ans2 = y-2;
    }else if(y < 2){
        ans2 = 2-y;
    }
    cout << ans1 + ans2;
    return 0;
}*/

//112A.Petya and Strings
//tags::strings, lexicographically, tolower, compare, strcmp
//compare is for string while strcmp is for char[n]

/*#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(void){
    //input the strings
    string a, b;
    cin >> a;
    cin >> b;
    //lowercase
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    //cout <<a <<endl << b;
    //sort
    cout << a.compare(b);
    return 0;
}*/

//339A.Helpful Maths
//how to judge the end of input
//the rule of scanf
//sort sort sort!
//count should be considered seriously
/*#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(void){
    int* num = new int[100];
    int count = 0;
    for(int i =0;i<100;i++){

        scanf("%d", &num[i]);
        if(getchar()=='\n')
            {break;}
        scanf("+");
        count++;
    }
    //cout << count;
    //how to get the count?
    sort(num, num+count+1, greater<int>());
    reverse(num, num+count+1);
    for(int i =0;i<count+1;i++){
        cout << num[i];
        if(i != count){
            cout << '+';
        }
    }
    return 0;
}*/

//281A.World Capitalization
//transform
/*#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    //get the string
    string input;
    cin >> input;
    transform(input.begin(), input.begin()+1, input.begin(), ::toupper);
    cout << input;
    return 0;
}*/

//236A.Boys and Girls
//figure the number of distinct characters
/*#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str;
    cin >> str;
    //idea: delete the repetitive character, but i can't
    //how to use iterator?
    char name[101] = {0};//should be big enough
    //cout << name[50];
    int outcome = 0;
    for(int i = 0;i < str.length(); i++){
        int count  = 0;
        for(int j  =0;j <i;j++){//the condition
            if(str[i] != name[j]){//the empty
                count ++;
            }
        }
        if(count == i)
            {name[outcome] = str[i];
            outcome ++;}
        else if(count != i)
            {}
    }
    //cout << outcome;#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str;
    cin >> str;
    //idea: delete the repetitive character, but i can't
    //how to use iterator?
    char name[101] = {0};//should be big enough
    //cout << name[50];
    int outcome = 0;
    for(int i = 0;i < str.length(); i++){
        int count  = 0;
        for(int j  =0;j <i;j++){//the condition
            if(str[i] != name[j]){//the empty
                count ++;
            }
        }
        if(count == i)
            {name[outcome] = str[i];
            outcome ++;}
        else if(count != i)
            {}
    }
    //cout << outcome;
    if(outcome%2){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
    return 0;
}

    if(outcome%2){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
    return 0;
}
*/

//118A. String task
//operate the  string
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    //input
    string str;
    cin >> str;
    //transform to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    //cout <<str;
    //delete the vowel and store them
    //how to use iterator?
    string nonVowel;
    for(int i = 0;i<str.length(); i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){//|| and &&
            nonVowel.push_back('.');
            nonVowel.push_back(str[i]);
        }else{
            continue;
        }
    }
    cout <<nonVowel;
    return 0;
}
*/

//266A.Stones on the table

/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char stone[101];
    int i = 0;
    for(int i = 0;i < n; i++){
        cin >> stone[i];
    }
    /*for(int i = 0;i < n; i++){
        cout << stone[i];
    }*/
    /*int ans = 0;
    for(int i = 0; i < n; ){
        int  count = 0;
        for(int j = i+1; j < n; j++){
            if(stone[j] != stone[i]){
                break;//must break
            }
            if(stone[j] == stone[i]){
                count ++;
            }
        }
        ans += count;
        i+=(count + 1);
    }
    cout << ans;
    return 0;
}
*/
//791A.Bear and Big Brother
//Number operating
/*#include <iostream>
using namespace std;

int main(void)
{
    int limak, bob;
    cin >> limak >> bob;
    int ans = 1;
    for(; ans < 100; ans++){
        limak *= 3;
        bob *= 2;
        if(limak > bob){
            cout << ans;
            break;
        }
    }
    return 0;
}
*/
//546A.Soldier and bananas
//Number operating
//Math
/*#include<iostream>
using namespace std;

int main(void)
{
    int price, money, want;
    cin >> price >> money >> want;
    int need;
    need = (want * (want + 1)) / 2 * price;
    if(need <= money){
        cout << 0;
    }else{
        cout << need - money;
    }
    return 0;
}*/

//617A.Elephant
//Math
/*#include <iostream>
using namespace std;

int main(void)
{
    int length;
    cin >> length;
    cout <<length / 5 + ((length % 5) > 0);
    return 0;
}*/

//59A.World
//string operating
//The number of the uppercase character

/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string input;
    cin >> input;
    //Count which one is more
    int up = 0, low = 0;
    for(int i = 0; i < input.length(); i++){
        if(input[i] >= 65 && input[i] <= 65+26){
            up ++;
        }else{
        low++;
        }
    }
    if(up > low){
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        cout << input;
    }else{
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        cout << input;
    }
    return 0;
}*/

//59A.young physicist
//vector operating

/*#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    //how to use vector?
    int row;
    cin >> row;
    int matrix[row][3];
    for(int i  = 0; i < row; i++){
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
        //scanf("%d", &matrix[i][0]);
        //scanf("%d", &matrix[i][1]);
        //scanf("%d", &matrix[i][2]);
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i  = 0; i < row;  i++){
        sum1 += matrix[i][0];
        sum2 += matrix[i][1];
        sum3 += matrix[i][2];
    }
    if(sum1==0&&sum2==0&&sum3==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}*/

//977A.Wrong Subtraction
//number operating
/*#include <iostream>
using namespace std;

int main(void)
{
    long num, times;
    cin >> num >> times;
    while(times--){
        if(num % 10 ==0){
            num /= 10;
        }else{
            num--;
        }
    }
    cout << num;
    return 0;
}*/

//96A.Football
//string operate
/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string input;
    cin >> input;
    int count = 0;
    for(int i = 0; i < input.length(); i++){
            count = 0;
        for(int j = i+1; i < input.length(); j++){
            if(input[j] == input[i]){
                count ++;
            }else{
                break;
            }
        }
        if(count >= 6){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}*/
//110A. Nearly lucky number
//Number and String
//Calculate the count of 4 and 7 in it
/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string input;
    cin >> input;
    int count = 0;
    for(int i  = 0; i < input.length(); i++){
        if(input[i] == '4' || input[i] == '7'){
            count ++;
        }
    }
    if(count == 4 || count ==7){
        cout << "YES";
    }else{
        cout << "NO";
    }
    //cout << input.length() << endl;
    //cout << input[3] << endl;
//    if(input.length() >= 7){
//        if((input[6]== '4' ||input[6] == '7')&&(input[3] == '4' ||input[3] == '7')){//must using ''
//            cout << "YES";
//        }else{
//            cout << "NO";
//        }
//    }else if(input.length() < 4){
//        cout << "NO";
//    }else{
//        if(input[3] == '4'||input[3] == '7'){
//            cout << "YES";
//        }else{
//            cout <<"NO";
//        }
//    }
    return 0;
}
*/

//734A.Anton and Danik
//String
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string tmp;
    int nn = n;
    int count = 0;
    while(n--){//n = 0 already
        char input;
        cin >> input;
        tmp.push_back(input);
    }
    for(int i = 0; i < tmp.length(); i++){
        if(tmp[i] == 'A'){
            count ++;
        }
    }
    //cout << count << endl;
    //cout << n - count <<endl;
    if(count > nn - count){
        cout << "Anton";
    }else if(count < nn - count){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    return 0;
}






















