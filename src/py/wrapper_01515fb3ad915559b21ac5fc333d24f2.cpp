#include "_ieigen.h"


namespace autowig
{
    void method_decorator_07750097fb4c5c47935982a936d138a9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_2f612d079d1b5f68958be368bde4955a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_0e6ca45637255647819cb3f1abd827b6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_51068fba9c58515d94aac49c1097c7d8(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_01515fb3ad915559b21ac5fc333d24f2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_1de40fe0d1db59398aa182bb55ebb830)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_24d692cb42c457adad71a3c38b243084)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_954ddd72977651099eb91c60ece0d166)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_341f9315d23557e5aade781d15c57b75)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_3cbdc03d16a35db09e06dc2e5c5fc5fb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_8671967aa6fd5a619dd011cbb72793b0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_31b5de923d6c5e0386f0756207012f47)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_f16b077bcb245773bf93832d78a51e21)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_4af931b721a1590ca28edb9f9e00cf7c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_cbe655faacf355d4a465834ede742e79)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_555e514f79305909b5f67c51e69ea774)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_07750097fb4c5c47935982a936d138a9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_2f612d079d1b5f68958be368bde4955a)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_3d4a539176235cd691badca5bce5e917)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_d4b99f5ed898522a9cee5d1620cbe927)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_19f26b87a1fd5db8af8b2a84eff74752)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_7bc1eca439225476b27872af1df2d0ff)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_82b8488a07f25833b887825dc28b1ae3)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_120178804f77563b86e74927b1bd9b4d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_0e6ca45637255647819cb3f1abd827b6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_896777ce0cfc55e79d7b757067f5bebb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_51068fba9c58515d94aac49c1097c7d8)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_f4e92edd0c515736b2b7fda6d1aeafe2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a8b7a484020c5bc1bd12bfaad7e73714)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_80fb3ce53b5154028d84a2eb5b57e27c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_9e72b5de8de65ef1a11cb9e795b052b5)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > > class_01515fb3ad915559b21ac5fc333d24f2("_MatrixBase_01515fb3ad915559b21ac5fc333d24f2", "", boost::python::no_init);
    class_01515fb3ad915559b21ac5fc333d24f2.def("diagonal_size", method_pointer_1de40fe0d1db59398aa182bb55ebb830, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("squared_norm", method_pointer_24d692cb42c457adad71a3c38b243084, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("norm", method_pointer_954ddd72977651099eb91c60ece0d166, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("stable_norm", method_pointer_341f9315d23557e5aade781d15c57b75, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("blue_norm", method_pointer_3cbdc03d16a35db09e06dc2e5c5fc5fb, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("hypot_norm", method_pointer_8671967aa6fd5a619dd011cbb72793b0, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("normalized", method_pointer_31b5de923d6c5e0386f0756207012f47, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("stable_normalized", method_pointer_f16b077bcb245773bf93832d78a51e21, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("normalize", method_pointer_4af931b721a1590ca28edb9f9e00cf7c, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("stable_normalize", method_pointer_cbe655faacf355d4a465834ede742e79, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("adjoint_in_place", method_pointer_555e514f79305909b5f67c51e69ea774, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("set_identity", method_pointer_07750097fb4c5c47935982a936d138a9, boost::python::return_internal_reference<>(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("set_identity", autowig::method_decorator_07750097fb4c5c47935982a936d138a9);
    class_01515fb3ad915559b21ac5fc333d24f2.def("set_identity", method_pointer_2f612d079d1b5f68958be368bde4955a, boost::python::return_internal_reference<>(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("set_identity", autowig::method_decorator_2f612d079d1b5f68958be368bde4955a);
    class_01515fb3ad915559b21ac5fc333d24f2.def("is_identity", method_pointer_3d4a539176235cd691badca5bce5e917, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("is_diagonal", method_pointer_d4b99f5ed898522a9cee5d1620cbe927, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("is_upper_triangular", method_pointer_19f26b87a1fd5db8af8b2a84eff74752, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("is_lower_triangular", method_pointer_7bc1eca439225476b27872af1df2d0ff, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("is_unitary", method_pointer_82b8488a07f25833b887825dc28b1ae3, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("force_aligned_access", method_pointer_120178804f77563b86e74927b1bd9b4d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("force_aligned_access", method_pointer_0e6ca45637255647819cb3f1abd827b6, boost::python::return_internal_reference<>(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("force_aligned_access", autowig::method_decorator_0e6ca45637255647819cb3f1abd827b6);
    class_01515fb3ad915559b21ac5fc333d24f2.def("trace", method_pointer_896777ce0cfc55e79d7b757067f5bebb, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("matrix", method_pointer_51068fba9c58515d94aac49c1097c7d8, boost::python::return_internal_reference<>(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("matrix", autowig::method_decorator_51068fba9c58515d94aac49c1097c7d8);
    class_01515fb3ad915559b21ac5fc333d24f2.def("matrix", method_pointer_f4e92edd0c515736b2b7fda6d1aeafe2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("determinant", method_pointer_a8b7a484020c5bc1bd12bfaad7e73714, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("unit_orthogonal", method_pointer_80fb3ce53b5154028d84a2eb5b57e27c, "");
    class_01515fb3ad915559b21ac5fc333d24f2.def("make_householder_in_place", method_pointer_9e72b5de8de65ef1a11cb9e795b052b5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >();
    }

}