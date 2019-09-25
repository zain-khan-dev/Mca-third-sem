program newton
      parameter(eps=0.000000001)
      real x1
      integer it /0/
      logical flag /.true./
      f(x)=x**3-4*x-9
      f1(x)=3*x*x-4
      print *,"enter the intial approximation of the root"
      read *,x1
      do while(flag .and. it .LT. 1000)
      x1=x1-f(x1)/f1(x1)
      if(abs(f(x1)).LT. eps) then
          flag=.false.
      end if
      it=it+1
      end do
      print *,x1
end program newton


