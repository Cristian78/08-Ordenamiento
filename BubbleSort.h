#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <class T>
void bubbleSort(T *vect, unsigned long tamanio){

    for(int i=1; i<tamanio; i++){
        for(int j=0; j<tamanio-1; j++){
            if(vect[j]>vect[j+1]){
                T aux = vect[j];
                vect[j] = vect[j+1];
                vect[j+1] = aux;
            }
        }
    }
}

#endif //BUBBLESORT_H
