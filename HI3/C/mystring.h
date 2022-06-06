size_t mystrlen(const char *);
int mystrcmp(const char *, const char *);

size_t mystrlen(const char *s){
     size_t len=0;

    while (*s++)
    len++;
    return len;
}

int mystrcmp(const char *s1, const char *s2){
    while(*s1 == *s2){
        if(*s1 =='\0')
            return 0;
            s1++;
            s2++;
        }
        if(*s1>*s2) 
            return -1;
        else if(*s1<*s2)
            return 1;
}