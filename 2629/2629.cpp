# include <iostream>
# include <string> // string string.h cstring

using namespace std;

int main(){
    int i;
    string s;
    cin >> i;

    while(i --){
        cin >> s;
        string id = s.substr(0, 2);
        string region;
        if(id == "33"){
            region = "Zhejiang";
        }else if(id == "11"){
            region = "Beijing";
        }else if(id == "71"){
            region = "Taiwan";
        }else if(id == "81"){
            region = "Hong Kong";
        }else if(id == "82"){
            region = "Macao";
        }else if(id == "54"){
            region = "Tibet";
        }else if(id == "21"){
            region = "Liaoning";
        }else{
            region = "Shanghai";
        }
       
        string year = s.substr(6, 4);
        string month = s.substr(10, 2);
        string day = s.substr(12, 2);

         cout << "He/She is from " <<  region << ",and his/her birthday is on " 
         << month << "," << day << "," << year << " based on the table." << endl;
    }
    return 0;
}