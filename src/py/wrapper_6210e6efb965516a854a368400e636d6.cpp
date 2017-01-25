#include "_ieigen.h"


namespace autowig
{
    void method_decorator_116a131cad1154d58ac4b152176451bf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_1e42bdc62a25545ab7f0946ac7098c2d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_ccbd5f400510508fba749a75a30934b8(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_52fc2c019e5657beb27c7ed7182e0de4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d5bbf6ed49a2531ebb29fab622713a86(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_6210e6efb965516a854a368400e636d6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_693977739cc052f6beb7f2cde698e0fe)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::diagonalSize;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6aa9db4d6e3e559e841d66e221c26fb8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::conjugate;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_5e6cf20f52f952b3a7475e55755c85dc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::real;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_116a131cad1154d58ac4b152176451bf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_3f106d1636f156838548d36c5193c7e9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b524ab76560158fb89bf15ec31ac9b34)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2ab8517ded2457b1821717234db19a63)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_709249a7ec8b533bbcf276c8dbcef450)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f552d52f09b2540993e8f0464c17c0ea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::hypotNorm;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2a9991e0d9ab56049431a8ab54c8686e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::normalized;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_39f6762f90365620bc3231f74a2567c6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_e39f7dd96bea50a6aa105d7bc95d4d08)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_7243ec9468ab53f79bbd84f6f734cba2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_e37440c7dacb5648a285b4c2e7e52482)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_1e42bdc62a25545ab7f0946ac7098c2d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setIdentity;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_ccbd5f400510508fba749a75a30934b8)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c960fafdd1cf5876a58c72a1d245d570)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_1b4b66d8bbdc5de3a7a3617211bec687)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b808e3de7aa25c1ba24087a08f49ad01)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_75f1b3f506895ceaa3dd1a094d2b6fff)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b4b2ca15dd465f278b3daaece9147404)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isUnitary;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_fc187a2bf10956ae93c68a576b223397)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_52fc2c019e5657beb27c7ed7182e0de4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_48d2d5afb6ae59649b8aa8b8ed9ca29f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d5bbf6ed49a2531ebb29fab622713a86)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_ab80dc299955514283af6453b7e1c108)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_10830d0d0d92554e8d868c9ec69aa445)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8425db7115ca55499553e51bea1b1e23)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::eigenvalues;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0d509c84872f5896bfd6433b160527e1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_71149093e83552c89c9c2106f67b6c27)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_cc321bac95be502898c0b62cdc633bbc)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_6210e6efb965516a854a368400e636d6("_MatrixBase_6210e6efb965516a854a368400e636d6", "", boost::python::no_init);
    class_6210e6efb965516a854a368400e636d6.def("diagonal_size", method_pointer_693977739cc052f6beb7f2cde698e0fe, "");
    class_6210e6efb965516a854a368400e636d6.def("conjugate", method_pointer_6aa9db4d6e3e559e841d66e221c26fb8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6210e6efb965516a854a368400e636d6.def("real", method_pointer_5e6cf20f52f952b3a7475e55755c85dc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6210e6efb965516a854a368400e636d6.def("real", method_pointer_116a131cad1154d58ac4b152176451bf, boost::python::return_internal_reference<>(), "");
    class_6210e6efb965516a854a368400e636d6.def("real", autowig::method_decorator_116a131cad1154d58ac4b152176451bf);
    class_6210e6efb965516a854a368400e636d6.def("squared_norm", method_pointer_3f106d1636f156838548d36c5193c7e9, "");
    class_6210e6efb965516a854a368400e636d6.def("norm", method_pointer_b524ab76560158fb89bf15ec31ac9b34, "");
    class_6210e6efb965516a854a368400e636d6.def("stable_norm", method_pointer_2ab8517ded2457b1821717234db19a63, "");
    class_6210e6efb965516a854a368400e636d6.def("blue_norm", method_pointer_709249a7ec8b533bbcf276c8dbcef450, "");
    class_6210e6efb965516a854a368400e636d6.def("hypot_norm", method_pointer_f552d52f09b2540993e8f0464c17c0ea, "");
    class_6210e6efb965516a854a368400e636d6.def("normalized", method_pointer_2a9991e0d9ab56049431a8ab54c8686e, "");
    class_6210e6efb965516a854a368400e636d6.def("stable_normalized", method_pointer_39f6762f90365620bc3231f74a2567c6, "");
    class_6210e6efb965516a854a368400e636d6.def("normalize", method_pointer_e39f7dd96bea50a6aa105d7bc95d4d08, "");
    class_6210e6efb965516a854a368400e636d6.def("stable_normalize", method_pointer_7243ec9468ab53f79bbd84f6f734cba2, "");
    class_6210e6efb965516a854a368400e636d6.def("adjoint_in_place", method_pointer_e37440c7dacb5648a285b4c2e7e52482, "");
    class_6210e6efb965516a854a368400e636d6.def("set_identity", method_pointer_1e42bdc62a25545ab7f0946ac7098c2d, boost::python::return_internal_reference<>(), "");
    class_6210e6efb965516a854a368400e636d6.def("set_identity", autowig::method_decorator_1e42bdc62a25545ab7f0946ac7098c2d);
    class_6210e6efb965516a854a368400e636d6.def("set_identity", method_pointer_ccbd5f400510508fba749a75a30934b8, boost::python::return_internal_reference<>(), "");
    class_6210e6efb965516a854a368400e636d6.def("set_identity", autowig::method_decorator_ccbd5f400510508fba749a75a30934b8);
    class_6210e6efb965516a854a368400e636d6.def("is_identity", method_pointer_c960fafdd1cf5876a58c72a1d245d570, "");
    class_6210e6efb965516a854a368400e636d6.def("is_diagonal", method_pointer_1b4b66d8bbdc5de3a7a3617211bec687, "");
    class_6210e6efb965516a854a368400e636d6.def("is_upper_triangular", method_pointer_b808e3de7aa25c1ba24087a08f49ad01, "");
    class_6210e6efb965516a854a368400e636d6.def("is_lower_triangular", method_pointer_75f1b3f506895ceaa3dd1a094d2b6fff, "");
    class_6210e6efb965516a854a368400e636d6.def("is_unitary", method_pointer_b4b2ca15dd465f278b3daaece9147404, "");
    class_6210e6efb965516a854a368400e636d6.def("force_aligned_access", method_pointer_fc187a2bf10956ae93c68a576b223397, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6210e6efb965516a854a368400e636d6.def("force_aligned_access", method_pointer_52fc2c019e5657beb27c7ed7182e0de4, boost::python::return_internal_reference<>(), "");
    class_6210e6efb965516a854a368400e636d6.def("force_aligned_access", autowig::method_decorator_52fc2c019e5657beb27c7ed7182e0de4);
    class_6210e6efb965516a854a368400e636d6.def("trace", method_pointer_48d2d5afb6ae59649b8aa8b8ed9ca29f, "");
    class_6210e6efb965516a854a368400e636d6.def("matrix", method_pointer_d5bbf6ed49a2531ebb29fab622713a86, boost::python::return_internal_reference<>(), "");
    class_6210e6efb965516a854a368400e636d6.def("matrix", autowig::method_decorator_d5bbf6ed49a2531ebb29fab622713a86);
    class_6210e6efb965516a854a368400e636d6.def("matrix", method_pointer_ab80dc299955514283af6453b7e1c108, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6210e6efb965516a854a368400e636d6.def("determinant", method_pointer_10830d0d0d92554e8d868c9ec69aa445, "");
    class_6210e6efb965516a854a368400e636d6.def("eigenvalues", method_pointer_8425db7115ca55499553e51bea1b1e23, "");
    class_6210e6efb965516a854a368400e636d6.def("unit_orthogonal", method_pointer_0d509c84872f5896bfd6433b160527e1, "");
    class_6210e6efb965516a854a368400e636d6.def("euler_angles", method_pointer_71149093e83552c89c9c2106f67b6c27, "");
    class_6210e6efb965516a854a368400e636d6.def("make_householder_in_place", method_pointer_cc321bac95be502898c0b62cdc633bbc, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >();
    }

}