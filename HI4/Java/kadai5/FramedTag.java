class FramedTag extends Tag{
    int padd;
    int hei;
    int wid;

    FramedTag(String name,int padd){
        super(name);
        this.padd=padd;
    }

    @Override
    void show(){
        wid=padd*2+2+name.length();
        hei=padd*2+3;
        
        for(int i=0; i<padd*2+3; i++){
            for(int j=0; j<padd*2+2+name.length(); j++){
                if(i!=padd+1){
                    if((i<=0 || i>=hei-1)&&(j<=0||j>=wid-1))
                        System.out.print('+');
                    else if((i==0||i==hei-1))
                        System.out.print('-');
                    else if((j==0 ||j==wid-1))
                        System.out.print('|');
                    else
                        System.out.print(' ');
                }
                else{
                    if(j==0|| j==hei-1)
                        System.out.print('|');
                    else if(j<padd+1 || j>padd+1)
                        System.out.print(' ');
                    else
                        System.out.print(name);
                }
            }
            System.out.println();
        }
    }
}
