#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int acNum;
    int penalty;
};

int stringToInt(string str){
    stringstream ss;
    ss<<str;
    int num;
    ss>>num;
    return num;
}

int compare(Student stu1, Student stu2){
    if(stu1.acNum!=stu2.acNum){
        return stu1.acNum > stu2.acNum;
    }
    else{
        if(stu1.penalty!=stu2.penalty){
            return stu1.penalty < stu2.penalty;
        }
        else{
            return stu1.name < stu2.name;
        }
    }
}

int main() {

    int n, m;
    cin>>n>>m;
    vector<Student> v;
    
    string name;
    while(cin>>name){
        Student stu;
        int acNum = 0;
        int penalty = 0;
        for(int i=0; i<n; i++){
            string tmp;
            cin>>tmp;
            int pos = tmp.find('(');
            if(pos==-1){
                int intTmp = stringToInt(tmp);
                if(intTmp>0){
                    acNum++;
                    penalty += intTmp;
                } 
            }
            else{
                acNum++;
                int posEnd = tmp.find(')');
                int wrongNum = stringToInt(tmp.substr(pos+1, posEnd-pos-1));
                penalty = penalty + wrongNum*m;
                penalty = penalty + stringToInt(tmp.substr(0, pos));
            }
        }
        stu.name = name;
        stu.acNum = acNum;
        stu.penalty = penalty;
        v.push_back(stu);
    }
    
    sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<v.size(); i++){
        Student s = v.at(i);
        printf("%-10s %2d %4d\n", s.name.c_str(), s.acNum, s.penalty);
    }

    return 0;
}
