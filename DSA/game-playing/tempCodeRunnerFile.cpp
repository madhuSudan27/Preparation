    int mini = findMin(a, b, c);
        int maxi = findMax(a, b, c);
        if(a == maxi){
            a-- ;
        }
        else if( b == maxi){
            b--;
        }
        else {
            c--;
        }


        if(a == mini){
            a--;
        }
        else if( b == mini) b--;
        else c--;
        count ++;