#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d39fb559c11e5a1a9dd8246152d11a9d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_be77c31fd76653d5b14714c8f7ec63cf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_4490956d19595cba81f1be075f3df7bb(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c490d979b7dc56b7ba1aceccc8a46639(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_1c361648fb5c53788bd63886946c1bd2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_7149f9d76f3a5d9bae852e8af8cc3c4a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_62f684249b67502782d070f16de9f071)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_80d64b2b7c6e565880aaa8c8dccce678)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_bbb6a1faf72f5375ba08e0ac23118013)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_bf9ab0ac1c4c55cdb57044f6637f9f3b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_35ff50feeb355ae6b169e4e96edbf2b6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_621a0cf5a4b75d59998120335bedfede)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_33db52c3658e544fa6e2b3e25b243efd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_568fd1ddf83459778a5c9713e56930de)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_cb1928ca628c506d8cbb83f7713d3fca)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d3b3d61904da57ae8b601244703ea13c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d39fb559c11e5a1a9dd8246152d11a9d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_be77c31fd76653d5b14714c8f7ec63cf)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_dd4df8fdc7fa54a3929651bb10b7ae69)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_9936ca8e8a83537588c274ea76864637)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_3f1a9591d5445226a19bbd41d721e688)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_f2f1bcf3913054daa17b1b5682df39b4)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_6e0318915e125f8583e22f796ed60c21)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_71af257fc2b25eaa9a3aee9c28ce9b86)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_4490956d19595cba81f1be075f3df7bb)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_bca987443e3750deb9cb75910a854554)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_c490d979b7dc56b7ba1aceccc8a46639)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_4e8b5993d8ec58ab91a11410af47b7b3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_a5c634c72c6e530c9f4da5649d77d5c1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_0c673573c1a8569c953344d96120f86d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_a063e85726b4503895db8e1b6b003310)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_ff019b834aea51f79eaf22a773ce080f)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_4a6397fb54875c98a6324d274772e52e)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > > class_1c361648fb5c53788bd63886946c1bd2("_MatrixBase_1c361648fb5c53788bd63886946c1bd2", "", boost::python::no_init);
    class_1c361648fb5c53788bd63886946c1bd2.def("diagonal_size", method_pointer_7149f9d76f3a5d9bae852e8af8cc3c4a, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("squared_norm", method_pointer_62f684249b67502782d070f16de9f071, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("norm", method_pointer_80d64b2b7c6e565880aaa8c8dccce678, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("stable_norm", method_pointer_bbb6a1faf72f5375ba08e0ac23118013, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("blue_norm", method_pointer_bf9ab0ac1c4c55cdb57044f6637f9f3b, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("hypot_norm", method_pointer_35ff50feeb355ae6b169e4e96edbf2b6, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("normalized", method_pointer_621a0cf5a4b75d59998120335bedfede, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("stable_normalized", method_pointer_33db52c3658e544fa6e2b3e25b243efd, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("normalize", method_pointer_568fd1ddf83459778a5c9713e56930de, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("stable_normalize", method_pointer_cb1928ca628c506d8cbb83f7713d3fca, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("adjoint_in_place", method_pointer_d3b3d61904da57ae8b601244703ea13c, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("set_identity", method_pointer_d39fb559c11e5a1a9dd8246152d11a9d, boost::python::return_internal_reference<>(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("set_identity", autowig::method_decorator_d39fb559c11e5a1a9dd8246152d11a9d);
    class_1c361648fb5c53788bd63886946c1bd2.def("set_identity", method_pointer_be77c31fd76653d5b14714c8f7ec63cf, boost::python::return_internal_reference<>(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("set_identity", autowig::method_decorator_be77c31fd76653d5b14714c8f7ec63cf);
    class_1c361648fb5c53788bd63886946c1bd2.def("is_identity", method_pointer_dd4df8fdc7fa54a3929651bb10b7ae69, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("is_diagonal", method_pointer_9936ca8e8a83537588c274ea76864637, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("is_upper_triangular", method_pointer_3f1a9591d5445226a19bbd41d721e688, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("is_lower_triangular", method_pointer_f2f1bcf3913054daa17b1b5682df39b4, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("is_unitary", method_pointer_6e0318915e125f8583e22f796ed60c21, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("force_aligned_access", method_pointer_71af257fc2b25eaa9a3aee9c28ce9b86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("force_aligned_access", method_pointer_4490956d19595cba81f1be075f3df7bb, boost::python::return_internal_reference<>(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("force_aligned_access", autowig::method_decorator_4490956d19595cba81f1be075f3df7bb);
    class_1c361648fb5c53788bd63886946c1bd2.def("trace", method_pointer_bca987443e3750deb9cb75910a854554, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("matrix", method_pointer_c490d979b7dc56b7ba1aceccc8a46639, boost::python::return_internal_reference<>(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("matrix", autowig::method_decorator_c490d979b7dc56b7ba1aceccc8a46639);
    class_1c361648fb5c53788bd63886946c1bd2.def("matrix", method_pointer_4e8b5993d8ec58ab91a11410af47b7b3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1c361648fb5c53788bd63886946c1bd2.def("determinant", method_pointer_a5c634c72c6e530c9f4da5649d77d5c1, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("eigenvalues", method_pointer_0c673573c1a8569c953344d96120f86d, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("unit_orthogonal", method_pointer_a063e85726b4503895db8e1b6b003310, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("euler_angles", method_pointer_ff019b834aea51f79eaf22a773ce080f, "");
    class_1c361648fb5c53788bd63886946c1bd2.def("make_householder_in_place", method_pointer_4a6397fb54875c98a6324d274772e52e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >();
    }

}