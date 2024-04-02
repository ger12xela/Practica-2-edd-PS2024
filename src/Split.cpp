#include "Split.h"


vector<string> split(string str, char pattern) {

    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> results;

    while(posFound >= 0){
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        results.push_back(splitted);
    }

    return results;
}
vector<string> comando() {

    string str;
    string tpm;
    char pattern = ' ';
    vector<string> results;

    cout<<"introdusca la entrada ---- |exit| para salir "<<endl;
    getline(cin, str);
    results = split(str, pattern);

//    for(int i = 0; i < results.size(); i++){
//        cout << results[i] << endl;
//    }
    return results;

}

