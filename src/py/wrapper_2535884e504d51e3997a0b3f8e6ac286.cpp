#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3084727586d558e7833e5ff123c3ac00(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_adfa60a12fa35f049dedcf8ba87b9582(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_9e6ba0517d315bee86041e9b64269968(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_c8df530c266c58cba5f0366ab6877478(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_0d7e2dc702df5542a9db864b9f07711e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_2535884e504d51e3997a0b3f8e6ac286()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_fcad900ee74055eba23d5fcbcf82c3f6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::diagonalSize;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_6a1d878079d65a4bb5d1182aaca97ad9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::conjugate;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d686666678105122babf8badedd326dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::real;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3084727586d558e7833e5ff123c3ac00)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_39f6e386a18b5bdd8e6b9becde1dff22)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f69a37c7f5605599b0041c12aa5c05e7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3ef8d0489ae759759510c1199c27d8b3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_e3a8bb0f82f85e3fae1bbe4e2361068d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_1d8c2e07cf725e5f81a5e2022f64f12e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::hypotNorm;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_e67cb06d233e5b1f97a04196cf022c81)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::normalized;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_bbd0e0d62c7650f1ba71c8e586f4a137)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_bf41206374cd5b859793906d0374174f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_175155bd06ca5b6fa4204b6c5a762372)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_db26d2f0c0ac5767bafd2c285430e207)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_adfa60a12fa35f049dedcf8ba87b9582)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setIdentity;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9e6ba0517d315bee86041e9b64269968)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_66622661a6d55fe6b16df4a38eb7efc1)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f3e5374c244856ccbc4aaaaa9981a00a)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_34e2666597ad5455805fcc421d9cff69)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ecf9923b97d557e4b2d7113a64cab902)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d3c6c970facd5116b093ca8f5e44a564)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isUnitary;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7f5c0be2c47f51779dda98c091166ef1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_c8df530c266c58cba5f0366ab6877478)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_c2eea073f3ac51119a262b62734231ae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0d7e2dc702df5542a9db864b9f07711e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f014517f4eab5feeac465918045c316f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_fda02131f2f45cd981d7c3492a0a791c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b65c6ec8e26c56c591ab1a3d505ffd4c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::eigenvalues;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2f9c7970f27c55d8badf6d86c08aec34)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7d1b0987ab8f596da9c41a6a487296a3)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_84c84001f3c05adaa067689680476dbb)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_2535884e504d51e3997a0b3f8e6ac286("_MatrixBase_2535884e504d51e3997a0b3f8e6ac286", "", boost::python::no_init);
    class_2535884e504d51e3997a0b3f8e6ac286.def("diagonal_size", method_pointer_fcad900ee74055eba23d5fcbcf82c3f6, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("conjugate", method_pointer_6a1d878079d65a4bb5d1182aaca97ad9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("real", method_pointer_d686666678105122babf8badedd326dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("real", method_pointer_3084727586d558e7833e5ff123c3ac00, boost::python::return_internal_reference<>(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("real", autowig::method_decorator_3084727586d558e7833e5ff123c3ac00);
    class_2535884e504d51e3997a0b3f8e6ac286.def("squared_norm", method_pointer_39f6e386a18b5bdd8e6b9becde1dff22, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("norm", method_pointer_f69a37c7f5605599b0041c12aa5c05e7, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("stable_norm", method_pointer_3ef8d0489ae759759510c1199c27d8b3, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("blue_norm", method_pointer_e3a8bb0f82f85e3fae1bbe4e2361068d, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("hypot_norm", method_pointer_1d8c2e07cf725e5f81a5e2022f64f12e, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("normalized", method_pointer_e67cb06d233e5b1f97a04196cf022c81, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("stable_normalized", method_pointer_bbd0e0d62c7650f1ba71c8e586f4a137, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("normalize", method_pointer_bf41206374cd5b859793906d0374174f, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("stable_normalize", method_pointer_175155bd06ca5b6fa4204b6c5a762372, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("adjoint_in_place", method_pointer_db26d2f0c0ac5767bafd2c285430e207, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("set_identity", method_pointer_adfa60a12fa35f049dedcf8ba87b9582, boost::python::return_internal_reference<>(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("set_identity", autowig::method_decorator_adfa60a12fa35f049dedcf8ba87b9582);
    class_2535884e504d51e3997a0b3f8e6ac286.def("set_identity", method_pointer_9e6ba0517d315bee86041e9b64269968, boost::python::return_internal_reference<>(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("set_identity", autowig::method_decorator_9e6ba0517d315bee86041e9b64269968);
    class_2535884e504d51e3997a0b3f8e6ac286.def("is_identity", method_pointer_66622661a6d55fe6b16df4a38eb7efc1, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("is_diagonal", method_pointer_f3e5374c244856ccbc4aaaaa9981a00a, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("is_upper_triangular", method_pointer_34e2666597ad5455805fcc421d9cff69, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("is_lower_triangular", method_pointer_ecf9923b97d557e4b2d7113a64cab902, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("is_unitary", method_pointer_d3c6c970facd5116b093ca8f5e44a564, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("force_aligned_access", method_pointer_7f5c0be2c47f51779dda98c091166ef1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("force_aligned_access", method_pointer_c8df530c266c58cba5f0366ab6877478, boost::python::return_internal_reference<>(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("force_aligned_access", autowig::method_decorator_c8df530c266c58cba5f0366ab6877478);
    class_2535884e504d51e3997a0b3f8e6ac286.def("trace", method_pointer_c2eea073f3ac51119a262b62734231ae, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("matrix", method_pointer_0d7e2dc702df5542a9db864b9f07711e, boost::python::return_internal_reference<>(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("matrix", autowig::method_decorator_0d7e2dc702df5542a9db864b9f07711e);
    class_2535884e504d51e3997a0b3f8e6ac286.def("matrix", method_pointer_f014517f4eab5feeac465918045c316f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("determinant", method_pointer_fda02131f2f45cd981d7c3492a0a791c, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("eigenvalues", method_pointer_b65c6ec8e26c56c591ab1a3d505ffd4c, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("unit_orthogonal", method_pointer_2f9c7970f27c55d8badf6d86c08aec34, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("euler_angles", method_pointer_7d1b0987ab8f596da9c41a6a487296a3, "");
    class_2535884e504d51e3997a0b3f8e6ac286.def("make_householder_in_place", method_pointer_84c84001f3c05adaa067689680476dbb, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >();
    }

}