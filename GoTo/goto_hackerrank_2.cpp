#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sortRoman' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY names as parameter.
 */

vector<string> sortRoman(vector<string> names){
    sort(names.begin(), names.end(), [](string a, string b){
        string name1 = a.substr(0, a.find(" "));
        string name2 = b.substr(0, b.find(" "));
        string roman1 = a.substr(a.find(" ")+1);
        string roman2 = b.substr(b.find(" ")+1);
        
        if(name1 != name2)
            return name1 < name2;
        else{
            map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
            int sum1 = 0, sum2 = 0;
            for(int i = 0; i < roman1.size(); i++){
                if(i == roman1.size()-1 || roman[roman1[i]] >= roman[roman1[i+1]])
                    sum1 += roman[roman1[i]];
                else
                    sum1 -= roman[roman1[i]];
            }
            for(int i = 0; i < roman2.size(); i++){
                if(i == roman2.size()-1 || roman[roman2[i]] >= roman[roman2[i+1]])
                    sum2 += roman[roman2[i]];
                else
                    sum2 -= roman[roman2[i]];
            }
            return sum1 < sum2;
        }
    });
    return names;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string names_count_temp;
    getline(cin, names_count_temp);

    int names_count = stoi(ltrim(rtrim(names_count_temp)));

    vector<string> names(names_count);

    for (int i = 0; i < names_count; i++)
    {
        string names_item;
        getline(cin, names_item);

        names[i] = names_item;
    }

    vector<string> result = sortRoman(names);

    for (int i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
