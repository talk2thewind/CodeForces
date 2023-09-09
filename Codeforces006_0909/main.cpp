//25A. IQ Test
//find the different number's index
//it means evenness!!!
/*#include <iostream>

using namespace std;

//equal, odd, even ;
int main()
{
    int n;
    cin >> n;
    int num[n];
    int odd = 0, even = 0;
    int odd_, even_;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    //check equal

    //check odd,works
    for(int i = 0; i < n; i++){
        if(num[i] % 2 == 0){
            even ++;
            even_ = i + 1;
        }else{
            odd ++;
            odd_ = i +1 ;
        }
    }
    if(odd == n - 1){
        cout << even_;
        return 0;
    }
    if(even == n - 1){
        cout << odd_;
        return 0;
    }
    return 0;
}*/

//4C. Registration system
/*#include <iostream>
#include <string>
using namespace std;

void system(string n, string** &data, int& count, int x)
{
    for(int i = 0; i < x; i++){
        if(data[i][0] == n){
            cout << data[i][0] << data[i][1]<<endl;
            return;
        }
    }
    count++;

    data[count][0] = n;
    data[count][1] = count;
    cout << "OK" << endl;
    return;
}

int main(void)
{
    int n;
    int count = 0;
    cin >> n;
    int t = n;
    string** data = new string*[n];
    for(int i = 0; i < n; i++){
        data[i] = new string[2];
    }
    while(n--){
        string tmp;
        cin >> tmp;
        system(tmp, data, count, t);
    }
    for (int i = 0; i < t; i++)
    {
        delete[] data[i];
    }
    delete[] data;
    return 0;
}*/
/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void customFunction(string name, string** &data, int& count, int size)
{
    for (int i = 0; i < count; i++)
    {
        if (data[i][0] == name)
        {
            int num = 0;
            std::istringstream ss(data[i][1]);
            ss >> num;
            num++;
            data[i][1] = std::to_string(num);
            cout << data[i][0]  << num << endl;
            return;
        }
    }

    data[count][0] = name;
    data[count][1] = '0';
    count++;

    cout << "OK" << endl;
}

int main()
{
    int n;
    int count = 1;
    cin >> n;
    int t = n;
    string** data = new string*[n+1];//out of bound
    for (int i = 0; i < n+1; i++)
    {
        data[i] = new string[2];
    }
    while (n--)
    {
        string tmp;
        cin >> tmp;
        customFunction(tmp, data, count, t);
    }

    // 释放动态分配的内存
    for (int i = 0; i < t; i++)
    {
        delete[] data[i];
    }
    delete[] data;

    return 0;
}*/

//1859C. Another Permutation Problem
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//different permutation and different
//answer
int getTheCount(vector<int> arr);
void solve(int n);

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        solve(tmp);
    }
    return 0;
}
int getTheCount(vector<int> arr){
    vector<int> outcome;
    int fuckingoutcome = 0;
    for(int i = 0; i < arr.size(); i++){
        outcome.push_back((i+1) * arr[i]);
    }
    sort(outcome.begin(), outcome.end(), greater<int>());//after the outcome added
    for(int i:outcome){
        fuckingoutcome += i;
    }
    fuckingoutcome -= outcome[0];
    return fuckingoutcome;
}

void solve(int n)
{
    vector<int> arr;
    vector<int> ans;
    for(int i = 1; i < n + 1; i++){
        arr.push_back(i);
    }
    do {
        ans.push_back(getTheCount(arr));
    } while (std::next_permutation(arr.begin(), arr.end()));
    sort(ans.begin(), ans.end(), greater<int>());

    cout << ans[0] << endl;
}

