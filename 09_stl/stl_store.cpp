#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <ctime>

using namespace std;

struct Product{
    int productId;
    string name;
    string category;

};
struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderTime;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Mobile", "Electronics"},
        {103, "Tea maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Sofa", "Home"},
    };

    deque<string> recentCustomer = {"c1", "c2", "c3", "c4"};
    recentCustomer.push_back("c5");
    recentCustomer.push_front("c6");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 2, "c1", time(0)});
    orderHistory.push_back({2, 102, 3, "c2", time(0)});
    orderHistory.push_back({3, 103, 4, "c3", time(0)});


    set<string> categories;
    for(const auto &product: products){//new syntax
        //insert the categories of product
        categories.insert(product.category);
    }

    map<int, int> productsStock = {//Binary Search tree
        {101, 12},
        {102, 13},
        {103, 14},
        {104, 115},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerId, order });
    }
    //look up is faster
    unordered_map<string, string> customerData = {//Hash Table
        {"c1", "Alice"},
        {"c2", "Bob"},
        {"c3", "Ethan"},
        {"c4", "Max"},
        {"c5", "Harry"},
    };



    return 0;
}