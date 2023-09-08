//58A. Chat room
//string operate
//kind of stupid way to solve
/*#include <iostream>
#include <string>
using namespace std;
//find the position of each number where they first appeare//wrong
bool isHello(string n){
    int tmp, i;
    for(i = 0; i < n.length(); i++){
        if(n[i] == 'h'){
            tmp = i + 1;
            break;
        }
    }
    if(i == n.length())return 0;
    for(i = tmp; i < n.length();i ++){
        if(n[i] == 'e'){
            tmp = i + 1;
            break;
        }
    }
    if(i == n.length())return 0;
    for(i = tmp; i < n.length();i ++){
        if(n[i] == 'l'){
            tmp = i + 1;
            break;
        }
    }
    if(i == n.length())return 0;
    for(i = tmp; i < n.length();i ++){
        if(n[i] == 'l'){
            tmp = i + 1;
            break;
        }
    }
    if(i == n.length())return 0;
    for(i = tmp; i < n.length();i ++){
        if(n[i] == 'o'){
            tmp = i + 1;
            return 1;
        }
    }
    if(i == n.length())return 0;//no output then

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
//122A. Lucky Division
//almost lucky number
/*#include <iostream>
#include <string>
using namespace std;
//be evenly divided by some lucky number
bool isLucky(int n)
{
    int tmp = n;
    while(n)
    {

        if(n % 10 == 4 || n % 10 == 7){
            n /= 10;
            if(n == 0)return 1;
        }else{
            break;
        }
    }//lucky number or not
    if (!(tmp % 4) || !(tmp % 7) || !(tmp % 44) || !(tmp % 47) || !(tmp % 77) || !(tmp % 74) || !(tmp % 477) || !(tmp % 474) || !(tmp % 447)) return 1;
    //n was 0 now
    return 0;
}

int main(void)
{
    int input;
    cin >> input;
    cout << (isLucky(input) ? "YES" : "NO");
    return 0;
}*/
//1030A. In Search of a Easy Problem

/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        if(tmp){cout << "HARD";return 0;}
    }
    cout << "EASY";
    return 0;
}*/

//467A. George and Accommodation

/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int count = 0;
    int arr2d[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr2d[i][0] >> arr2d[i][1];
    }
    for(int i = 0; i < n; i++){
        if(arr2d[i][1] - arr2d[i][0] >= 2){
            count ++;
        }
    }
    cout << count;
    return 0;
}*/

//160A. Twins

/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int num, sum = 0, count = 0, sumOfMine = 0;
    cin >> num;
    int coin[num];
    for(int i = 0; i < num; i++)
    {
        cin >> coin[i];
        sum += coin[i];
    }
    sort(coin, coin + num, greater<int>());//usage
    double half = sum/2.0f;
    for(int i = 0; i < num; i++)
    {
        sumOfMine += coin[i];
        count ++;
        if(sumOfMine > half){break;}
    }
    cout << count;
    return 0;
}
*/
//200B.Drinks
/*#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>///
using namespace std;

int main(void)
{
    int n;//no double
    cin >> n;
    double juice[n];
    double sum = 0;
    for(double i = 0; i < n; i++)
    {
        cin >> juice[n];
        sum += juice[n];
    }
    cout <<setprecision(12) << sum / n;
    return 0;
}
*/

//158B. Taxi
/*#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>///
using namespace std;

int main(void)
{
    int n;
    int ans = 0;
    cin >> n;
    int stu[n];
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> stu[i];//i not n
    }
    //sort(stu, stu + n, greater<int>());
    for(int i = 0; i < n; i++)
    {
        if(stu[i] == 4){
            num4++;
        }else if(stu[i] == 3){
            num3++;
        }else if(stu[i] == 2){
            num2++;
        }else if(stu[i] == 1){
            num1++;
        }
    }
    ans += num4;
    for(;num3 > 0&& num1 > 0;)//&&not||
    {
        ans ++;
        num3--;num1--;
    }
    for(;num2 > 1;){
        ans++;
        num2-=2;
    }
    if(num1 == 0){
        ans += num3;
        ans += num2;
    }else if(num3 == 0){
        ans += ((num1 + num2 * 2 + 3) / 4);
    }
    cout << ans;
    return 0;
}
*/
