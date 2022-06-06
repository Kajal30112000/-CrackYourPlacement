     bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) //base case check. if s1 is greater than s2, then permuation isnt possible in 
            return false;        //s2 as s2 doesn't contain all the characters of s1.
        vector<int>str1(26,0);  //vectors to store characters of both s1 and s2 in int form.
        vector<int>str2(26,0);
        for(int i=0;i<s1.size();i++)
        {
            str1[s1[i]-'a']++; //storing characters in vectors
            str2[s2[i]-'a']++;
        }
        int l=0,r=s1.size()-1; //initialising two left and right variables.
        while(r<s2.size()) //loop for sliding window technique. 
        {
            if(str1==str2)  //condition to check if the portion selected by window is true or not.
                return true;
            r++;
            if(r!=s2.size()) 
                str2[s2[r]-'a']++;  // sliding the window, incrementing the right side of s2.
            str2[s2[l]-'a']--; // decreasing the left side, for the window the slide.
            l++;
        }
        return false;
        
    }
