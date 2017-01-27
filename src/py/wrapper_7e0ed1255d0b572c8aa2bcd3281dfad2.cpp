#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6684c742a2ec5d62afe30695b95c2a78(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_050298dde5c45783826fadc59d1b5501(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_366c93ae48ab51e6b0a898a09e3922ba(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_e0ff6f8685af59179aee40dc0fd61c01(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_8072e18e8c7657fb80dd7ed48ef3e0e9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_7e0ed1255d0b572c8aa2bcd3281dfad2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d702cde896645929935142ae1c340bb3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::diagonalSize;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_222bd1def32b5df5afd9735d8d277225)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::conjugate;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_20fd67674c16511f94b7ccd122bfaa60)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::real;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_6684c742a2ec5d62afe30695b95c2a78)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_6fd12ef550e55bf0b6ba50fd64c79121)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_a28ea1a15e055a5bb772fefafdd8e26c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_769d48fb65f758c7b8876a62cea094c3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_de27bd716d8f5518868b370797add790)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_64b3e6288ef851fd82c3ad28dd8caec4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::hypotNorm;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_983af10028ce53c38b4e85ab07d53d77)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::normalized;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_98bf866cd68752bf99e49cf5900e7add)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ab9b99e85c725115b589e65c2898b596)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_87d84a5c5d9d504ca6dbf451e52f1acc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_847f4fbd7868565abe389c639d5a997f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_050298dde5c45783826fadc59d1b5501)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setIdentity;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_366c93ae48ab51e6b0a898a09e3922ba)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b14116a190ab56a2b87ace65b94d2465)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b4192a45e617596aa7e9eba0186e1ec3)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_752d4e7d00ee5a8c93a1ce4dd7676ae0)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_71659a1687c8515baca9408d3755a89a)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7ba874cdf2765042b7731fb6a55a63a0)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isUnitary;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_160f89b1f39e5c18982eee9c83322d3b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_e0ff6f8685af59179aee40dc0fd61c01)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_5f275525a0105dac8958a83d6c8170f9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_8072e18e8c7657fb80dd7ed48ef3e0e9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_40c10a03c8a756cf863cb9df17638b67)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b3e73d6f831b5813a57c6d59f383c8ea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::determinant;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_4225016ee3cc592dbf266570259fee45)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_17f0228d9ee15acf8091966427516f75)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > > class_7e0ed1255d0b572c8aa2bcd3281dfad2("_MatrixBase_7e0ed1255d0b572c8aa2bcd3281dfad2", "", boost::python::no_init);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("diagonal_size", method_pointer_d702cde896645929935142ae1c340bb3, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("conjugate", method_pointer_222bd1def32b5df5afd9735d8d277225, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("real", method_pointer_20fd67674c16511f94b7ccd122bfaa60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("real", method_pointer_6684c742a2ec5d62afe30695b95c2a78, boost::python::return_internal_reference<>(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("real", autowig::method_decorator_6684c742a2ec5d62afe30695b95c2a78);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("squared_norm", method_pointer_6fd12ef550e55bf0b6ba50fd64c79121, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("norm", method_pointer_a28ea1a15e055a5bb772fefafdd8e26c, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("stable_norm", method_pointer_769d48fb65f758c7b8876a62cea094c3, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("blue_norm", method_pointer_de27bd716d8f5518868b370797add790, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("hypot_norm", method_pointer_64b3e6288ef851fd82c3ad28dd8caec4, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("normalized", method_pointer_983af10028ce53c38b4e85ab07d53d77, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("stable_normalized", method_pointer_98bf866cd68752bf99e49cf5900e7add, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("normalize", method_pointer_ab9b99e85c725115b589e65c2898b596, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("stable_normalize", method_pointer_87d84a5c5d9d504ca6dbf451e52f1acc, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("adjoint_in_place", method_pointer_847f4fbd7868565abe389c639d5a997f, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("set_identity", method_pointer_050298dde5c45783826fadc59d1b5501, boost::python::return_internal_reference<>(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("set_identity", autowig::method_decorator_050298dde5c45783826fadc59d1b5501);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("set_identity", method_pointer_366c93ae48ab51e6b0a898a09e3922ba, boost::python::return_internal_reference<>(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("set_identity", autowig::method_decorator_366c93ae48ab51e6b0a898a09e3922ba);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("is_identity", method_pointer_b14116a190ab56a2b87ace65b94d2465, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("is_diagonal", method_pointer_b4192a45e617596aa7e9eba0186e1ec3, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("is_upper_triangular", method_pointer_752d4e7d00ee5a8c93a1ce4dd7676ae0, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("is_lower_triangular", method_pointer_71659a1687c8515baca9408d3755a89a, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("is_unitary", method_pointer_7ba874cdf2765042b7731fb6a55a63a0, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("force_aligned_access", method_pointer_160f89b1f39e5c18982eee9c83322d3b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("force_aligned_access", method_pointer_e0ff6f8685af59179aee40dc0fd61c01, boost::python::return_internal_reference<>(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("force_aligned_access", autowig::method_decorator_e0ff6f8685af59179aee40dc0fd61c01);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("trace", method_pointer_5f275525a0105dac8958a83d6c8170f9, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("matrix", method_pointer_8072e18e8c7657fb80dd7ed48ef3e0e9, boost::python::return_internal_reference<>(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("matrix", autowig::method_decorator_8072e18e8c7657fb80dd7ed48ef3e0e9);
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("matrix", method_pointer_40c10a03c8a756cf863cb9df17638b67, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("determinant", method_pointer_b3e73d6f831b5813a57c6d59f383c8ea, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("unit_orthogonal", method_pointer_4225016ee3cc592dbf266570259fee45, "");
    class_7e0ed1255d0b572c8aa2bcd3281dfad2.def("make_householder_in_place", method_pointer_17f0228d9ee15acf8091966427516f75, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >();
    }

}