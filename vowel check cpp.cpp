#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a character: ";
    cin>>letter;
    if (letter=='a'||letter=='A'||letter=='e'||letter=='E'||letter=='i'||letter=='I'||letter=='o'||letter=='O'||letter=='u'||letter=='U'){
        cout<<letter<<" is a Vowel";
    }
    else{
        cout<<letter<<" is a Consonant";
    }
}