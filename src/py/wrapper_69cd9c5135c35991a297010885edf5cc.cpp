#include "_ieigen.h"


namespace autowig
{
    void method_decorator_65fbabab76f6500083da6ee723a3b20a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_426bb6c0d1745b08aa361e82ad1a12cf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_8c9007c295305b25b182e6851ce2e0ae(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_aba4f84b3c4650ef9b01cf73bf86b3b1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_641de0be9ecd587f98d1120bd06eec3e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_69cd9c5135c35991a297010885edf5cc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_a8d5ec1a87cc56fa81b825beeedf9488)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::diagonalSize;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_cd28202ecaba5c9d9b948f98299e5cab)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::conjugate;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7b1477d736445deb818c6fda2020ce31)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::real;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_65fbabab76f6500083da6ee723a3b20a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_44f6be5d62705e258120b1e2d806406a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_cb9086a9dc1f54e5afabf237d2d80598)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7b3a741084955d84b84df9dcf35b6b49)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_761f66c1a0f152e79241c0ddd90f63e9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::hypotNorm;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_a78720ede4f056a0bbf87d1be0bfd5cf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::normalized;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_a96ee4548afe5e848f284b71eaae177f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7537522f33ba5b149ed6cebd773de70a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d25f8088789a5c8b814b89cb8a82eaaf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d0f4be47294258dba49409f9b5c74ac4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_426bb6c0d1745b08aa361e82ad1a12cf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setIdentity;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_8c9007c295305b25b182e6851ce2e0ae)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2b2692b61c225a219a49e656bfb143ea)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_9c30907858c9550d85fb4a2122820181)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d8ce43149f505b088bafd25e2c2ec1a9)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_b2266ddf51be5d9b8dc39b6bb049001d)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_1230315c9b605a32bb856e0d505f56c9)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isUnitary;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_da22961c55f45b4a870f1cbe34009c8f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_aba4f84b3c4650ef9b01cf73bf86b3b1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_baa6db168d1c55748e1b76ac1790ad67)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_641de0be9ecd587f98d1120bd06eec3e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_77a381f90ad25b1c8b14f3e6f713b5d1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_8cd720725a62537f9d103550763557fb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::determinant;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5c1e83d12ff35c5faece51e23e1cc3f1)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_69cd9c5135c35991a297010885edf5cc("_MatrixBase_69cd9c5135c35991a297010885edf5cc", "", boost::python::no_init);
    class_69cd9c5135c35991a297010885edf5cc.def("diagonal_size", method_pointer_a8d5ec1a87cc56fa81b825beeedf9488, "");
    class_69cd9c5135c35991a297010885edf5cc.def("conjugate", method_pointer_cd28202ecaba5c9d9b948f98299e5cab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("real", method_pointer_7b1477d736445deb818c6fda2020ce31, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("real", method_pointer_65fbabab76f6500083da6ee723a3b20a, boost::python::return_internal_reference<>(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("real", autowig::method_decorator_65fbabab76f6500083da6ee723a3b20a);
    class_69cd9c5135c35991a297010885edf5cc.def("squared_norm", method_pointer_44f6be5d62705e258120b1e2d806406a, "");
    class_69cd9c5135c35991a297010885edf5cc.def("norm", method_pointer_cb9086a9dc1f54e5afabf237d2d80598, "");
    class_69cd9c5135c35991a297010885edf5cc.def("blue_norm", method_pointer_7b3a741084955d84b84df9dcf35b6b49, "");
    class_69cd9c5135c35991a297010885edf5cc.def("hypot_norm", method_pointer_761f66c1a0f152e79241c0ddd90f63e9, "");
    class_69cd9c5135c35991a297010885edf5cc.def("normalized", method_pointer_a78720ede4f056a0bbf87d1be0bfd5cf, "");
    class_69cd9c5135c35991a297010885edf5cc.def("stable_normalized", method_pointer_a96ee4548afe5e848f284b71eaae177f, "");
    class_69cd9c5135c35991a297010885edf5cc.def("normalize", method_pointer_7537522f33ba5b149ed6cebd773de70a, "");
    class_69cd9c5135c35991a297010885edf5cc.def("stable_normalize", method_pointer_d25f8088789a5c8b814b89cb8a82eaaf, "");
    class_69cd9c5135c35991a297010885edf5cc.def("adjoint_in_place", method_pointer_d0f4be47294258dba49409f9b5c74ac4, "");
    class_69cd9c5135c35991a297010885edf5cc.def("set_identity", method_pointer_426bb6c0d1745b08aa361e82ad1a12cf, boost::python::return_internal_reference<>(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("set_identity", autowig::method_decorator_426bb6c0d1745b08aa361e82ad1a12cf);
    class_69cd9c5135c35991a297010885edf5cc.def("set_identity", method_pointer_8c9007c295305b25b182e6851ce2e0ae, boost::python::return_internal_reference<>(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("set_identity", autowig::method_decorator_8c9007c295305b25b182e6851ce2e0ae);
    class_69cd9c5135c35991a297010885edf5cc.def("is_identity", method_pointer_2b2692b61c225a219a49e656bfb143ea, "");
    class_69cd9c5135c35991a297010885edf5cc.def("is_diagonal", method_pointer_9c30907858c9550d85fb4a2122820181, "");
    class_69cd9c5135c35991a297010885edf5cc.def("is_upper_triangular", method_pointer_d8ce43149f505b088bafd25e2c2ec1a9, "");
    class_69cd9c5135c35991a297010885edf5cc.def("is_lower_triangular", method_pointer_b2266ddf51be5d9b8dc39b6bb049001d, "");
    class_69cd9c5135c35991a297010885edf5cc.def("is_unitary", method_pointer_1230315c9b605a32bb856e0d505f56c9, "");
    class_69cd9c5135c35991a297010885edf5cc.def("force_aligned_access", method_pointer_da22961c55f45b4a870f1cbe34009c8f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("force_aligned_access", method_pointer_aba4f84b3c4650ef9b01cf73bf86b3b1, boost::python::return_internal_reference<>(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("force_aligned_access", autowig::method_decorator_aba4f84b3c4650ef9b01cf73bf86b3b1);
    class_69cd9c5135c35991a297010885edf5cc.def("trace", method_pointer_baa6db168d1c55748e1b76ac1790ad67, "");
    class_69cd9c5135c35991a297010885edf5cc.def("matrix", method_pointer_641de0be9ecd587f98d1120bd06eec3e, boost::python::return_internal_reference<>(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("matrix", autowig::method_decorator_641de0be9ecd587f98d1120bd06eec3e);
    class_69cd9c5135c35991a297010885edf5cc.def("matrix", method_pointer_77a381f90ad25b1c8b14f3e6f713b5d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69cd9c5135c35991a297010885edf5cc.def("determinant", method_pointer_8cd720725a62537f9d103550763557fb, "");
    class_69cd9c5135c35991a297010885edf5cc.def("make_householder_in_place", method_pointer_5c1e83d12ff35c5faece51e23e1cc3f1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >();
    }

}