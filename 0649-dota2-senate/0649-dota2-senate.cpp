class Solution {
public:
    string predictPartyVictory(string s ) {
        queue <int> q;
         queue <int> r;
        queue <int> d;

        int n= s.length();
        for(int i=0;i<n;i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);

        }
        while(q.size()>1){
            if(s[q.front()] =='x') q.pop();
            else if(s[q.front()] =='R'){
                // announcement  // check fot victory 
                if(d.size()==0) return "Radiant"; 
                else {
                    // take right s next D
                    s[d.front()] ='x';
                    d.pop();
                    // work is done 
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();

                }
            }
            else {
                //  s[q.front()] ='D'
                 if(r.size()==0) return "Dire"; 
                else {
                    // take right s next R
                    s[r.front()] ='x';
                    r.pop();
                    // work is done 
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();

                }
            }
        }

    if(s[q.front()]=='R')  return "Radiant";
    else  return "Dire";
        

    } 
    
};