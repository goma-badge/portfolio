class CardTest{
    public static void main(String[] args){
        System.out.println(new Card());
        System.out.println(new Card());
        System.out.println(new Card());
        System.out.println();//一行あける

        Card c1= new Card(Card.SUIT_SPADE,4);
        Card c2= new Card(Card.SUIT_HEART,12);
        Card c3= new Card(Card.SUIT_CLUB,4);
        Card c4= new Card(Card.SUIT_SPADE,4);
        Card c5= new Card(Card.SUIT_HEART,4);
        Card c6= new Card(Card.SUIT_DIAMOND,4);
        
        //isStrongerThanメソッドの判定
        System.out.println(c1+"  is stronger than "+c2+"? "+c1.isStrongerThan(c2));
        System.out.println(c1+"  is stronger than "+c3+"? "+c1.isStrongerThan(c3));
        System.out.println(c1+"  is stronger than "+c4+"? "+c1.isStrongerThan(c4)); 
        System.out.println(c1+"  is stronger than "+c5+"? "+c1.isStrongerThan(c5));
        System.out.println(c1+"  is stronger than "+c6+"? "+c1.isStrongerThan(c6));
        System.out.println(c3+"  is stronger than "+c5+"? "+c3.isStrongerThan(c5));
        System.out.println(c3+"  is stronger than "+c6+"? "+c3.isStrongerThan(c6));
        System.out.println(c5+"  is stronger than "+c6+"? "+c5.isStrongerThan(c6));
        System.out.println();//一行あける

        //同じかどうかの判定
        System.out.println(c1+"  is same as "+c2+"? "+c1.isSameAs(c2));
        System.out.println(c1+"  is same as "+c4+"? "+c1.isSameAs(c4));

    }
}