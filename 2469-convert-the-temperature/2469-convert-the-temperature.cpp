class Solution {
public:
    vector<double> convertTemperature(double celcius) {
       vector<double>ans;
        double x,y;
        x=celcius+273.15;
        y=celcius*1.80+32.00;
        
        ans.push_back(x);
        ans.push_back(y);
        
        return ans;
    }
};