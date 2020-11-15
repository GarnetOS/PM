using namespace std;
#include "install.h"
string openFile(string file){
ifstream ifs(file);
string content( (istreambuf_iterator<char>(ifs) ),
                       (istreambuf_iterator<char>()    ) );
return content;
}
string GetHash(string content){
    return get_md5(content);
}
string Exists(string package){

}
