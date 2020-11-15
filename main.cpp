#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#include "install.h"
int main(int argc, char** argv)
{
    cout << GetHash(openFile("test.txt"))<<endl;
    if(argc<3){
        cout << "Not enough argument" << endl;
        return 0;
    }
        if(strcmp(argv[1],"install")==0){

        }
        else if(strcmp(argv[1],"remove")==0){

        }
        else if(strcmp(argv[1],"test")==0){

        }
        else if(strcmp(argv[1],"update")==0){

        }
        else if(strcmp(argv[1],"upgrade")==0){

        }
        else{
            cout << "Unknown command, try command \"pm help\"" <<endl;
        }
    return 0;
}
