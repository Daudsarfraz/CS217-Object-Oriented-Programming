#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int i,table = 10,limit = 8;
    ofstream out("10table.txt");
    for(i=1;i<=8;i++)
    {
            out<< table <<'x'<< i <<'='<<table * i<<endl;
        }
    
    ifstream in("10table.txt");
    out.close();
    return 0;
}