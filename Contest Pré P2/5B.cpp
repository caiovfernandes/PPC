#include <bits/stdc++.h>

using namespace std;

string solve(const vector<string>& lines)
{
    size_t max_size = 0, padding = 0;

    for (const auto& line : lines)
        max_size = max(max_size, line.size());

    ostringstream os;

    for (size_t i = 0; i < max_size + 2; ++i)
        os << '*' << (i == max_size + 1 ? "\n" : "");

    for (const auto& line : lines)
    {
        auto size = line.size();
        auto diff = max_size - size;

        int left = diff / 2;    
        int right = diff / 2;    

        if (diff & 1) {
            left += padding;
            right += 1 - padding;
            padding = 1 - padding;
        }

        os << '*';

        while (left--)
            os << ' ';

        os << line;

        while (right--)
            os << ' ';

        os << "*\n";
    }

    for (size_t i = 0; i < max_size + 2; ++i)
        os << '*' << (i == max_size + 1 ? "\n" : "");

    return os.str();
}

int main()
{
    vector<string> lines;
    string line;

    while (getline(cin, line))
        lines.push_back(line);

    auto ans = solve(lines);

    cout << ans;

    return 0;
}

 
import sys
a = [l.strip() for l in sys.stdin]
w,c = max(len(l) for l in a), 0
print('*' * (w+2))
for l in a:
    s = [(w-len(l))//2] * 2
    if len(l) % 2 != w % 2:
        c = 1-c
        s[c] += 1
    print('*'+' '*s[0] + l + ' '*s[1] +'*')
print('*' * (w+2))