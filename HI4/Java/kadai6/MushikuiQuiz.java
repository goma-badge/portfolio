import java.util.*;
class MushikuiQuiz extends Quiz{
    private Entry ent;
    int blank;
    int i;

    MushikuiQuiz(Entry ent, int blank){
        super(ent);
        this.ent = ent;
        this.blank = blank;
    }
    
    public String getHint(){
        String str="";

        for (i=0; i<this.ent.getWord().length(); i++){
            if(i%this.blank == 0){
                str+="_";
            }
            else{
                str+=String.valueOf(this.ent.getWord().charAt(i));
            }
        }
        return str;
    }

    @Override
    void show(){
        super.show();
        System.out.println("Hint : " + this.getHint());
    }
}