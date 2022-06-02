class Rectangle{
    int height;
    int width;

    int getArea(){
        return height*width;
    }
    void draw(boolean fills){
        if(fills == true){
            for(int astt=0; astt<height; astt++){
                for(int colt=0; colt<width; colt++)
                        System.out.print('*');
                System.out.println();
                }
            }
        if(fills == false){
            for(int astf=0; astf<height; astf++){
                for(int colf=0; colf<width; colf++)
                    if(astf ==0||astf==height-1||colf==0||colf==width-1)
                        System.out.print('*');
                    else
                        System.out.print(' ');
                System.out.println();
            }
        }
    }
}