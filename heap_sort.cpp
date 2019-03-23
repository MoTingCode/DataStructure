#include <stdlib.h>

/**
 * �����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
 */
void adjustHeap(int arr[], int i, int length)
{
    int temp = arr[i];//��ȡ����ǰԪ��i
    //��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
    for ( int k = i * 2 + 1; k < length; k = k * 2 + 1 )
    {
        //������ӽ��С�����ӽ�㣬kָ�����ӽ��
        if ( k + 1 < length && arr[k] < arr[k + 1] )
        {
            k++;
        }
        //����ӽڵ���ڸ��ڵ㣬���ӽڵ�ֵ�������ڵ㣨���ý��н�����
        if ( arr[k] > temp )
        {
            arr[i] = arr[k];
            i = k;
        }
        else
        {
            break;
        }
    }
    arr[i] = temp;//��tempֵ�ŵ����յ�λ��
}

/**
 * ����Ԫ��
 */
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


void sort(int arr[])
{
    //1.�����󶥶�
    for ( int i = arr.length / 2 - 1; i >= 0; i-- )
    {
        //�ӵ�һ����Ҷ�ӽ��������ϣ�������������ṹ
        adjustHeap(arr, i, arr.length);
    }
    //2.�����ѽṹ+�����Ѷ�Ԫ����ĩβԪ��
    for ( int j = arr.length - 1; j > 0; j-- )
    {
        swap(arr, 0, j);//���Ѷ�Ԫ����ĩβԪ�ؽ��н���
        adjustHeap(arr, 0, j);//���¶Զѽ��е���
    }

}


int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(arr);
    //    printf(Arrays.toString(arr));
}