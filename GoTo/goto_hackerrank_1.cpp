#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countHighlyProfitableMonths' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY stockPrices
 *  2. INTEGER k
 */

int countHighlyProfitableMonths(vector<int> stockPrices, int k) {
    int count = 0;
    int temp = 0;
    for(int i = 0; i < stockPrices.size(); i++){
        if(stockPrices[i] > stockPrices[i-1]) temp++;
        else temp = 1;
        if (temp >= k) count++;  
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string stockPrices_count_temp;
    getline(cin, stockPrices_count_temp);

    int stockPrices_count = stoi(ltrim(rtrim(stockPrices_count_temp)));

    vector<int> stockPrices(stockPrices_count);

    for (int i = 0; i < stockPrices_count; i++) {
        string stockPrices_item_temp;
        getline(cin, stockPrices_item_temp);

        int stockPrices_item = stoi(ltrim(rtrim(stockPrices_item_temp)));

        stockPrices[i] = stockPrices_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    int result = countHighlyProfitableMonths(stockPrices, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
