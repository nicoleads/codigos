#include<stdio.h>
int main(){
    int *letras[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

    for (int i=0; i<26; i++){
        printf("%s\n",letras[i]);
    }
    return 0;
}

