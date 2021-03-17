



        //Write your code here
        
        for(int i = 0; i < n; i ++) {
            BigDecimal max = new BigDecimal(s[i]);
            int index = i;
            for(int j = i + 1; j < n; j ++) {
                BigDecimal curr = new BigDecimal(s[j]);
                    if(curr.compareTo(max) == 1) {
                        max = curr;
                        index = j;
                    }
            }
            String t = s[i];
            s[i] = s[index];
            s[index] = t;
        }
    
            
    