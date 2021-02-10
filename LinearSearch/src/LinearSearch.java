public class LinearSearch {
    private LinearSearch() {};
    public static <E> int search(E[] data,E target) {
        for(int i=0;i<data.length;i++)
            if(data[i].equals(target))
                //判断类对象值相等
                return i;
        return -1;
    }
    public static void main(String[] args) {

        Integer[] data = {89,0,67,46,36,27,78};
        int res = LinearSearch.search(data,27);
        System.out.println(res);

        int res1 = LinearSearch.search(data,9);
        System.out.println(res1);

        Student[] students = {new Student("Alice"),
                new Student("Bobo"),
                new Student("Charles")};
        Student bobo = new Student("Bobo");

        int res2 = LinearSearch.search(students,bobo);
        System.out.println(res2);
    }
}
