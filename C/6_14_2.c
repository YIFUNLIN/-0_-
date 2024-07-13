if (SIZE % 2 == 0)
{
    printf("\nThe median is the average of elements %u and %u of\n"
           "the sorted %u element array.\nFor this run the median is %u + %u / 2 = %.1f\n\n",
           SIZE / 2, SIZE / 2 - 1, SIZE, answer[SIZE / 2], answer[SIZE / 2 - 1],
           (answer[SIZE / 2] + answer[SIZE / 2 - 1]) / 2.0);
}
else
{
    printf("\nThe median is element %u of\n"
           "the sorted %u element array.\nFor this run the median is %u\n\n",
           SIZE / 2, SIZE, answer[SIZE / 2]);
}