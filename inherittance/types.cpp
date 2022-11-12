// types of inheritance

// 1_ single inheritance
// 2_ multilevel
// 3_ multiple inheritance
// 4_ heirarchical
// 5_ hybrid


// single inheritance
class A
{

};

class B : public A
{

}


//********************


// 2_ multilevel
class a
{

};

class b : public a
{

};

class c : public b
{

}

//***********************


// 3_ multiple inheritance
class a1
{

};

class a2
{

};

class b : public a1, public a2
{

}

//**************************

// 4_ heirarchical
class a
{

};
 
class b : public a 
{

};

class b2 : public a
{

};