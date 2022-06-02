import java.util.*;
class QuizSet{
    String name;
    List<Quiz> quizlist;
    int index;  //カードを指している位置

    QuizSet(String name){
        this.name=name;
        quizlist=new ArrayList<Quiz>();
        index=0;
    }

    void add(Quiz quiz){
        quizlist.add(quiz);
    }

    Quiz getNextQuiz(){
        index+=1;
        return quizlist.get(index-1);
    }

    int getSize(){
        return quizlist.size();
    }

    void shuffle(){
        Collections.shuffle(quizlist);
    }
    
    @Override
    public String toString(){
       return name + " クイズ数:"+ getSize();
    }
}