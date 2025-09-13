#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int MaxProfit = 0, bestBuy = prices[0];

    for(int i = 1 ; i < prices.size(); i++)
    {
        if(prices[i] > bestBuy)
        {
            MaxProfit = max(MaxProfit , prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return MaxProfit;
}

int main()
{
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the prices: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << "for day " << i << ": ";
        cin>>prices[i];
    }
    cout<<"The maximum profit is: "<<maxProfit(prices);
    return 0;
}
