const int MaxSize = 100;

template<class DataType>
class SeqList
{
public:
	SeqList() { length = 0; }
	SeqList(DataType a[], int n);
	~SeqList() {}
	int Length() { return length; }
	DataType Get(int i);
	int Locate(DataType x);
	void Insert(int i, Datatype x);
	DataType Delete(int i);
	void PrintList();
private:
	DataType data[MaxSize];
	int length;
};

template<class DataType>
SeqList<DataType>::SeqList(DataType a[], int n)
{
	if (n > MaxSize)throw"invalid parameter";
	for (i = 0; i < n; i++)
		data[i] = a[i];
	length = n;
}

template<class DataType>
DataType SeqList<DataType>::Get(int i)
{
	if (i<1 || i>length)throw"invalid index";
	else return data[i - 1];
}

template<class DataType>
int SeqList<DataType>::Locate(DataType x)
{
	for (i = 0; i < length; i++)
		if (data[i] == x)return i + 1;
	return 0;
}

template<class DataType>
void SeqList<DataType>::Insert(int i, DataType x)
{
	if (length >= MaxSize)throw"out of range";
	if (i<1 || i>length + 1)throw"invalid index";
	for (j = length; j >= i; j--)
		data[j] = data[j - 1];
	data[i - 1] = x;
	length++;
}

template<class DataType>
DataType SeqList<DataType>::Delete(int i)
{
	if (length == 0)throw"out of range";
	if (i<1 || i>length)throw"invalid index";
	x = data[i - 1];
	for (j = i; j < length; j++)
		data[j - 1] = data[j];
	length--;
	return x;
}

template<class DataType>
void SeqList<DataType>::PrintList()
{
	for (i = 0; i < length; i++)
		cout << data[i];
}
