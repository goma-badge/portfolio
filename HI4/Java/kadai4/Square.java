class Square{
    int size;

    Square(){
        this.size=5;
    }
    void draw(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++)
                    System.out.print('#');
            System.out.println();
        }
    }
}