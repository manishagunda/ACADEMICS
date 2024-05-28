interface Interface1 {
    void method1();
}

interface Interface2 {
    void method2();
}

class ParentClass {
    void commonMethod() {
        System.out.println("Common method in ParentClass");
    }
}

class ChildClass extends ParentClass implements Interface1, Interface2 {
    public void method1() {
        System.out.println("Method from Interface1");
    }

    public void method2() {
        System.out.println("Method from Interface2");
    }
}

public class MultipleInheritanceExample {
    public static void main(String[] args) {
        ChildClass child = new ChildClass();
        
        // Calling methods from interfaces
        child.method1();
        child.method2();
        
        // Calling a method from the parent class
        child.commonMethod();
    }
}
