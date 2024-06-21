#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<int> lst;
    int T; cin >> T;
    string s; int n;
    for(int i = 0; i < T; i++){
        cin >> s;
        if (s == "push_front"){
            cin >> n;
            lst.push_front(n);
        }
        else if (s == "push_back"){
            cin >> n;
            lst.push_back(n);
        }
        else if (s == "pop_front"){
            cout << lst.front() << "\n";
            lst.pop_front();
        }
        else if (s == "pop_back"){
            cout << lst.back() << "\n";
            lst.pop_back();
        }
        else if (s == "size"){
            cout << lst.size() << "\n";
        }
        else if (s == "empty"){
            if (lst.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (s == "front"){
            cout << lst.front() << "\n";
        }
        else if (s == "back"){
            cout << lst.back() << "\n";
        }
    }
    return 0;
}