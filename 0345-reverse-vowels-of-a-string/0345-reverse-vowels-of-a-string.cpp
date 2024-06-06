class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            char c1=s[i];
            char c2=s[j];
            cout<<c1<<" "<<c2<<endl;
            if((c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u'||c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U')&&(c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u'||c2=='A'||c2=='E'||c2=='I'||c2=='O'||c2=='U'))
            {
                char temp=c2;
                s[j]=c1;
                s[i]=temp;
                i++;
                j--;
            }
            else
            {
                if(!(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u'||c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U'))
                i++;
                if(!(c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u'||c2=='A'||c2=='E'||c2=='I'||c2=='O'||c2=='U'))
                j--;
            }
        }
        return s;
    }
};