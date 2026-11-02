class Authentication
{
    public void check_password(String password) throws Exception
    {
          if(!password.equals("Aditya123"))
          {
            throw new Exception("Password is not matching");
          }
          else
          {
            System.out.println("Password is correct");
          }
    }
}



public class Throw_Throws_implementation {
     public static void main(String[] args) {
        Authentication obj = new Authentication();
        try
        {
          obj.check_password("Aditya123");
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    
     }
     
}
