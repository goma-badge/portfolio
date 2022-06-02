class Triple{
    int x;
    int y;
    int z;

    void set(int num1,int num2,int num3){
        x=num1;
        y=num2;
        z=num3;
    }
    void show(){
        System.out.println(x+"-"+y+"-"+z);
    }
    int min(){
        if(x<y&&x<z)
            return x;
        if(y<x&&y<z)
            return y;
        else
            return z;
    }
    boolean haspair(){
        if(x==y&& x!=z)
            return true;
        if(x==z&& x!=y)
            return true;
        if(y==z&& y!=x)
            return true;
        if(x==y&& x==z)
            return true;
        if(x!=y&& x!=z)
            return false;
        else
            return false;
    }
    boolean isAllSame(){
        if(x==y&&x==z)
            return true;
        else
            return false;
    }
    void add(Triple t){
        Triple t2 =new Triple();
        t2.set(t.x+x,t.y+y,t.z+z);
        t2.show();
    }
}

