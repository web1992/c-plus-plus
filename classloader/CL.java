import java.lang.reflect.Method;
import java.nio.file.Files;
import java.nio.file.Paths;

public class CL {
    private native Class<?> makeClass(String name, byte[] bytes);

    static {
        System.loadLibrary("CL");
    }

    public native void DisplayHello();

    public static void main(String[] args) throws Exception {

        new CL().DisplayHello();

        byte[] bytes = Files.readAllBytes(Paths.get("ApplicationMain.class"));
        Class clazz = new CL().makeClass("ApplicationMain", bytes);

        System.out.println("class is " + clazz);
        Method method = clazz.getMethod("main", String[].class);
        String[] _args = new String[]{};
        method.invoke((Object)null,(Object) _args);
    }

    public static void work() {
        System.out.println("work");
    }

}