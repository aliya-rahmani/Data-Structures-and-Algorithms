int isPlaindrome(char s[])
{
    int n = strlen(s);
    for(int i =0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return 0;
    }
    return 1;
}
