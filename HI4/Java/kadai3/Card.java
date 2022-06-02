import java.util.Random;

class Card{
    //スートを示す定数値.「Card.SUIT_SPADE」といった表現で取得できる.
    public static final int SUIT_SPADE=0;
    public static final int SUIT_HEART=1;
    public static final int SUIT_DIAMOND=2;
    public static final int SUIT_CLUB=3;

    private int suit;
    private int number;

    Card(){
        Random random=new Random();
        suit=random.nextInt(4);
        number=random.nextInt(13);
    }

    Card(int suit,int number){
        this.suit=suit;
        this.number=number;
    }

    boolean isStrongerThan(Card c){
        if(c.number<number){
            return true;
        }
        else if(c.number>number){
            return false;
        }
        else{
            if(c.suit>suit){
                return true;
            }
            else{
                return false;
            }
        }
    }

    boolean isSameAs(Card c){
        if(c.number==number && c.suit==suit){
            return true;
        }
        else{
            return false;
        }
    }
    
    @Override
    public String toString(){
        String result="";
        switch(suit){
            case SUIT_SPADE:
                result="SPADE   ["+number+"]";
                break;

            case SUIT_CLUB:
                result="CLUB    ["+number+"]";
                break;
        
            case SUIT_DIAMOND:
                result="DIAMOND ["+number+"]";
                break;

            case SUIT_HEART:
                result="HEART   ["+number+"]";
                break;
        }
        return result;
    }
}


