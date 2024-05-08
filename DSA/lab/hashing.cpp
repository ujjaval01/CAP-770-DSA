#include <iostream>
#include <vector>

using namespace std;

class HashTable {
    
public:

    HashTable(int size) : table(size, make_pair("", 0)), size(size) {}

    // Hash function
    int hashFunction(const string& key) {
        int hash = 0;
        for (char c : key) {
            hash = (hash * 31 + c) % size;
        }
        return hash;
    }
    

    // Insert a key-value pair into the hash table
    void insert(const string& key, int value) {
        int index = hashFunction(key);
        int originalIndex = index;
        // Linear probing to handle collisions
        while (!table[index].first.empty() && table[index].first != key) {
            index = (index + 1) % size;
            // If we return to the original index, the table is full
            if (index == originalIndex) {
                cerr << "Hash table is full!" << endl;
                return;
            }
        }
        // Insert or override the key-value pair
        table[index] = make_pair(key, value);
    }

    // Retrieve a value by key from the hash table
    int get(const string& key) {
        int index = hashFunction(key);
        int originalIndex = index;
        // Linear probing to find the key
        while (!table[index].first.empty()) {
            if (table[index].first == key) {
                return table[index].second;
            }
            index = (index + 1) % size;
            // If we return to the original index, the key was not found
            if (index == originalIndex) {
                break;
            }
        }
        cout << "Key not found!" << endl;
        return -1;
    }

    // Print the hash table
    void printTable() {
        for (int i = 0; i < size; ++i) {
            if (!table[i].first.empty()) {
                cout << i << ": " << table[i].first << " -> " << table[i].second << endl;
            }
        }
    }

private:
    vector<pair<string, int>> table;
    int size;
};

int main() {
    int a,b,c,d,e;
    cout<<"Enter first: ";
    cin>>a;
    cout<<"Enter second: ";
    cin>>b;
    cout<<"Enter third: ";
    cin>>c;
    cout<<"Enter fourth: ";
    cin>>d;
    cout<<"Enter fifth: ";
    cin>>e;

  
    // Create a hash table with a size of 10
    HashTable hashTable(10);
    // Insert some key-value pairs into the hash table
    hashTable.insert("key1", a);
    hashTable.insert("key2", b);
    hashTable.insert("key3", c);
    hashTable.insert("key4", d);
    hashTable.insert("key5", e);

    // Retrieve a value from the hash table
    cout << "Value for key2: " << hashTable.get("key2") << endl;

    // Print the hash table
    hashTable.printTable();
    cout<<"Enter a value who you Override an existing key: ";
    int x;
    cin>>x;
    // Override an existing key
    hashTable.insert("key2", x);
    cout << "After overriding key2 with value :"<< x << endl;
    hashTable.printTable();

    return 0;
}
