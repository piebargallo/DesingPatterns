import singleton;

int main()
{
	// Access the Singleton instance
	Singleton& singleton = Singleton::getInstance();

	// Use the Singleton instance
	singleton.someOperation();

	// Attempting to create another instance will not work
	// Singleton anotherInstance; // This line would not
	// compile

	return 0;
}
