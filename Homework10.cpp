#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Считываем размер массива
    int n;
    if (!(cin >> n)) {
        cerr << "Ошибка ввода размера массива\n";
        return 1;
    }

    // Считываем сам массив
    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Считываем target
    long long target;
    cin >> target;

    // Для хранения ранее встреченных чисел и их индексов
    unordered_map<long long, int> mp;
    mp.reserve(n);

    for (int i = 0; i < n; ++i) {
        long long need = target - nums[i];
        // Если нужное дополнение уже встречалось — нашли ответ
        auto it = mp.find(need);
        if (it != mp.end()) {
            // Выводим два индекса (0-based). Если нужен 1-based — прибавьте +1.
            cout << it->second << " " << i << "\n";
            return 0;
        }
        // Иначе запоминаем текущее число и его индекс
        mp[nums[i]] = i;
    }

    // По условию гарантируется, что решение есть, но на всякий случай:
    cerr << "Решение не найдено\n";
    return 0;
}