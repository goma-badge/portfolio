class CardSimulator {
    public static void main(String[] args) {
        int cpu1=0;
        int cpu2=0;
        int kai=Integer.parseInt(args[0]);

        for(int i=0;i<kai; i++){
            Card c1=new Card();
            Card c2=new Card();
            System.out.println(i+1+"回目");
            System.out.println("CPU1: "+ c1 + " vs " +"CPU2: " + c2);
            if (c1.isSameAs(c2)){
                System.out.println("引き分け");
            }else if (c1.isStrongerThan(c2)){
                System.out.println("CPU1" + "の勝ち");
                cpu1++;
            }else{
                System.out.println("CPU2" + "の勝ち");
                cpu2++;
            }System.out.println();
        }
        System.out.println("スコア:");
        System.out.println("    CPU1: "+cpu1);
        System.out.println("    CPU2: "+cpu2);

        if(cpu1==cpu2){
            System.out.println("引き分け");
        }else if(cpu1>cpu2){
            System.out.println("CPU1の勝ち！");
        }else{
            System.out.println("CPU2の勝ち！");
        }
    }
}
