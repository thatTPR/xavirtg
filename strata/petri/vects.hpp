#pragma once
#include <assert>
#include <memory>
#include <initializer_list>
using bvec2=bool[2] ; 
using bvec3=bool[3] ;
using bvec4=bool[4] ;
using dvec2=double[2] ;  
using dvec3=double[3] ;  
using dvec4=double[4] ;  //
using ldvec2=long double[2] ;  
using ldvec3=long double[3] ;  
using ldvec4=long double[4] ;  //
using uvec2=unsigned int[2] ;
using uvec3=unsigned int[3] ;
using uvec4=unsigned int[4] ;
using ivec2=int[2] ;
using ivec3=int[3] ;
using ivec4=int[4] ;//
using luvec2=long unsigned int[2] ;
using luvec3=long unsigned int[3] ;
using luvec4=long unsigned int[4] ;
using livec2=long int[2] ;
using livec3=long int[3] ;
using livec4=long int[4] ;//
using vec2=float[2] ;
using vec3=float[3] ;
using vec4=float[4] ;//
using bmat2x2=bool[2][2] ;
using bmat2x3=bool[2][3] ;
using bmat2x4=bool[2][4] ;
using bmat3x2=bool[3][2] ;
using bmat3x3=bool[3][3] ;
using bmat3x4=bool[3][4] ;
using bmat4x2=bool[4][2] ;
using bmat4x3=bool[4][3] ;
using bmat4x4=bool[4][4] ;
using dmat2x2=double[2][2] ;
using dmat2x3=double[2][3] ;
using dmat2x4=double[2][4] ;
using dmat3x2=double[3][2] ;
using dmat3x3=double[3][3] ;
using dmat3x4=double[3][4] ;
using dmat4x2=double[4][2] ;
using dmat4x3=double[4][3] ;
using dmat4x4=double[4][4] ;
using umat2x2=unsigned int[2][2] ;
using umat2x3=unsigned int[2][3] ;
using umat2x4=unsigned int[2][4] ;
using umat3x2=unsigned int[3][2] ;
using umat3x3=unsigned int[3][3] ;
using umat3x4=unsigned int[3][4] ;
using umat4x2=unsigned int[4][2] ;
using umat4x3=unsigned int[4][3] ;
using umat4x4=unsigned int[4][4] ;
using imat2x2=int[2][2] ;
using imat2x3=int[2][3] ;
using imat2x4=int[2][4] ;
using imat3x2=int[3][2] ;
using imat3x3=int[3][3] ;
using imat3x4=int[3][4] ;
using imat4x2=int[4][2] ;
using imat4x3=int[4][3] ;
using imat4x4=int[4][4] ;
using fmat2x2=float[2][2] ;
using fmat2x3=float[2][3] ;
using fmat2x4=float[2][4] ;
using fmat3x2=float[3][2] ;
using fmat3x3=float[3][3] ;
using fmat3x4=float[3][4] ;
using fmat4x2=float[4][2] ;
using fmat4x3=float[4][3] ;
using fmat4x4=float[4][4] ;//
using ldmat2x2=long double[2][2] ;
using ldmat2x3=long double[2][3] ;
using ldmat2x4=long double[2][4] ;
using ldmat3x2=long double[3][2] ;
using ldmat3x3=long double[3][3] ;
using ldmat3x4=long double[3][4] ;
using ldmat4x2=long double[4][2] ;
using ldmat4x3=long double[4][3] ;
using ldmat4x4=long double[4][4] ;
using lumat2x2=long unsigned int[2][2] ;
using lumat2x3=long unsigned int[2][3] ;
using lumat2x4=long unsigned int[2][4] ;
using lumat3x2=long unsigned int[3][2] ;
using lumat3x3=long unsigned int[3][3] ;
using lumat3x4=long unsigned int[3][4] ;
using lumat4x2=long unsigned int[4][2] ;
using lumat4x3=long unsigned int[4][3] ;
using lumat4x4=long unsigned int[4][4] ;
using limat2x2=long int[2][2] ;
using limat2x3=long int[2][3] ;
using limat2x4=long int[2][4] ;
using limat3x2=long int[3][2] ;
using limat3x3=long int[3][3] ;
using limat3x4=long int[3][4] ;
using limat4x2=long int[4][2] ;
using limat4x3=long int[4][3] ;
using limat4x4=long int[4][4] ;

 template <typename T >
 struct arrdepth {
     using _ty = std::remove_extent_t<T>;
    static constexpr int depth = std::is_array_v<_ty>?(arrdepth<_ty>::depth+1):0;
    static constexpr size_t size= size>arrdepth<_ty>::size?arrdepth<_ty>::size:sizeof(T[0]); 
 
 };
template <typename T>
struct arrtype {
    static constexpr bool vec = std::is_array_v<T>;
    static constexpr bool mat = std::is_array_v<T> && std::is_array_v<std::remove_extent_t<T>>;
    static constexpr bool depth = arr_depth<T>::depth;
    static constexpr bool sizeprim = arr_depth<T>::size;
    static constexpr bool arrd = depth==1; 
    static constexpr size_t size_prime=sizeof(T[0][0])/sizeof(T[0]);
    static constexpr bool arrvec = depth==2?((sizeof(T[0])>(sizeprim*4))?true:false):false;
    static constexpr bool matd = depth==2?(sizeof(T[0])>(sizeprim*4))?true:false):false;
    static constexpr bool matvec = mat and (depth == 3) ? true : false ;
    static constexpr bool matmat = mat and (depth == 4) ? true : false ;
};

