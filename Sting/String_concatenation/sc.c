//String concatenation;
#include<stdio.h>
int main(){
    char str1[]="i",str2[]="love",str3[]="my",str4[]="bangladesh",str5[12];
    int i,j,length1=1,length2=4,length3=2,length4=10;
    for(i=0;i<length1;i++){
        if(str1[i]>=97&& str1[i]<=122){
            str1[i]='A'+(str1[i]-'a');
        }
      }
         for(i=0,j=0;i<length1;i++,j++){
        str5[j]=str1[i];
    }

    
    for(i=0;i<length2;i++){
        if(str2[i]>=97&& str2[i]<=122){
            str2[i]='A'+(str2[i]-'a');
        }
     }
    for(i=0;i<length2;i++,j++){
        str5[j]=str2[i];
    }

    
    for(i=0;i<length3;i++){
        if(str3[i]>=97&& str3[i]<=122){
            str3[i]='A'+(str3[i]-'a');
        }
     }
    for(i=0;i<length3;i++,j++){
        str5[j]=str3[i];
    }

    
    for(i=0;i<length4;i++){
        if(str4[i]>=97&& str4[i]<=122){
            str4[i]='A'+(str4[i]-'a');
        }
     }
    for(i=0;i<length4;i++,j++){
        str5[j]=str4[i];
    }
 
    str5[j]='\0';
    printf("%s\n",str5);
    return 0;
}
