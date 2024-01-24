#include <iostream>
using namespace std;
// return first and last occurence index of character

void first_last_index(string s, char ch, int *x, int *y)
{
    for(int i=0;i<sizeof(s);i++){
        if(ch==s[i]){
            *x = i;
            break;
        }
    }


     for(int i=sizeof(s)-1;i>=0;i--){
        if(ch==s[i]){
            *y = i;
            break;
        }
    }
}
int main()
{
    string sentence = "I owe you something";
    char ch = 'o';
    int first = -1;
    int last = -1;

    int *ptr_first = &first;
    int *ptr_last = &last;
    first_last_index(sentence,ch,ptr_first,ptr_last);
    cout<<first<<endl;
    cout<<last<<endl;
    return 0;
}