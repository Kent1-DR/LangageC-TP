int size = 0;
int* tableau;

void init() {
    size = 10;
    tableau = (int *) malloc(size * sizeof(int));
}


int getSize() {

    return size;
}

void add(int index, int value) {
    if (index>size)
    {
        int newSize = (index % 10 + 1) * 10;
        int* newTab= (int*)malloc(newSize * sizeof(int));

        for (int i = 0; i < size; i++)
        {
            newTab[i] = tableau[i];
        }


        free(tableau);

            size = newSize;
            tableau = newTab;
    }
    
tableau[index] = value;
}


int get(int index) {
    return tableau[index];
}


}int removeTab(int index ){
    tableau[index]=0;
}


void main() {
    init();
    add(5, 10);
    
}
