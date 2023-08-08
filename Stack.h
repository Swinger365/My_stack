namespace MyStack{
    //Стек основан на такой структуре данных как односвязный список, которая реализуется ниже
    struct Node{
        double data;
        Node *previous;
    };//struct Node
    //Создание вершины стека
    Node *new_stack(double data){
        Node *top_of_stack = new Node;
        top_of_stack->data = data;
        top_of_stack->previous = 0;
        return top_of_stack;
    }//Node *new_stack
    //Проталкивает в стек значение
    void push(Node **top,double data){
        Node *new_element = new Node;
        new_element->data = data;
        new_element->previous = *top;
        *top = new_element;
    }//push
    //Для просмотра что находится на вершине стека
    inline double top(Node *top){
        return top->data;
    }//double peek
    //Удаляет элемент на вершине стека и возвращает его значение
    double pop(Node **top){
        Node *tmp = *top;
        double old_data = tmp->data;
        *top = (*top)->previous;
        delete tmp;
        return old_data;
    }//double pop
}//namespace MyStack
