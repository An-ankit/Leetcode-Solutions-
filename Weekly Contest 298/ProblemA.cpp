string greatestLetter(string s) {
        int a[26]={0};
        int A[26]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122)a[(s[i]-97)]++;
            else A[(s[i]-65)]++;
        }
        string p="";
        for(int i=25;i>=0;i--){
            if(a[i]>0 && A[i]>0){
                int k=i+65;
                p.append(1,(char)k);
                cout<<p;
                return p;
            }
        }
        
        return "";
    }
