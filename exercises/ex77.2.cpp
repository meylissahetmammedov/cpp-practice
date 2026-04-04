#include  <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sanyny giriz:";
    cin >> n;

    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }

    double jem = 1;

    cout << "Sanlar:  "<< endl;

    for (int i = 1; i <= n; i++) {
        double gosmaly =  (1.0 + i * 0.1);
        jem *= gosmaly;
        cout << gosmaly ;
        if (i < n) {
            cout << " * ";
        }

    }


    cout << " = "<< jem << endl;
    int pause ;
    cin >> pause;
    return 0;
}