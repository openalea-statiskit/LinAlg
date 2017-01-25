#include "_ieigen.h"


namespace autowig
{
    void method_decorator_42a00c0d12755098a95c522b9f3fdfb6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_27546b5a524f5e918ac8de1818b1dc0a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_41c9bd0eba295ec0ae732f8af60fc555(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_13c80fd373c4508b9cb9a8aa6711ebe1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_9096477fcbbd51c8a185c72d38b0d72d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_4fb7ab4884d7541bb054f585f0357fd0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_6d60534f8d0a5855b7b1199562c482bd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::diagonalSize;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_93afd8e927d258d88cf9223d8830de8e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::conjugate;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_b4637d8d51e95c6e9b868b72ae67e458)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::real;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_42a00c0d12755098a95c522b9f3fdfb6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ca2310f6ea665c98ab74e3865c2b69b8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_37083ab4aa125b469bead1073d2d551f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_5db9669fd0045f4fb251d09667bd52a5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_89ce3c4ca3395c4e956d1d4f70b3a4da)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a129dc24026e51649fcfb03f87f398c1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::hypotNorm;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_da461b3d811a5a2bb879894a2a5c350b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::normalized;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a0651e8790425890bc1b4b39b8879b7b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d416e5a00c765692898c3ee3841c6eb0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_f5c13b4160b25ed295bc575dde24c2c2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_70f3cb2730b35b79b6895207ece89374)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_27546b5a524f5e918ac8de1818b1dc0a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setIdentity;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_41c9bd0eba295ec0ae732f8af60fc555)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_640568fe1cfd5dd7bc1757043a9786da)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_91c04be211c050e8b86759b65c100041)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d5c9a098c8ca5b1794c7a10bd2f6adac)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_953ecf02b45e5139a562f9382b89df35)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ce3f4744732a5ab9939a16383f3c6ed8)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isUnitary;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_347e9a93878858a8bd70e3cf37e302c0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_13c80fd373c4508b9cb9a8aa6711ebe1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_fe221b70c5a25e86bfafebef8e20ee31)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_9096477fcbbd51c8a185c72d38b0d72d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_3b4f86aed1f85fa28736fd54b92e3a44)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_63afe9301d1d53149ed3054badb6fb9d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_1d970a5462e759a3a197959072996c57)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::eigenvalues;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a2655ae3b0335365b1f75290997b3a52)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::unitOrthogonal;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4281ee36514b58b294e43f3460292679)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_002989c9b26f5eca8a5fe394f995d643)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > > class_4fb7ab4884d7541bb054f585f0357fd0("_MatrixBase_4fb7ab4884d7541bb054f585f0357fd0", "", boost::python::no_init);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("diagonal_size", method_pointer_6d60534f8d0a5855b7b1199562c482bd, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("conjugate", method_pointer_93afd8e927d258d88cf9223d8830de8e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("real", method_pointer_b4637d8d51e95c6e9b868b72ae67e458, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("real", method_pointer_42a00c0d12755098a95c522b9f3fdfb6, boost::python::return_internal_reference<>(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("real", autowig::method_decorator_42a00c0d12755098a95c522b9f3fdfb6);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("squared_norm", method_pointer_ca2310f6ea665c98ab74e3865c2b69b8, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("norm", method_pointer_37083ab4aa125b469bead1073d2d551f, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("stable_norm", method_pointer_5db9669fd0045f4fb251d09667bd52a5, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("blue_norm", method_pointer_89ce3c4ca3395c4e956d1d4f70b3a4da, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("hypot_norm", method_pointer_a129dc24026e51649fcfb03f87f398c1, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("normalized", method_pointer_da461b3d811a5a2bb879894a2a5c350b, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("stable_normalized", method_pointer_a0651e8790425890bc1b4b39b8879b7b, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("normalize", method_pointer_d416e5a00c765692898c3ee3841c6eb0, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("stable_normalize", method_pointer_f5c13b4160b25ed295bc575dde24c2c2, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("adjoint_in_place", method_pointer_70f3cb2730b35b79b6895207ece89374, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("set_identity", method_pointer_27546b5a524f5e918ac8de1818b1dc0a, boost::python::return_internal_reference<>(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("set_identity", autowig::method_decorator_27546b5a524f5e918ac8de1818b1dc0a);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("set_identity", method_pointer_41c9bd0eba295ec0ae732f8af60fc555, boost::python::return_internal_reference<>(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("set_identity", autowig::method_decorator_41c9bd0eba295ec0ae732f8af60fc555);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("is_identity", method_pointer_640568fe1cfd5dd7bc1757043a9786da, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("is_diagonal", method_pointer_91c04be211c050e8b86759b65c100041, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("is_upper_triangular", method_pointer_d5c9a098c8ca5b1794c7a10bd2f6adac, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("is_lower_triangular", method_pointer_953ecf02b45e5139a562f9382b89df35, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("is_unitary", method_pointer_ce3f4744732a5ab9939a16383f3c6ed8, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("force_aligned_access", method_pointer_347e9a93878858a8bd70e3cf37e302c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("force_aligned_access", method_pointer_13c80fd373c4508b9cb9a8aa6711ebe1, boost::python::return_internal_reference<>(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("force_aligned_access", autowig::method_decorator_13c80fd373c4508b9cb9a8aa6711ebe1);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("trace", method_pointer_fe221b70c5a25e86bfafebef8e20ee31, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("matrix", method_pointer_9096477fcbbd51c8a185c72d38b0d72d, boost::python::return_internal_reference<>(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("matrix", autowig::method_decorator_9096477fcbbd51c8a185c72d38b0d72d);
    class_4fb7ab4884d7541bb054f585f0357fd0.def("matrix", method_pointer_3b4f86aed1f85fa28736fd54b92e3a44, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("determinant", method_pointer_63afe9301d1d53149ed3054badb6fb9d, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("eigenvalues", method_pointer_1d970a5462e759a3a197959072996c57, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("unit_orthogonal", method_pointer_a2655ae3b0335365b1f75290997b3a52, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("euler_angles", method_pointer_4281ee36514b58b294e43f3460292679, "");
    class_4fb7ab4884d7541bb054f585f0357fd0.def("make_householder_in_place", method_pointer_002989c9b26f5eca8a5fe394f995d643, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >();
    }

}