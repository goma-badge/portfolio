class DecoratedTag extends Tag{
    int i;
    char decochar;
    int decolen;

    DecoratedTag(String name,char decochar,int decolen){
        super(name);
        this.decochar=decochar;
        this.decolen=decolen;
    }

    @Override
    void show(){
        for(i=0; i<decolen; i++){
            System.out.print(decochar);
        }
        System.out.print(" "+name+" ");
        for(i=0; i<decolen; i++){
            System.out.print(decochar);
        }
        System.out.println();
    }
}