template <typename T,size_t r=0, size_t c=0>
struct arrc {
    using d=std::conditional<c==0,T[r],T[r][c]>::type;
    static constexpr size_t row = r;
    static constexpr size_t col = c ;
    static bool mat=c>0; 
};
template <typename T, size_t s=0>
class vec {
    public:
    using ty= T[s];
    T* d = new T[s];
    bool size_t s;
    T& operator[](size_t s){
        return d[s];
    };
    arr(T* n){this->s = sizeof(n)/sizeof(n[0]);this->d = new T[this->s]}
    void operator=(T* n){
        this = new vec(n)
       
    };
    arr(size_t _r){this->row = _r; this->col = _c; this->d =new T[r]}
};
template <typename T,size_t r=0, size_t c =0>
class mat {
    public:
    vec<T,c>[r] d;
     size_t row, col;
    vec<T>& operator[](size_t s){
        return d[s];
    };
    mat(T** n){this->row = sizeof(n)/sizeof(n[0]); this->d = new[this->row] vec<T>(sizeof(n[0])/sizeof(n[0][0]))}
    operator=()(T** n){
        this = new mat(n); 
    };

    mat(size_t _r, size_t _c ){this->row = _r;this->col = _c; this->d = new T[r][c]};
};
#ifdef TENSOR_MAT
template <typename T,size_t first>
class ten {
    using ty =T[first]
    using next = NULL;
    using order = 1;
    static constexpr bool sizes[] = {first};
    using type = 
};
template <typename T ,size_t first, size_t... s>
class ten{
    using ty=vec<T,first>::ty;
    using next = ten<ty,s...>
    using order = 1+ next::order;
    static constexpr bool sizes[] = {first}+next::sizes;    
    using type = next::ty;
    type data;
    ten& operator[](size_t pos){
        return this->data[pos];
    };
    ten& operator+=(ten& n ){
        
    };
    ten& operator*=(ten& n){

    };
    ten& operator*=(ten& n){

    };
    ten& operator-=(ten& n){

    };
    ten& operator*(ten& n){if}
    ten& operator+(ten& n){if}
    ten& operator-(ten& n){if}
    ten& operator/(ten& n){if}
    ten& operator%(ten& n){if}
    
   
    T operator[](size_t last){
        ten<T,sizes[order-1]> res = this[last];
    };
    T operator[](size_t First,size_t... arg){
        assert(sizeof...(arg) + sizeof(First) > sizeof(sizes)/sizeof(first) , "To many parameters");
        assert(sizeof...(arg) + sizeof(First) < sizeof(sizes)/sizeof(first) , "To few parameters");
        T ret = this->data[First].operator[](arg...);
        return ret;
    };
    ten get_ten_index(size_t no , size_t last,){

    };
    ten get_ten_index(size_t no, size_t midF , size_t... args){

    };
    ten get_ten_ind(size_t no, size_t last){
        size_t ncur = no+1;
        for(int i = no ; i < size_t )
         this->data[last]
    };
    ten get_ten_ind(size_t no,size_t First, size_t... arg){
        sizeof...(arg) + sizeof(First) > sizeof(sizes)/sizeof(first) , "To many parameters");
        size_t ncur = no+1;
        ten<First,arg...> tens = this->data[First]->get_ten_ind_cur(ncur,arg...)
        
    };

    ten operator[](size_t First,size_t... s){
        return this->get_ten_ind(0,First,arg...);
    };
    ten();
};

#endif

template <typename T  >
class vect {
    public:
    T* data;
    size_t s;// Current size
    size_t tsize;
    T* data(){
        return this->data;
    };
    T& operator[](size_t s){
        return this->data[s];
    };
    void resize(size_t a){
        T* n = new T[a];
        if(a<this->s){
            for(int i = 0 ; i< a;i++){n = this->data[i];};
        }
        else{
            for(int i ; i < this->s ; i++ ){
                n[i] = this->data[i]; 
            };
        } ;
        this->data=n;
        this->s= a;
    };
    void push(){

    };
    void pop(){

    };
    
    T& insert(size_t pos, T elem){
        T* n = new T[this->s + 1];
        for(int i = 0 ; i < pos ; i++){
            n[i] = this->data[i];
        };
        n[pos] = elem;
        for(int i = pos+1 ; i < this->s;i+=2){
            n[i]=this->data[i-1];
        };
        this->data=  n ; 
        this->s +=1;
    };
    vect operator[](size_t a, size_t b){
        vect<T> res ;
        for(int i =a , i<=b ; i++){
            res[i-a] = this->data[i];
        };
        return res;
    };
    T& operator[](size_t pos){
        assert(pos<this->s, "Pos bigger than size");
        return this->data[pos];
    };
    vect& operator=(std::initializer_list<T> list){
        T* n = new T[list.size()];
        n=list;
        this->data=n;
        this->size = list.size();
    };
    operator(size_t size){
        this->s = size;
        this->data = new T[size];
    };  
};  