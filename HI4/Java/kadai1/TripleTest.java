class TripleTest{
    public static void main(String[] args){

        System.out.println("[isAllSame メソッドの確認]");
        //１つ目
        Triple t1 = new Triple();
        t1.set(8,8,8);
        t1.show();
        System.out.println("すべて同じか："+t1.isAllSame());
        //２つ目
        Triple t2=new Triple();
        t2.set(8,5,8);
        t2.show();
        System.out.println("すべて同じか："+t2.isAllSame());
        //３つ目
        Triple t3=new Triple();
        t3.set(1,5,8);
        t3.show();
        System.out.println("すべて同じか："+t3.isAllSame());

        System.out.println("[min メソッドの確認]");
        //１つ目
        t1.set(8,8,8);
        t1.show();
        System.out.println("最小値："+t1.min());
        //２つ目
        t2.set(8,5,8);
        t2.show();
        System.out.println("最小値："+t2.min());
        //３つ目
        t3.set(1,5,8);
        t3.show();
        System.out.println("最小値："+t3.min());

        System.out.println("[haspair メソッドの確認]");
        //１つ目
        t1.set(8,8,8);
        t1.show();
        System.out.println("２つ以上同じ値か："+t1.haspair());
        //２つ目
        t2.set(8,5,8);
        t2.show();
        System.out.println("２つ以上同じ値か："+t2.haspair());
        //３つ目
        t3.set(1,5,8);
        t3.show();
        System.out.println("２つ以上同じ値か："+t3.haspair());

        System.out.println("[add メソッドの確認]");
        t1.show();
        System.out.println("足し合わせる属性値");
        t2.show();
        System.out.print("t1+t2を足した属性値:");
        t2.add(t1);
    }
}