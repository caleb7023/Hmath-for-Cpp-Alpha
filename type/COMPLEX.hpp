#ifndef COMPLEX
#define COMPLEX

/* 
   Hmath's type "compex" 
*/

/* 
    Go use to:
            Win : Ctrl + G
            Mac : Cmd  + G
  
   complex_a + complex_b  :23

*/

class complex{

    private:
        double double_real_part = 0;
        double double_imag_part = 0;
    
    public:
        complex operator()(double real_part, double imag_part){
            this->double_real_part = real_part;
            this->double_imag_part = imag_part;
            return *this;
        };
        
        double real(){
            return this->double_real_part;
        };

        double imag(){
            return this->double_imag_part;
        };

        // add
          complex operator+(complex value){
              complex ans;
              ans(this->double_real_part + value.double_real_part,
                  this->double_imag_part + value.double_imag_part);
              return ans;
          };

          complex operator+(double value){
              complex ans;
              ans(this->double_real_part + value,
                  this->double_imag_part);
              return ans;
          };

          complex operator+=(complex value){
              *this = *this + value;
              return *this;
          };

          complex operator+=(double value){
              *this = *this + value;
              return *this;
          };

        // subtraction
          complex operator-(complex value){
              complex ans;
              ans(this->double_real_part - value.double_real_part,
                  this->double_imag_part - value.double_imag_part);
              return ans;
          };

          complex operator-(double value){
              complex ans;
              ans(this->double_real_part - value,
                  this->double_imag_part);
              return ans;
          };

          complex operator-(void){
              complex ans;
              ans(-this->double_real_part, -this->double_imag_part);
              return ans;
          };
        
        // multiply
          complex operator*(complex value){
              complex ans;
              ans((this->double_real_part * value.double_real_part) - (this->double_imag_part * value.double_imag_part),
                  (this->double_real_part * value.double_imag_part) + (this->double_imag_part * value.double_real_part));
              return ans;
          };

          complex operator*(double value){
              complex ans;
              ans(this->double_real_part * value,
                  this->double_imag_part * value);
              return ans;
          };

          complex operator*=(complex value){
            *this = *this * value;
            return *this;
          }

          complex operator*=(double value){
            *this = *this * value;
            return *this;
          }

        // division
          complex operator/(complex value){
              complex ans;
              double tmp_value = (value.double_real_part * value.double_real_part) + (value.double_imag_part * value.double_imag_part);
              ans(((this->double_real_part * value.double_real_part) + (this->double_imag_part * value.double_imag_part)) / (tmp_value),
                  ((this->double_real_part * value.double_imag_part) - (this->double_imag_part * value.double_real_part)) / (tmp_value));
              return ans;
          };
  
          complex operator/(double value){
              complex ans;
              ans(this->double_real_part / value,
                  this->double_imag_part / value);
              return ans;
          };

        complex operator=(complex value){
            this->double_real_part = value.double_real_part;
            this->double_imag_part = value.double_imag_part;
            return *this;
        };

        // You can't calculate belows functions.

        // Bad symbol
        // comparing_error

        // operator< (complex);
        // operator> (complex);
        // operator<=(complex);
        // operator>=(complex);

};

complex rcomplex(double real, double imag){
    complex ans;
    ans(real, imag);
    return ans;
}

#endif