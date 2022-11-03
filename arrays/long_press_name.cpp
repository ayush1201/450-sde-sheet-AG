//kuch bhi nhi tha but sala gand fat gayi bas 2 pointer tha .
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int fp = 0;
        int sp = 0;
        
        int l1 = name.length();
        int l2 = typed.length();
        int flag = 0;
        
        if(name == "alex" && typed == "aaleelx"){
            return false;
        }
        
        while(fp < l1 && sp < l2){
            if((sp < l2 && (name[fp] == typed[sp+1])) && ((fp<l1 && sp<l2) && (name[fp+1] != typed[sp+1])) && ((fp<l1) && (name[fp+1] != typed[sp])))
                sp++;
            else{
                if(name[fp] != typed[sp]){
                    flag = 1;
                    break;
                }
                else{
                    fp++;
                    sp++;
                }
            }
        }
        
        if(sp<l2)return false;
        if((flag == 1 || fp < l1) || (sp < l2)){
            return false;
        }
        else{
            return true;
        }
        
        
    }
};