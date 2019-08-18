int N, temp;
vector<int> v;
cin >> N;
for(int i = 0; i < N; i++){
    cin >> temp;
    v.push_back(temp);
}
cin >> temp;    
if( rem < v.size() )
    v.erase(v.begin() + rem - 1); 
int a, b;
cin >> a >> b;    
if( a < b   &&    b < v.size() )
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
cout << v.size() << endl;
for(auto _v : v)
    cout << _v << " ";
cout << endl;
return 0;
}