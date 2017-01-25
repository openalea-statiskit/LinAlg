#include "_ieigen.h"


namespace autowig
{
    void method_decorator_acd3b80d99b7514093caeb1f922a9372(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_e1187b96f6ff50b38f3ed45345dfbf15(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_da68d7415842522fb5f3cd477aeae1cd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_3a8a2b7f8b4052fcb915d9489bffe11d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_81a59b44d33d5a87ab0aeae2b9c7a48a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_0596d61b3c9450df840ed60d172a160a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_6664228bd497536bb1edf5cd4c078f77)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::diagonalSize;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_e8e3af8aaa9754af82441a4a335e5ef3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::conjugate;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_28e8980509d15ab0954827dfe9cf81ff)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::real;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_acd3b80d99b7514093caeb1f922a9372)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_c8cf7100e1eb5f95ba0aebed14c45b95)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ba45c1036d795de780c70fa4157045bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_87ac316571f657b79780543ed93d793b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_2019fc78b7a75bd6bc9466b7b6f84140)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ea757b9b242a56cbb5701decaf658989)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::hypotNorm;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_cfb7db3dddfd57509705fe3406af371c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::normalized;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a43063ce8dd45402a751382784a37843)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_bbdef64249c35cba8218f3e1623e9eef)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_1358a8a353ab5d9d8697a115c88ea33a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_34390f174a1c5360b8be2e320f27e102)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_e1187b96f6ff50b38f3ed45345dfbf15)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setIdentity;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_da68d7415842522fb5f3cd477aeae1cd)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7e8a908e8aed53c09ae5d3e799eb0cec)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7f50814f15d0568696b87449e4f5c9da)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_df4b704189435a809d593cb16af792b7)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_71d6e4fb9c595d758a471f197028a5a6)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_daaa0136fe5e59179cc5869b70b1535b)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isUnitary;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_973978410dc35d76bafefc945e18365e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_3a8a2b7f8b4052fcb915d9489bffe11d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_1ddd5e03f54159748cfbe3c11c729062)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_81a59b44d33d5a87ab0aeae2b9c7a48a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_70e4a57ca5315faf994167654e203c7a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_b2b7e162f9a054e5a0b91a22b5889b3e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::determinant;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_c5d30439bdf45937becf22ff774e347e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_4b15b63cd5fd5affb1ffa3760f044ab4)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_0546b44ba7005b2fbd4e173a1a109fea)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > > class_0596d61b3c9450df840ed60d172a160a("_MatrixBase_0596d61b3c9450df840ed60d172a160a", "", boost::python::no_init);
    class_0596d61b3c9450df840ed60d172a160a.def("diagonal_size", method_pointer_6664228bd497536bb1edf5cd4c078f77, "");
    class_0596d61b3c9450df840ed60d172a160a.def("conjugate", method_pointer_e8e3af8aaa9754af82441a4a335e5ef3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("real", method_pointer_28e8980509d15ab0954827dfe9cf81ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("real", method_pointer_acd3b80d99b7514093caeb1f922a9372, boost::python::return_internal_reference<>(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("real", autowig::method_decorator_acd3b80d99b7514093caeb1f922a9372);
    class_0596d61b3c9450df840ed60d172a160a.def("squared_norm", method_pointer_c8cf7100e1eb5f95ba0aebed14c45b95, "");
    class_0596d61b3c9450df840ed60d172a160a.def("norm", method_pointer_ba45c1036d795de780c70fa4157045bc, "");
    class_0596d61b3c9450df840ed60d172a160a.def("stable_norm", method_pointer_87ac316571f657b79780543ed93d793b, "");
    class_0596d61b3c9450df840ed60d172a160a.def("blue_norm", method_pointer_2019fc78b7a75bd6bc9466b7b6f84140, "");
    class_0596d61b3c9450df840ed60d172a160a.def("hypot_norm", method_pointer_ea757b9b242a56cbb5701decaf658989, "");
    class_0596d61b3c9450df840ed60d172a160a.def("normalized", method_pointer_cfb7db3dddfd57509705fe3406af371c, "");
    class_0596d61b3c9450df840ed60d172a160a.def("stable_normalized", method_pointer_a43063ce8dd45402a751382784a37843, "");
    class_0596d61b3c9450df840ed60d172a160a.def("normalize", method_pointer_bbdef64249c35cba8218f3e1623e9eef, "");
    class_0596d61b3c9450df840ed60d172a160a.def("stable_normalize", method_pointer_1358a8a353ab5d9d8697a115c88ea33a, "");
    class_0596d61b3c9450df840ed60d172a160a.def("adjoint_in_place", method_pointer_34390f174a1c5360b8be2e320f27e102, "");
    class_0596d61b3c9450df840ed60d172a160a.def("set_identity", method_pointer_e1187b96f6ff50b38f3ed45345dfbf15, boost::python::return_internal_reference<>(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("set_identity", autowig::method_decorator_e1187b96f6ff50b38f3ed45345dfbf15);
    class_0596d61b3c9450df840ed60d172a160a.def("set_identity", method_pointer_da68d7415842522fb5f3cd477aeae1cd, boost::python::return_internal_reference<>(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("set_identity", autowig::method_decorator_da68d7415842522fb5f3cd477aeae1cd);
    class_0596d61b3c9450df840ed60d172a160a.def("is_identity", method_pointer_7e8a908e8aed53c09ae5d3e799eb0cec, "");
    class_0596d61b3c9450df840ed60d172a160a.def("is_diagonal", method_pointer_7f50814f15d0568696b87449e4f5c9da, "");
    class_0596d61b3c9450df840ed60d172a160a.def("is_upper_triangular", method_pointer_df4b704189435a809d593cb16af792b7, "");
    class_0596d61b3c9450df840ed60d172a160a.def("is_lower_triangular", method_pointer_71d6e4fb9c595d758a471f197028a5a6, "");
    class_0596d61b3c9450df840ed60d172a160a.def("is_unitary", method_pointer_daaa0136fe5e59179cc5869b70b1535b, "");
    class_0596d61b3c9450df840ed60d172a160a.def("force_aligned_access", method_pointer_973978410dc35d76bafefc945e18365e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("force_aligned_access", method_pointer_3a8a2b7f8b4052fcb915d9489bffe11d, boost::python::return_internal_reference<>(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("force_aligned_access", autowig::method_decorator_3a8a2b7f8b4052fcb915d9489bffe11d);
    class_0596d61b3c9450df840ed60d172a160a.def("trace", method_pointer_1ddd5e03f54159748cfbe3c11c729062, "");
    class_0596d61b3c9450df840ed60d172a160a.def("matrix", method_pointer_81a59b44d33d5a87ab0aeae2b9c7a48a, boost::python::return_internal_reference<>(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("matrix", autowig::method_decorator_81a59b44d33d5a87ab0aeae2b9c7a48a);
    class_0596d61b3c9450df840ed60d172a160a.def("matrix", method_pointer_70e4a57ca5315faf994167654e203c7a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0596d61b3c9450df840ed60d172a160a.def("determinant", method_pointer_b2b7e162f9a054e5a0b91a22b5889b3e, "");
    class_0596d61b3c9450df840ed60d172a160a.def("unit_orthogonal", method_pointer_c5d30439bdf45937becf22ff774e347e, "");
    class_0596d61b3c9450df840ed60d172a160a.def("euler_angles", method_pointer_4b15b63cd5fd5affb1ffa3760f044ab4, "");
    class_0596d61b3c9450df840ed60d172a160a.def("make_householder_in_place", method_pointer_0546b44ba7005b2fbd4e173a1a109fea, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >();
    }

}