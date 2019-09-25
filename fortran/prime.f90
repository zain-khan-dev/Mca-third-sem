program prime
    integer :: s,i,e
    Logical :: tf
    i=0
    print *,"Enter the range in which you want prime numbers"
    read(*,*)s,e
    do while(s<=e)
      tf=.TRUE.
      i=2;
      do while(i<=s/2)
        if(mod(s,i).EQ.0) then
            tf=.FALSE.
            exit
        end if
        i=i+1
      end do
      if(tf) then
        print *,s
      end if
      s=s+1
    end do

end program prime
