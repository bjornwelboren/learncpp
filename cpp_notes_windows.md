## show type, auto detect data type

```c++
auto randomVar = 300u;
std::cout << typeid(randomVar).name() << std::endl; // Prints unsigned int
```

```c++
//For every character in myName surround the character with brackets
for ( char x : myName )
{	
std::cout << "[" << c << "]" << std::endl; 
}
```

## control flow with jump

```c++
int n = 11;
myLabel:
	--n;
	cout << n << endl;
	if (n > -666) goto myLabel;
	cout << "-666 reached" << endl;
```


