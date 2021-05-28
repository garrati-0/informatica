void selection_sort(int arr[], int lunghezza) {
    int i,j;
    int numero_minore;

    for (i = 0; i < lunghezza-1; i++){

        numero_minore = i;

        for (j = i + 1; j < lunghezza; j++){

            if (arr[j] < arr[numero_minore]) {
                numero_minore = j;
            }

		}

        int tmp = arr[i];
        arr[i] = arr[numero_minore];
        arr[numero_minore] = tmp;
    }
}

int main(void)
{
    int vect[]={5,2,8,1,7,8,5};
    selection_sort(vect,7);
    return 0;
}