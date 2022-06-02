import java.util.*;
class Quiz{
    private Entry ent;

    Quiz(Entry ent){
        this.ent=ent;
    }
    
    Entry getEntry(){
        return ent;
    }

    void show(){
        System.out.println(getEntry().getMeaning());
    }

    boolean ask(){
        Scanner scan=new Scanner(System.in);
        String str = scan.nextLine();

        return str.equals(getEntry().getWord());
    }
}