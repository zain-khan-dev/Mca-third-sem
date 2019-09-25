program p
      integer i /0/
      Parameter(eps =0.0001)
      real x1,x2,x3
      logical flag /.True./
      f(x)=cos(x)-x*exp(x)
      read *,x1,x2
      do while(f(x1)*f(x2).GT. 0)
      print *,"enter a valid value of x1 and x2"
      read *,x1,x2
      end do
      do while(flag .and. i.LT.100)
      x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1))
      if(abs(f(x3)) .LE. eps) then
          flag =.False.
      end if
      i=i+1
      if(f(x3)*f(x1).LT.0) then
          x2=x3
      else
          x1=x3
      end if
      end do
      print *,x3
      print *,f(x3)
end program p
