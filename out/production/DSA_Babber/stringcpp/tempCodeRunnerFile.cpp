int count=0;
    //in descending order
    //lower bound
    if(is_sorted(s.begin(),s.end()))
    {
        return 0;
    }


    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            count++;
        }
        
    }
    return count;