package cn.web1992.cl;
import java.lang.reflect.Method;
import java.nio.file.Files;
import java.nio.file.Paths;

// javac ./cn/web1992/cl/*.java  
// javah cn.web1992.cl.CL
// java cn.web1992.cl.CL
public class CL {
    private native Class<?> makeClass(String name, byte[] bytes);

    static {
        System.loadLibrary("CL");
    }

    public native void DisplayHello();

    public final native byte[] encByte(byte[] bytes);

    public static void main(String[] args) throws Exception {

        new CL().DisplayHello();

        // 加载父类
        // byte[] bytes1 = Files.readAllBytes(Paths.get("./cn/web1992/cl/AbsMain.class"));
        // Class clazz1 = new CL().makeClass("cn/web1992/cl/AbsMain", bytes1);

        // 加载当前类
        byte[] bytes = Files.readAllBytes(Paths.get("./cn/web1992/cl/ApplicationMain.class"));
        Class clazz = new CL().makeClass("cn/web1992/cl/ApplicationMain", bytes);

        System.out.println("class is " + clazz);
        Method method = clazz.getMethod("main", String[].class);
        String[] _args = new String[]{};
        method.invoke((Object)null,(Object) _args);
    }

    public static void work() {
        System.out.println("work");
    }

}