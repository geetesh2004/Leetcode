// Last updated: 9/5/2025, 9:00:18 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {

       vector<int> result(rowIndex+1);
       vector<int> preveousresult(rowIndex+1);

        for(int i=0; i<=rowIndex; i++){
            for(int j=0; j<=i;j++){
                if(j==0||j==i){
                    preveousresult[j]=1;
                    result[j]=1;
                }
                else{
               result[j]=preveousresult[j]+preveousresult[j-1];
           
                }
            }
                preveousresult=result;
        }
      return result;
               
    }
};

    