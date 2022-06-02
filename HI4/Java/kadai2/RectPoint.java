class RectPoint{
    private int x;
    private int y;
    private int quad;

    RectPoint(int x,int y){
        this.x=x;
        this.y=y;
        this.quad=quad;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    int getQuad(){
        return getWitchQuad();
    }

    private int getWitchQuad(){
        if(x>0 && y>0){
            quad=1;
        }
        else if(x<0 && y>0){
            quad=2;
        }
        else if(x<0 && y<0){
            quad=3;
        }
        else if(x>0 && y<0){
            quad=4;
        }
        else{
            quad=0;
        }
        return quad;
    }

    boolean isSameAs(RectPoint a){
        if(a.x==x && a.y==y){
            return true;
        }
        else{
            return false;
        }
    }
}