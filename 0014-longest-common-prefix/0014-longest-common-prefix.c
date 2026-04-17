char* longestCommonPrefix(char** strs, int strsSize) {
    int i=0,j;
    if(strsSize==0){
        return "";
    }
    char *output = (char*)malloc(200 * sizeof(char));
    while(strs[0][i]!='\0'){
        for(j=1;j<strsSize;j++){
            if(strs[j][i]!=strs[0][i]){
                output[i]='\0';
                return output;
            }
        }
        output[i]=strs[0][i];
        i++;
    }
    output[i]='\0';
    return output;
}