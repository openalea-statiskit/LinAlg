#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ba3786c3e13658a5917d4df2a69d2c21(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_746657b5daeb5abebfc10a808c264758(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_1a129edc7aa85a0293d4d0c952055732(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_ab7456614cd05785a36d129b0c2b364a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_45cfd4d7a2de5b90adee0332b94ff067()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_8d7a4915681c5c8cbea507a27a333b08)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_5f9510cee0805decb5afafd72b8a527c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_e085205a8c4654ff993266bdde953cec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_1a0a07e627d55717be31d8e2d579a96c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_a6117908f5cc54dfa831381a385d6a9f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_f255bccc840c5ced9ffa526f3b21c988)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_9d4ea078524e5a30835d3c19348de5a9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_1e31c8d7dd0a5c70b21ff5473fbe6bb7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_7ecce68473cb5cb0a5d105d4b405fcc2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_b35436f407cc578fb3af4ec3c980cef7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_2fc7ed3ce1d15c99817ee63b98c1f28f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_ba3786c3e13658a5917d4df2a69d2c21)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_746657b5daeb5abebfc10a808c264758)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_9f5f547e3ba55ae9bc96973f93397c46)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_45a73bdb5aed5f03a5797314571cc76e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_96c87b0f30055f4c9a2b883450d3bc2d)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_b23e1c7fb74c5cfc94d0e57b25ee4b90)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_8d199d9b236a5a279046e24d6457fa9d)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_d8e40d7d70df5392ad8593b0f5dc7b40)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_1a129edc7aa85a0293d4d0c952055732)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_d5e40b0d34b75ead854dd7e8896b0577)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_ab7456614cd05785a36d129b0c2b364a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_926ad97785aa5c2db470f517c80365f4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_1c7cdfee75ff5c3792659702c9d68260)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_98477b9b5bdb5bf79b7eb138b25153c3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_b2d1f01a54b55e7aaa7707e8f36a1c9f)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > > class_45cfd4d7a2de5b90adee0332b94ff067("_MatrixBase_45cfd4d7a2de5b90adee0332b94ff067", "", boost::python::no_init);
    class_45cfd4d7a2de5b90adee0332b94ff067.def("diagonal_size", method_pointer_8d7a4915681c5c8cbea507a27a333b08, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("squared_norm", method_pointer_5f9510cee0805decb5afafd72b8a527c, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("norm", method_pointer_e085205a8c4654ff993266bdde953cec, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("stable_norm", method_pointer_1a0a07e627d55717be31d8e2d579a96c, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("blue_norm", method_pointer_a6117908f5cc54dfa831381a385d6a9f, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("hypot_norm", method_pointer_f255bccc840c5ced9ffa526f3b21c988, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("normalized", method_pointer_9d4ea078524e5a30835d3c19348de5a9, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("stable_normalized", method_pointer_1e31c8d7dd0a5c70b21ff5473fbe6bb7, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("normalize", method_pointer_7ecce68473cb5cb0a5d105d4b405fcc2, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("stable_normalize", method_pointer_b35436f407cc578fb3af4ec3c980cef7, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("adjoint_in_place", method_pointer_2fc7ed3ce1d15c99817ee63b98c1f28f, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("set_identity", method_pointer_ba3786c3e13658a5917d4df2a69d2c21, boost::python::return_internal_reference<>(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("set_identity", autowig::method_decorator_ba3786c3e13658a5917d4df2a69d2c21);
    class_45cfd4d7a2de5b90adee0332b94ff067.def("set_identity", method_pointer_746657b5daeb5abebfc10a808c264758, boost::python::return_internal_reference<>(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("set_identity", autowig::method_decorator_746657b5daeb5abebfc10a808c264758);
    class_45cfd4d7a2de5b90adee0332b94ff067.def("is_identity", method_pointer_9f5f547e3ba55ae9bc96973f93397c46, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("is_diagonal", method_pointer_45a73bdb5aed5f03a5797314571cc76e, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("is_upper_triangular", method_pointer_96c87b0f30055f4c9a2b883450d3bc2d, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("is_lower_triangular", method_pointer_b23e1c7fb74c5cfc94d0e57b25ee4b90, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("is_unitary", method_pointer_8d199d9b236a5a279046e24d6457fa9d, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("force_aligned_access", method_pointer_d8e40d7d70df5392ad8593b0f5dc7b40, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("force_aligned_access", method_pointer_1a129edc7aa85a0293d4d0c952055732, boost::python::return_internal_reference<>(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("force_aligned_access", autowig::method_decorator_1a129edc7aa85a0293d4d0c952055732);
    class_45cfd4d7a2de5b90adee0332b94ff067.def("trace", method_pointer_d5e40b0d34b75ead854dd7e8896b0577, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("matrix", method_pointer_ab7456614cd05785a36d129b0c2b364a, boost::python::return_internal_reference<>(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("matrix", autowig::method_decorator_ab7456614cd05785a36d129b0c2b364a);
    class_45cfd4d7a2de5b90adee0332b94ff067.def("matrix", method_pointer_926ad97785aa5c2db470f517c80365f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("determinant", method_pointer_1c7cdfee75ff5c3792659702c9d68260, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("unit_orthogonal", method_pointer_98477b9b5bdb5bf79b7eb138b25153c3, "");
    class_45cfd4d7a2de5b90adee0332b94ff067.def("make_householder_in_place", method_pointer_b2d1f01a54b55e7aaa7707e8f36a1c9f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >();
    }

}