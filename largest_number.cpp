class Solution
{
  public:
    static bool _camp(int a ,int b)
    {
      ostringstream  ss;
      ss<<a;
      string  sa=ss.str();
      ss.clear();
      
      ss<<b;
      string sb=ss.str();
      ss.clear();
      
      sa=sa+sb;
      sb=sb+sa;
      
      if(sa.compare(sb)>=0)
        return true;
      else
        return false;
      
    }
      
      string num2str(int i)
      {
        ostringstream ss;
        ss<<i;
        return ss.str();
      }
      
}
