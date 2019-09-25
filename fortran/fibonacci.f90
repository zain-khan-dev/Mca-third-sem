program fibonacci
      Integer n,first,second,temp
      first=1
      second=1
      print *,"Enter the value till which you want fibonacci numbers"
      read(*,*)n
      write(*,'(I10)')first
      write(*,'(I10)')second
      do while(n>3)
        temp=second
        second=second+first
        first=temp
        write(*,'(I10)')second
        n=n-1
      end do
end program fibonacci
