#include "_ieigen.h"


namespace autowig
{
    void method_decorator_679630e3c6985aab89d1159e26ce3386(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_5f3ad177613c51b0a5af4ae36b4204e3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_b12b43b9f285596abff7e60aba09fdab(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_e0169467db215372aae8554c344f6e15(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_267e074f22525d5088a29292937bc22e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_98a7da6d6aa954a18e95601ef0f5311a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_8d5c4d9160145f3fb7adcd5537ff0101)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_7bfb5da706e7552caa2e1a1861848653)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_35b0e3160ee855ea9c44b04ffc7cbcea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_42acc0ce1e51584eaebf11d1abb1705d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_c279914e286354f59a580aef6eb851ac)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_4ecdef9de9255565a284bf24158de0de)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_bcd49b7df0ce5a7fbdfae8a454de0e39)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_42eeebca7eb05d9bb1cf1336f6e6dac3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b69b3e9f84895119b91c0f320dceb513)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_64e5e4439ab75287815311dab2e0e1be)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_679630e3c6985aab89d1159e26ce3386)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_5f3ad177613c51b0a5af4ae36b4204e3)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_9fdd5b6a42e95f3eb78d8b3ae4ae643c)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_cf0f019aed8b542fa4ff0415caf3f291)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_cd88dd6bc4715339a21ec7dcca120d94)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_66427c021ba35e4ab9eb1813a3e615f8)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_95a31a11735f589db16a3c8641b35c48)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b9ad9e4279a5576fbefa4824a6f4beef)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b12b43b9f285596abff7e60aba09fdab)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_eac26d600a7059fa896004bfe48ff445)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_e0169467db215372aae8554c344f6e15)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_df77dcdaca7b565091027fe0dc553928)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_f816de3534ce55d992cce7adf4147b29)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_1042218b218e586a8b2954c6542e3bf8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_a4b2c1f0dff7534b978f7dc5417c0929)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_24a8f5ace0f6571a94075a48f0cb0e8a)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_db48447469845f0cba465645dd3e8d24)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > > class_267e074f22525d5088a29292937bc22e("_MatrixBase_267e074f22525d5088a29292937bc22e", "", boost::python::no_init);
    class_267e074f22525d5088a29292937bc22e.def("diagonal_size", method_pointer_98a7da6d6aa954a18e95601ef0f5311a, "");
    class_267e074f22525d5088a29292937bc22e.def("squared_norm", method_pointer_8d5c4d9160145f3fb7adcd5537ff0101, "");
    class_267e074f22525d5088a29292937bc22e.def("norm", method_pointer_7bfb5da706e7552caa2e1a1861848653, "");
    class_267e074f22525d5088a29292937bc22e.def("stable_norm", method_pointer_35b0e3160ee855ea9c44b04ffc7cbcea, "");
    class_267e074f22525d5088a29292937bc22e.def("blue_norm", method_pointer_42acc0ce1e51584eaebf11d1abb1705d, "");
    class_267e074f22525d5088a29292937bc22e.def("hypot_norm", method_pointer_c279914e286354f59a580aef6eb851ac, "");
    class_267e074f22525d5088a29292937bc22e.def("normalized", method_pointer_4ecdef9de9255565a284bf24158de0de, "");
    class_267e074f22525d5088a29292937bc22e.def("stable_normalized", method_pointer_bcd49b7df0ce5a7fbdfae8a454de0e39, "");
    class_267e074f22525d5088a29292937bc22e.def("normalize", method_pointer_42eeebca7eb05d9bb1cf1336f6e6dac3, "");
    class_267e074f22525d5088a29292937bc22e.def("stable_normalize", method_pointer_b69b3e9f84895119b91c0f320dceb513, "");
    class_267e074f22525d5088a29292937bc22e.def("adjoint_in_place", method_pointer_64e5e4439ab75287815311dab2e0e1be, "");
    class_267e074f22525d5088a29292937bc22e.def("set_identity", method_pointer_679630e3c6985aab89d1159e26ce3386, boost::python::return_internal_reference<>(), "");
    class_267e074f22525d5088a29292937bc22e.def("set_identity", autowig::method_decorator_679630e3c6985aab89d1159e26ce3386);
    class_267e074f22525d5088a29292937bc22e.def("set_identity", method_pointer_5f3ad177613c51b0a5af4ae36b4204e3, boost::python::return_internal_reference<>(), "");
    class_267e074f22525d5088a29292937bc22e.def("set_identity", autowig::method_decorator_5f3ad177613c51b0a5af4ae36b4204e3);
    class_267e074f22525d5088a29292937bc22e.def("is_identity", method_pointer_9fdd5b6a42e95f3eb78d8b3ae4ae643c, "");
    class_267e074f22525d5088a29292937bc22e.def("is_diagonal", method_pointer_cf0f019aed8b542fa4ff0415caf3f291, "");
    class_267e074f22525d5088a29292937bc22e.def("is_upper_triangular", method_pointer_cd88dd6bc4715339a21ec7dcca120d94, "");
    class_267e074f22525d5088a29292937bc22e.def("is_lower_triangular", method_pointer_66427c021ba35e4ab9eb1813a3e615f8, "");
    class_267e074f22525d5088a29292937bc22e.def("is_unitary", method_pointer_95a31a11735f589db16a3c8641b35c48, "");
    class_267e074f22525d5088a29292937bc22e.def("force_aligned_access", method_pointer_b9ad9e4279a5576fbefa4824a6f4beef, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_267e074f22525d5088a29292937bc22e.def("force_aligned_access", method_pointer_b12b43b9f285596abff7e60aba09fdab, boost::python::return_internal_reference<>(), "");
    class_267e074f22525d5088a29292937bc22e.def("force_aligned_access", autowig::method_decorator_b12b43b9f285596abff7e60aba09fdab);
    class_267e074f22525d5088a29292937bc22e.def("trace", method_pointer_eac26d600a7059fa896004bfe48ff445, "");
    class_267e074f22525d5088a29292937bc22e.def("matrix", method_pointer_e0169467db215372aae8554c344f6e15, boost::python::return_internal_reference<>(), "");
    class_267e074f22525d5088a29292937bc22e.def("matrix", autowig::method_decorator_e0169467db215372aae8554c344f6e15);
    class_267e074f22525d5088a29292937bc22e.def("matrix", method_pointer_df77dcdaca7b565091027fe0dc553928, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_267e074f22525d5088a29292937bc22e.def("determinant", method_pointer_f816de3534ce55d992cce7adf4147b29, "");
    class_267e074f22525d5088a29292937bc22e.def("eigenvalues", method_pointer_1042218b218e586a8b2954c6542e3bf8, "");
    class_267e074f22525d5088a29292937bc22e.def("unit_orthogonal", method_pointer_a4b2c1f0dff7534b978f7dc5417c0929, "");
    class_267e074f22525d5088a29292937bc22e.def("euler_angles", method_pointer_24a8f5ace0f6571a94075a48f0cb0e8a, "");
    class_267e074f22525d5088a29292937bc22e.def("make_householder_in_place", method_pointer_db48447469845f0cba465645dd3e8d24, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >();
    }

}