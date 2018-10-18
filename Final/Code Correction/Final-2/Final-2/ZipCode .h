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
        ZipCode(const char*);
        ZipCode(ZipCode&);
        ~ZipCode();
        void extend(int);
        void extend(const char*);
        friend std::ostream &operator << (std::ostream &out, const ZipCode&);
    private:
        char *code;
};

#endif
