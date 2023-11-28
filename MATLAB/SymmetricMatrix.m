%Program that creates a 5x5 symmetric matrix where (i,j) element = i/j if
%j>=i
%A symmetric matrix is a matrix which is equal to its transponse matrix
%i.e B = B'
%if j >= i element (i,j) will be i/j otherwise the element will be element (j,i)

function SymmetricMatrix
A = [];
for i = 1:3
   for j = 1:3
      if j >= i
         A(i,j) = i/j;
      else
          A(i,j) = A(j,i);
      end
   end
end
disp(A)
end