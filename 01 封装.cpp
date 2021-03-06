//面向对象的三大特性：封装、继承、多态
// 具有相同性质的对象，可以抽象称为类，对象是类的具体个体
// 实例化：通过类创建具体的对象的过程
//（万事万物皆对象，对象上有其属性和行为）


//01 封装
//封装的意义：
	//1.将属性和行为作为一个整体封装起来，表现生活中的事物
	//2.将属性和行为加以权限控制（把属性和行为放在不同的权限下，加以控制）

//1.1 封装的实现
	//1.1.1 属性和行为
		// class 类名{访问权限： 属性1;属性2;...行为1;行为2;...};
		// （然后通过类创建对象，再给对象的属性赋值或调用对象的函数进行操作 ）
	//1.1.2 访问权限
		//1.public 公共权限 ：成员 类内可以访问 类外可以访问
		//2.protected 保护权限 ：成员 类内可以访问 类外不可以访问（儿子可以访问父亲的保护内容）
		//3.private 私有权限 ：成员 类内可以访问 类外不可以访问（儿子不可以访问父亲的私有内容）
		//（struct和class的唯一区别：struct默认权限为公共，class默认权限为私有）

//1.2 成员属性设置为私有的优点
	//1.将所有成员属性设置为私有，可以自己控制读写权限
		//在public权限下设置接口函数，如：void setName(string name)--写     string getName()--读 
	//2.对于写权限，我们可以检测数据的有效性

//可以将不同的类写入到不同的文件中（成员函数的实现记得加作用域，如 void Student::getName()）
//一个类可以做另一个类的成员属性







//01
//


//1.1
	//1.1.1 
		// 
		// 
	//1.1.2 
		// 
		// 
	//1.1.3
		// 
		// 
		// 

//1.2
	//1.2.1 
		// 
		// 
	//1.2.2 
		// 
		// 
	//1.2.3
		// 
		// 
		// 