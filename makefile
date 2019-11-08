sol1.x : ej1.cpp
	c++ ej1.cpp -o sol1.x
	./sol1.x
    
sol2.x : ej2.cpp
	c++ ej2.cpp -o sol2.x
	./sol2.x
	
clean :
	rm sol1.x sol2.x