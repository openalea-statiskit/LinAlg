#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1e1f7b7ebff15972a83382224e21e13d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_1ca4ef9e6d4752d7b71763f2aec5718a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_da32628986df501087c02ae54e8ff0ab(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_bc88cf5e43d05e25a1fba353a48c6256(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_cde4651ca5d859ee92c6a5f6dceb7335(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_c4792bf51d005a01ac2140550ce58b76()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a2c299aa732d5169a1dbaf75e7955f18)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::diagonalSize;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_11772fe4eaa8594f9a1de05e05d4e9dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::conjugate;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9db80ac9200a544e88f4695b61b810e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::real;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_1e1f7b7ebff15972a83382224e21e13d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_1ee7d1ac42a45d978dc538f8c4f9c5b2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_00001d2facd5529e91dc30970958d05b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_3e034b4811ff5921938b805b487c1eea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_c238905159ab5ed29907ed1a0cbd525b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5f10210bfa13535e8bbb3267ccc6739c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::hypotNorm;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_7f8dfda633e25369adf3b465bf30b11a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::normalized;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_4988b13e1a295f6dbb62984283220e7d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e2905ced095f5bc991c97e2441d7826c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_d379033d76b253418f88bcc3cbc47a8b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9c47794b391251f6b87b1480a3b05c55)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_1ca4ef9e6d4752d7b71763f2aec5718a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setIdentity;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_da32628986df501087c02ae54e8ff0ab)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8b312a72e8ed568093391b0c7d382856)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b553cf4dca1f581fbaf413b6230dff0f)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_43ab2c883834561cbbfa9155f50bb451)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_23d08f35be215e53b3c8b0e15e9818ca)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2069a453c9bd534a96171a7e77927f53)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isUnitary;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_25a08648ca8e5267aef2de0c4adcf77f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_bc88cf5e43d05e25a1fba353a48c6256)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_288cd91c85df5538be3522488d4246de)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_cde4651ca5d859ee92c6a5f6dceb7335)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_00f603f801e25d57b43fb1a78fb72655)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_bd02dd5c0e8e53f8b29362fa30a4e997)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_dd95ba90b7f45e3eb0e97884cc2ec34e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::eigenvalues;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_644a82335372583586ebb6266533b285)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::unitOrthogonal;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5d5ab549fbdb57f289ef100ef951c8bc)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_06252c9507fa511e8f590a842e3ff7aa)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_c4792bf51d005a01ac2140550ce58b76("_MatrixBase_c4792bf51d005a01ac2140550ce58b76", "", boost::python::no_init);
    class_c4792bf51d005a01ac2140550ce58b76.def("diagonal_size", method_pointer_a2c299aa732d5169a1dbaf75e7955f18, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("conjugate", method_pointer_11772fe4eaa8594f9a1de05e05d4e9dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("real", method_pointer_9db80ac9200a544e88f4695b61b810e4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("real", method_pointer_1e1f7b7ebff15972a83382224e21e13d, boost::python::return_internal_reference<>(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("real", autowig::method_decorator_1e1f7b7ebff15972a83382224e21e13d);
    class_c4792bf51d005a01ac2140550ce58b76.def("squared_norm", method_pointer_1ee7d1ac42a45d978dc538f8c4f9c5b2, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("norm", method_pointer_00001d2facd5529e91dc30970958d05b, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("stable_norm", method_pointer_3e034b4811ff5921938b805b487c1eea, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("blue_norm", method_pointer_c238905159ab5ed29907ed1a0cbd525b, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("hypot_norm", method_pointer_5f10210bfa13535e8bbb3267ccc6739c, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("normalized", method_pointer_7f8dfda633e25369adf3b465bf30b11a, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("stable_normalized", method_pointer_4988b13e1a295f6dbb62984283220e7d, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("normalize", method_pointer_e2905ced095f5bc991c97e2441d7826c, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("stable_normalize", method_pointer_d379033d76b253418f88bcc3cbc47a8b, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("adjoint_in_place", method_pointer_9c47794b391251f6b87b1480a3b05c55, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("set_identity", method_pointer_1ca4ef9e6d4752d7b71763f2aec5718a, boost::python::return_internal_reference<>(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("set_identity", autowig::method_decorator_1ca4ef9e6d4752d7b71763f2aec5718a);
    class_c4792bf51d005a01ac2140550ce58b76.def("set_identity", method_pointer_da32628986df501087c02ae54e8ff0ab, boost::python::return_internal_reference<>(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("set_identity", autowig::method_decorator_da32628986df501087c02ae54e8ff0ab);
    class_c4792bf51d005a01ac2140550ce58b76.def("is_identity", method_pointer_8b312a72e8ed568093391b0c7d382856, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("is_diagonal", method_pointer_b553cf4dca1f581fbaf413b6230dff0f, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("is_upper_triangular", method_pointer_43ab2c883834561cbbfa9155f50bb451, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("is_lower_triangular", method_pointer_23d08f35be215e53b3c8b0e15e9818ca, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("is_unitary", method_pointer_2069a453c9bd534a96171a7e77927f53, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("force_aligned_access", method_pointer_25a08648ca8e5267aef2de0c4adcf77f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("force_aligned_access", method_pointer_bc88cf5e43d05e25a1fba353a48c6256, boost::python::return_internal_reference<>(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("force_aligned_access", autowig::method_decorator_bc88cf5e43d05e25a1fba353a48c6256);
    class_c4792bf51d005a01ac2140550ce58b76.def("trace", method_pointer_288cd91c85df5538be3522488d4246de, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("matrix", method_pointer_cde4651ca5d859ee92c6a5f6dceb7335, boost::python::return_internal_reference<>(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("matrix", autowig::method_decorator_cde4651ca5d859ee92c6a5f6dceb7335);
    class_c4792bf51d005a01ac2140550ce58b76.def("matrix", method_pointer_00f603f801e25d57b43fb1a78fb72655, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c4792bf51d005a01ac2140550ce58b76.def("determinant", method_pointer_bd02dd5c0e8e53f8b29362fa30a4e997, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("eigenvalues", method_pointer_dd95ba90b7f45e3eb0e97884cc2ec34e, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("unit_orthogonal", method_pointer_644a82335372583586ebb6266533b285, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("euler_angles", method_pointer_5d5ab549fbdb57f289ef100ef951c8bc, "");
    class_c4792bf51d005a01ac2140550ce58b76.def("make_householder_in_place", method_pointer_06252c9507fa511e8f590a842e3ff7aa, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >();
    }

}