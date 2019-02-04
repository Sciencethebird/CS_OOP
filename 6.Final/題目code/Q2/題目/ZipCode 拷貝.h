#ifndef ZIPCODE_H
#define ZIPCODE_H

const int ZipSize = 3;
const char InitChar = '?';
const char Hyphen = '-';
const int SuffixLen = 2;

class ZipCode
{
    public:
        ZipCode();
        ZipCode(int);
        ZipCode(char*);
        ZipCode(ZipCode&);
        ~ZipCode();
        void extend(int);
        void extend(char*);
    private:
        char *code;
};
ostream &operator << (ostream &out, const ZipCode&);
#endif