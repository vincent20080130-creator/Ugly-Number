#include <iostream>
using namespace std;
int main()
{
    int UGNUM[2000];
    int counter = 1500;
    UGNUM[0] = 1;
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    for (int i = 1 ; i < counter ; i++){
        int n2 = UGNUM[p2] * 2;
        int n3 = UGNUM[p3] * 3;
        int n5 = UGNUM[p5] * 5;
        int Nextugnum = n2;
        if (n3 < Nextugnum){
        Nextugnum = n3;
        }
        if (n5 < Nextugnum){
        Nextugnum = n5;
        }
        UGNUM[i] = Nextugnum;
        if (Nextugnum == n2){
            p2++;
        }
        if (Nextugnum == n3){
            p3++;
        }
        if (Nextugnum == n5){
            p5++;
        }
    }
    cout << "The " << counter <<"'th ugly number is " << UGNUM[counter - 1] << endl ;
}