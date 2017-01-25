#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fb09f248c9295c4d82aa967237f81be9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_ab40508a727a582b9deaea4b200c61dc(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_c68bfb29201052ec8d926efdc0ca572b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_0682150bcef2576db5ce16be24060998(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_758527a15fc255dca8e5ff57e608cd6a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_5c43ead650b25c229115e9d637951d30()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_bcc84f4029275bb8933b6f4b86b0b41b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::diagonalSize;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_61cbc3288ef95dfd8bae444b461df2f1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::conjugate;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_fb14dbb4a6785f688bfe25591678e07d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::real;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_fb09f248c9295c4d82aa967237f81be9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_2e58afc5652456b586f2e3b58a8aba82)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_55035e6d33635b3a9e40768b91a53b83)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_ebb9254fbd4b508e92a4ce963b834194)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_765a59bdcd815b7c835feb3b0821c233)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_98b2f0f913015825bd8a4287d4bc19c3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f1f1e2cf1c275c44889fa35d95dfa258)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::normalized;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f31c6bc2462b585793b461a4d5e787bb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_25a44273c0035ace862f86992fd85527)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_d3d185c2b09c5749a1517950307424a5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_58bca79f0e9c5a15851454932af31518)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_ab40508a727a582b9deaea4b200c61dc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setIdentity;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_c68bfb29201052ec8d926efdc0ca572b)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_e3c51b58e68552f1993d2e25758b5862)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f78061e3b2b55da083749707042d6370)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_c414cd55a12e5adf8979bb3385ee5a47)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f29c4007128a51229a31a9bdc0b3070f)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_14602b868754530fb7347d04b6cfdc54)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isUnitary;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_da8547aa6bfa5afc8531c779317b42a5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_0682150bcef2576db5ce16be24060998)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_c0a08d3c3b9d5ee7b910451334c91cbf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_758527a15fc255dca8e5ff57e608cd6a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f8aee6a872b352e4be4fc573d3b366dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_80284eba27db545cb3eea6a22ff05dc5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::determinant;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_b49decb6bf525fa286f4a96394416fd2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_99f2459ee4215122b08ea37648464a7a)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_06e9ce29f34d5e4ea7d031287ed6ed58)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > > class_5c43ead650b25c229115e9d637951d30("_MatrixBase_5c43ead650b25c229115e9d637951d30", "", boost::python::no_init);
    class_5c43ead650b25c229115e9d637951d30.def("diagonal_size", method_pointer_bcc84f4029275bb8933b6f4b86b0b41b, "");
    class_5c43ead650b25c229115e9d637951d30.def("conjugate", method_pointer_61cbc3288ef95dfd8bae444b461df2f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c43ead650b25c229115e9d637951d30.def("real", method_pointer_fb14dbb4a6785f688bfe25591678e07d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c43ead650b25c229115e9d637951d30.def("real", method_pointer_fb09f248c9295c4d82aa967237f81be9, boost::python::return_internal_reference<>(), "");
    class_5c43ead650b25c229115e9d637951d30.def("real", autowig::method_decorator_fb09f248c9295c4d82aa967237f81be9);
    class_5c43ead650b25c229115e9d637951d30.def("squared_norm", method_pointer_2e58afc5652456b586f2e3b58a8aba82, "");
    class_5c43ead650b25c229115e9d637951d30.def("norm", method_pointer_55035e6d33635b3a9e40768b91a53b83, "");
    class_5c43ead650b25c229115e9d637951d30.def("stable_norm", method_pointer_ebb9254fbd4b508e92a4ce963b834194, "");
    class_5c43ead650b25c229115e9d637951d30.def("blue_norm", method_pointer_765a59bdcd815b7c835feb3b0821c233, "");
    class_5c43ead650b25c229115e9d637951d30.def("hypot_norm", method_pointer_98b2f0f913015825bd8a4287d4bc19c3, "");
    class_5c43ead650b25c229115e9d637951d30.def("normalized", method_pointer_f1f1e2cf1c275c44889fa35d95dfa258, "");
    class_5c43ead650b25c229115e9d637951d30.def("stable_normalized", method_pointer_f31c6bc2462b585793b461a4d5e787bb, "");
    class_5c43ead650b25c229115e9d637951d30.def("normalize", method_pointer_25a44273c0035ace862f86992fd85527, "");
    class_5c43ead650b25c229115e9d637951d30.def("stable_normalize", method_pointer_d3d185c2b09c5749a1517950307424a5, "");
    class_5c43ead650b25c229115e9d637951d30.def("adjoint_in_place", method_pointer_58bca79f0e9c5a15851454932af31518, "");
    class_5c43ead650b25c229115e9d637951d30.def("set_identity", method_pointer_ab40508a727a582b9deaea4b200c61dc, boost::python::return_internal_reference<>(), "");
    class_5c43ead650b25c229115e9d637951d30.def("set_identity", autowig::method_decorator_ab40508a727a582b9deaea4b200c61dc);
    class_5c43ead650b25c229115e9d637951d30.def("set_identity", method_pointer_c68bfb29201052ec8d926efdc0ca572b, boost::python::return_internal_reference<>(), "");
    class_5c43ead650b25c229115e9d637951d30.def("set_identity", autowig::method_decorator_c68bfb29201052ec8d926efdc0ca572b);
    class_5c43ead650b25c229115e9d637951d30.def("is_identity", method_pointer_e3c51b58e68552f1993d2e25758b5862, "");
    class_5c43ead650b25c229115e9d637951d30.def("is_diagonal", method_pointer_f78061e3b2b55da083749707042d6370, "");
    class_5c43ead650b25c229115e9d637951d30.def("is_upper_triangular", method_pointer_c414cd55a12e5adf8979bb3385ee5a47, "");
    class_5c43ead650b25c229115e9d637951d30.def("is_lower_triangular", method_pointer_f29c4007128a51229a31a9bdc0b3070f, "");
    class_5c43ead650b25c229115e9d637951d30.def("is_unitary", method_pointer_14602b868754530fb7347d04b6cfdc54, "");
    class_5c43ead650b25c229115e9d637951d30.def("force_aligned_access", method_pointer_da8547aa6bfa5afc8531c779317b42a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c43ead650b25c229115e9d637951d30.def("force_aligned_access", method_pointer_0682150bcef2576db5ce16be24060998, boost::python::return_internal_reference<>(), "");
    class_5c43ead650b25c229115e9d637951d30.def("force_aligned_access", autowig::method_decorator_0682150bcef2576db5ce16be24060998);
    class_5c43ead650b25c229115e9d637951d30.def("trace", method_pointer_c0a08d3c3b9d5ee7b910451334c91cbf, "");
    class_5c43ead650b25c229115e9d637951d30.def("matrix", method_pointer_758527a15fc255dca8e5ff57e608cd6a, boost::python::return_internal_reference<>(), "");
    class_5c43ead650b25c229115e9d637951d30.def("matrix", autowig::method_decorator_758527a15fc255dca8e5ff57e608cd6a);
    class_5c43ead650b25c229115e9d637951d30.def("matrix", method_pointer_f8aee6a872b352e4be4fc573d3b366dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c43ead650b25c229115e9d637951d30.def("determinant", method_pointer_80284eba27db545cb3eea6a22ff05dc5, "");
    class_5c43ead650b25c229115e9d637951d30.def("unit_orthogonal", method_pointer_b49decb6bf525fa286f4a96394416fd2, "");
    class_5c43ead650b25c229115e9d637951d30.def("euler_angles", method_pointer_99f2459ee4215122b08ea37648464a7a, "");
    class_5c43ead650b25c229115e9d637951d30.def("make_householder_in_place", method_pointer_06e9ce29f34d5e4ea7d031287ed6ed58, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >();
    }

}