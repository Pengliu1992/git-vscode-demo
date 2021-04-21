 #include<iostream>
 #include<algorithm>
 #include<vector>
 #include<cmath>
 using namespace std;
    int main(){
        vector<int> Re;
        int num=6699696;
        int cp=num,cp1=num;
        
        while(num!=0)
        {
            Re.push_back(num%10);
            num=num/10;
        }
        
        reverse(Re.begin(),Re.end());
        
        auto it=find(Re.begin(),Re.end(),6);
       
        if(it!=Re.end())
        {
            int k=(int)(Re.end()-1-it);
          
            cp=cp+3*pow(10,k);
           
        }
          

        string s=to_string(cp1);
        auto it1=find(s.begin(),s.end(),'6');
        if(it1!=s.end())
        replace(s.begin(),it1+1,'6','9');
        
        cp1=stoi(s);
        cout<< cp <<endl;
        cout<< cp1 <<endl;
        return cp;
        
        

    }
        