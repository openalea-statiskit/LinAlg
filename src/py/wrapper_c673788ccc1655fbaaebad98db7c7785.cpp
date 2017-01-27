#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ddfb0e800218589f92f2bd196440dd9c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_97408da19c985f938cba3a30d86ef342(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_96db21dd8e555f1d9c938a1b1d7e0fef(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_479e225e6a8b555da937ada90b006204(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_21e6c92607ed5343b7fa49ac0b47713f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_c673788ccc1655fbaaebad98db7c7785()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_68d932aca6b2599eb5945bf17b1cac7f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::diagonalSize;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a238fe6f41745e568837f11a84ed6f27)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::conjugate;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_e1cc24109b4b598e8af4227e56b9f5df)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::real;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_ddfb0e800218589f92f2bd196440dd9c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_ddacf433da955c9a8d30902a005e81e7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_3cb9902809485259a528ba316eb78ec4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c6fbbdd1bb66517e95e3d3dfda96acc9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_198d9bd9f77b56339854796c5caf8940)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::hypotNorm;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1352f13fde4552fb83d4306a95b57b0e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::normalized;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4fa41cb306bd570bb5c30a62156c330e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_65b3f58f17125cca96fd2a680a14402f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_fb745b5a2c4d5a78bc4b62daa0813e15)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_06ee5fae1c8f54ea9661a8aa667e1075)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::adjointInPlace;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (*method_pointer_bacc77018bb45943aa347afab3f346cf)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::Identity;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (*method_pointer_d59fdcc12da45c50a024b7826fc3e82c)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::Identity;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_97408da19c985f938cba3a30d86ef342)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setIdentity;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_96db21dd8e555f1d9c938a1b1d7e0fef)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_f2fa7ded3604550285d9f3584a217718)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_451b9ac73c8f5f9eacb74a69b8f3240b)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_e8f621d9417e53999b41abf4f8e532c7)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7e6b850c67e05ff9ad08b51cf6797d57)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aad3efb90ae45ab08093433017bf35c9)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isUnitary;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b103a42f76b55a06b432f274b6bea37b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_479e225e6a8b555da937ada90b006204)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4c424b77f7cd57f3a5efa2a169a15d4b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_21e6c92607ed5343b7fa49ac0b47713f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d5f646b3456c5e49a92ea031bbcd63db)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aa59bea393e5542bb3a98e8810aec981)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_667908525cf95c69b2b0dea70331cb71)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c4fb71b7796d5b7eb0aaf240ea2a69cf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::lu;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_54898b2617855741a380e7e3cd20b615)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5f9d6537295e55559bfe18ea2cfc3321)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2963be8d15f75f61a2b2476358a91c45)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_958ebcc718cd54b59a0c2db4691378a4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_006e6d0e9465561cb87a002a738509a1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7882ae6131145eda820a87b42fbb9768)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b84219ac747955cc908d394860b47f7d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_baf9f9c4012350c294ff9a63a434da2d)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1acb6bb7683e5d7eb56c55d5065f4453)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_c673788ccc1655fbaaebad98db7c7785("_MatrixBase_c673788ccc1655fbaaebad98db7c7785", "", boost::python::no_init);
    class_c673788ccc1655fbaaebad98db7c7785.def("diagonal_size", method_pointer_68d932aca6b2599eb5945bf17b1cac7f, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("conjugate", method_pointer_a238fe6f41745e568837f11a84ed6f27, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("real", method_pointer_e1cc24109b4b598e8af4227e56b9f5df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("real", method_pointer_ddfb0e800218589f92f2bd196440dd9c, boost::python::return_internal_reference<>(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("real", autowig::method_decorator_ddfb0e800218589f92f2bd196440dd9c);
    class_c673788ccc1655fbaaebad98db7c7785.def("squared_norm", method_pointer_ddacf433da955c9a8d30902a005e81e7, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("norm", method_pointer_3cb9902809485259a528ba316eb78ec4, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("blue_norm", method_pointer_c6fbbdd1bb66517e95e3d3dfda96acc9, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("hypot_norm", method_pointer_198d9bd9f77b56339854796c5caf8940, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("normalized", method_pointer_1352f13fde4552fb83d4306a95b57b0e, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("stable_normalized", method_pointer_4fa41cb306bd570bb5c30a62156c330e, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("normalize", method_pointer_65b3f58f17125cca96fd2a680a14402f, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("stable_normalize", method_pointer_fb745b5a2c4d5a78bc4b62daa0813e15, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("adjoint_in_place", method_pointer_06ee5fae1c8f54ea9661a8aa667e1075, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("identity", method_pointer_bacc77018bb45943aa347afab3f346cf, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("identity", method_pointer_d59fdcc12da45c50a024b7826fc3e82c, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("set_identity", method_pointer_97408da19c985f938cba3a30d86ef342, boost::python::return_internal_reference<>(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("set_identity", autowig::method_decorator_97408da19c985f938cba3a30d86ef342);
    class_c673788ccc1655fbaaebad98db7c7785.def("set_identity", method_pointer_96db21dd8e555f1d9c938a1b1d7e0fef, boost::python::return_internal_reference<>(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("set_identity", autowig::method_decorator_96db21dd8e555f1d9c938a1b1d7e0fef);
    class_c673788ccc1655fbaaebad98db7c7785.def("is_identity", method_pointer_f2fa7ded3604550285d9f3584a217718, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("is_diagonal", method_pointer_451b9ac73c8f5f9eacb74a69b8f3240b, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("is_upper_triangular", method_pointer_e8f621d9417e53999b41abf4f8e532c7, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("is_lower_triangular", method_pointer_7e6b850c67e05ff9ad08b51cf6797d57, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("is_unitary", method_pointer_aad3efb90ae45ab08093433017bf35c9, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("force_aligned_access", method_pointer_b103a42f76b55a06b432f274b6bea37b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("force_aligned_access", method_pointer_479e225e6a8b555da937ada90b006204, boost::python::return_internal_reference<>(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("force_aligned_access", autowig::method_decorator_479e225e6a8b555da937ada90b006204);
    class_c673788ccc1655fbaaebad98db7c7785.def("trace", method_pointer_4c424b77f7cd57f3a5efa2a169a15d4b, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("matrix", method_pointer_21e6c92607ed5343b7fa49ac0b47713f, boost::python::return_internal_reference<>(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("matrix", autowig::method_decorator_21e6c92607ed5343b7fa49ac0b47713f);
    class_c673788ccc1655fbaaebad98db7c7785.def("matrix", method_pointer_d5f646b3456c5e49a92ea031bbcd63db, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c673788ccc1655fbaaebad98db7c7785.def("full_piv_lu", method_pointer_aa59bea393e5542bb3a98e8810aec981, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("partial_piv_lu", method_pointer_667908525cf95c69b2b0dea70331cb71, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("lu", method_pointer_c4fb71b7796d5b7eb0aaf240ea2a69cf, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("determinant", method_pointer_54898b2617855741a380e7e3cd20b615, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("llt", method_pointer_5f9d6537295e55559bfe18ea2cfc3321, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("ldlt", method_pointer_2963be8d15f75f61a2b2476358a91c45, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("householder_qr", method_pointer_958ebcc718cd54b59a0c2db4691378a4, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("col_piv_householder_qr", method_pointer_006e6d0e9465561cb87a002a738509a1, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("full_piv_householder_qr", method_pointer_7882ae6131145eda820a87b42fbb9768, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("eigenvalues", method_pointer_b84219ac747955cc908d394860b47f7d, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("jacobi_svd", method_pointer_baf9f9c4012350c294ff9a63a434da2d, "");
    class_c673788ccc1655fbaaebad98db7c7785.def("make_householder_in_place", method_pointer_1acb6bb7683e5d7eb56c55d5065f4453, "");
    class_c673788ccc1655fbaaebad98db7c7785.staticmethod("identity");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >();
    }

}