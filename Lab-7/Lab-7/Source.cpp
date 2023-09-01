#include<vector> 
#include<iostream> 
#include <algorithm> 
using namespace std;

class a {
public:
	vector<int> v;
	a(vector<int>& d);
	int maxi();
	void outv();
	void change();
	void clean();
	~a();
};
a::~a() {
	cout << "Деструктор\n";
}
a::a(vector<int>& d) {
	v = d;
}
int a::maxi() {
	int mx, mn;
	mx = *max_element(v.begin(), v.end());
	mn = *min_element(v.begin(), v.end());
	if (abs(mx) > abs(mn))
		return abs(mx);
	else
		return abs(mn);
}
void a::clean() {
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
}
void a::outv() {
	int i = 0;
	for (auto s : v) {
		cout << s << "  ";
		i++;
	}
	cout << endl;
}
void a::change() {
	replace_if(v.begin(), v.end(), [](int x) { return x < 0; }, 0);
}
void main() {
	int n;
	setlocale(LC_ALL, "rus");
	cout << "Введите колво : ";
	cin >> n;
	vector<int> v(n);
	for (int& s : v) {
		cout << "Введите значение : ";
		cin >> s;
		while (s < -10 || s>10) {
			cout << "Недопустимое значение, попробуйте снова: ";
			cin >> s;
		}

	}
	a ob(v);
	cout << "Максимальное число : " << ob.maxi() << endl;
	ob.change();
	cout << "Массив без отрицательных чисел : ";
	ob.outv();
	ob.clean();
	cout << "Массив уникальных чисел : ";
	ob.outv();

}
