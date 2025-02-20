#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        string sc;
        char mp;
        int t;

        Spy(string secret_code, char meeting_point, int time) {
            this->sc = secret_code;
            this->mp = meeting_point;
            this->t = time;
        }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;
    cin >> secret_code >> meeting_point >> time;

    Spy spy1 = Spy(secret_code, meeting_point, time);
    cout << "secret code : " << spy1.sc << endl;
    cout << "meeting point : " << spy1.mp << endl;
    cout << "time : " << spy1.t << endl;

    return 0;
}