#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b10a9024e3de5503936dbec37ad8dc93(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_3c15985e98d25dfdbffdab2bbb6c3db4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_da1b63c21fed51a2bdeaf17b5294565c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_53649069cf93502f8649419b0a9fc1a2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c576e8953daf5b2e81c5ad6e7177a5b3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_b240feab89115a6d8be607c6d9ed3125()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_8e44f7c24a6c5844b80f28db9730baaa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::diagonalSize;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_f73f71bb105c5b768a6e3aa9a39c9487)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::conjugate;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_25f4f02c764958b1871a1517fb7e773e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::real;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_b10a9024e3de5503936dbec37ad8dc93)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_75c88ffdc7035ed4a9297829abdcd182)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c323d022c30d583b8b63fdaacf1f2190)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_dc40a18865fc5d79bd6c8d561b92ea6b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_b4b619ec7b115f64b6a912ea97b1b609)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_119922bd28d35761914011a73d89e3bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::hypotNorm;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_858ebacf15b753088b8819e57e59aeea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::normalized;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_e8206b9236b252e9a938b70cc0abe7a3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_dd9362fd0a11578abffc1f3356516a47)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_4671a9eaa92f59cdac64bd9ac6d43fab)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_01e8fd1075aa53b1ae8582e2b07572f7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_3c15985e98d25dfdbffdab2bbb6c3db4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setIdentity;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_da1b63c21fed51a2bdeaf17b5294565c)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_bf5a24f6fb925991befb82a1db906dda)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_dfd5591c3d4c57ed86bced96af91a5f8)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_fba12c6ee26459f390c67f2bef82f0cb)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c61dbff47c7f555e815dfce841a1d786)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6e97423545c85afbb0528480ab67e7d5)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isUnitary;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_9bf82bd0a1075d219350647ba7ee9692)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_53649069cf93502f8649419b0a9fc1a2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_19b85f229d9d5f04b98f8f864c0a918a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c576e8953daf5b2e81c5ad6e7177a5b3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_7977bba6e3a55bab80d345d35d286958)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_13c1bfbf8b5a5e9198378cb1d9f4964d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::determinant;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_1cd1a0237fe25a2aaeb927a99db48ee6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_dff253873b875e6cb7807f613bd1f1a9)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > > class_b240feab89115a6d8be607c6d9ed3125("_MatrixBase_b240feab89115a6d8be607c6d9ed3125", "", boost::python::no_init);
    class_b240feab89115a6d8be607c6d9ed3125.def("diagonal_size", method_pointer_8e44f7c24a6c5844b80f28db9730baaa, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("conjugate", method_pointer_f73f71bb105c5b768a6e3aa9a39c9487, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("real", method_pointer_25f4f02c764958b1871a1517fb7e773e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("real", method_pointer_b10a9024e3de5503936dbec37ad8dc93, boost::python::return_internal_reference<>(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("real", autowig::method_decorator_b10a9024e3de5503936dbec37ad8dc93);
    class_b240feab89115a6d8be607c6d9ed3125.def("squared_norm", method_pointer_75c88ffdc7035ed4a9297829abdcd182, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("norm", method_pointer_c323d022c30d583b8b63fdaacf1f2190, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("stable_norm", method_pointer_dc40a18865fc5d79bd6c8d561b92ea6b, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("blue_norm", method_pointer_b4b619ec7b115f64b6a912ea97b1b609, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("hypot_norm", method_pointer_119922bd28d35761914011a73d89e3bc, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("normalized", method_pointer_858ebacf15b753088b8819e57e59aeea, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("stable_normalized", method_pointer_e8206b9236b252e9a938b70cc0abe7a3, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("normalize", method_pointer_dd9362fd0a11578abffc1f3356516a47, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("stable_normalize", method_pointer_4671a9eaa92f59cdac64bd9ac6d43fab, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("adjoint_in_place", method_pointer_01e8fd1075aa53b1ae8582e2b07572f7, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("set_identity", method_pointer_3c15985e98d25dfdbffdab2bbb6c3db4, boost::python::return_internal_reference<>(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("set_identity", autowig::method_decorator_3c15985e98d25dfdbffdab2bbb6c3db4);
    class_b240feab89115a6d8be607c6d9ed3125.def("set_identity", method_pointer_da1b63c21fed51a2bdeaf17b5294565c, boost::python::return_internal_reference<>(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("set_identity", autowig::method_decorator_da1b63c21fed51a2bdeaf17b5294565c);
    class_b240feab89115a6d8be607c6d9ed3125.def("is_identity", method_pointer_bf5a24f6fb925991befb82a1db906dda, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("is_diagonal", method_pointer_dfd5591c3d4c57ed86bced96af91a5f8, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("is_upper_triangular", method_pointer_fba12c6ee26459f390c67f2bef82f0cb, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("is_lower_triangular", method_pointer_c61dbff47c7f555e815dfce841a1d786, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("is_unitary", method_pointer_6e97423545c85afbb0528480ab67e7d5, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("force_aligned_access", method_pointer_9bf82bd0a1075d219350647ba7ee9692, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("force_aligned_access", method_pointer_53649069cf93502f8649419b0a9fc1a2, boost::python::return_internal_reference<>(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("force_aligned_access", autowig::method_decorator_53649069cf93502f8649419b0a9fc1a2);
    class_b240feab89115a6d8be607c6d9ed3125.def("trace", method_pointer_19b85f229d9d5f04b98f8f864c0a918a, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("matrix", method_pointer_c576e8953daf5b2e81c5ad6e7177a5b3, boost::python::return_internal_reference<>(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("matrix", autowig::method_decorator_c576e8953daf5b2e81c5ad6e7177a5b3);
    class_b240feab89115a6d8be607c6d9ed3125.def("matrix", method_pointer_7977bba6e3a55bab80d345d35d286958, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b240feab89115a6d8be607c6d9ed3125.def("determinant", method_pointer_13c1bfbf8b5a5e9198378cb1d9f4964d, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("unit_orthogonal", method_pointer_1cd1a0237fe25a2aaeb927a99db48ee6, "");
    class_b240feab89115a6d8be607c6d9ed3125.def("make_householder_in_place", method_pointer_dff253873b875e6cb7807f613bd1f1a9, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >();
    }

}