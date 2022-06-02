class ExBox extends Box{
    boolean fills;
    char character;

    ExBox(int h, int w, boolean f, char c){
        super(h,w);
        fills=f;
        character=c;
    }

    @Override
    
    void draw(){
        for(int i=0; i<height; i++){
            for(int j=0; j<width; j++){
                if(fills==true){
                    System.out.print(character);
                }
                if(fills==false){
                    if(i==0||i==height-1||j==0||j==width-1)
                        System.out.print(character);
                    else
                        System.out.print(' ');
                }
            }
            System.out.println();
        }
    }
}