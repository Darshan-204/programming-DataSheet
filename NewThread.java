class NewThread implements Runnable
{
    Thread t;
    NewThread()
    {
        t=new Thread(this,"Demo Thread");
        System.out.println("child thred"+t);
        t.start();
    }
    public void run()
    {
        try{
            for(int i=5;i>=0;i--)
            {
                System.out.println("child thread:"+i);
                Thread.sleep(500);
            }
        }
        catch(InterruptedException e)
        {
            System.out.println("child interrupted");
        }
        System.out.println("child exists");

    }
    public static void main(String[] args) {
        new NewThread();
        try
        {
            for(int i=5;i>=0;i--)
            {
                System.out.println("main thread"+i);
                Thread.sleep(2000);
            }
        }
        catch(Exception e)
        {
            System.out.println("main Interrupted");
        }
        System.out.println("main exists");
    }
}
