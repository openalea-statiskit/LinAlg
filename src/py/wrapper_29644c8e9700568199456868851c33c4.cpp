#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e0d52bbb02dd5487b359218edab11b06(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_ca8922cf74ea51dfa1e8a277e3878c93(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_1a8869f86770551693e15f458f42fe2d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_e9cbc149e0e1539db2d1efe9af03d9e4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_3e751a57d11156a195a6fb14eadf8cd2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_29644c8e9700568199456868851c33c4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_7a8c5cfac71956168b62c8cd552c2964)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::diagonalSize;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_cf97cd32ecbc5e9e84236b5136e33153)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::conjugate;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6ae604df934d524f9024a62911d22cee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::real;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_e0d52bbb02dd5487b359218edab11b06)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_9c07aea905085676a0cc5ce531b14fa5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_f451302cfb1d58759991238294b052f8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_60fff378138055049c81859e67c5fe61)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_50623e41f2365e6f8b233a98bf9b7185)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6d40761920ed525bb8103311c1c77976)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::hypotNorm;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_9980a981ec385f079fb3bdaaa3747e85)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::normalized;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_7fa3e998d78a5a3fa86c6b758e4fff45)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_d760ee8cbf3f54f0ac6f3cf910db8cfe)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_20be8f8c82705ea79e6e0d51be48d68a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_401c2920b36e5a53bd789283dbfd4004)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_ca8922cf74ea51dfa1e8a277e3878c93)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setIdentity;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_1a8869f86770551693e15f458f42fe2d)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_e49b004d836c56ab975299570d338c6e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c00febb43549508cbfec339023184afc)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_d51b7358f2d8523aa09bd08919ce1046)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_76b1f99c5b6250d0a12e4afe1989428e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_0abcfa9f519050e582fdb0d851396c68)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isUnitary;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_2baa5ac0e72350fbbdb0aa1459eb7fb6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_e9cbc149e0e1539db2d1efe9af03d9e4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_bffec9f65a515eb9a57dce6e453bc0ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_3e751a57d11156a195a6fb14eadf8cd2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_9c53e7aceac05ecfba103c86831f4816)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_725c612e918e554f854215c6117e8e77)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::determinant;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_44df84c49aca5dfaadb202ab03a88581)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_548a6a47ee995fb480055ee301c412ea)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > > class_29644c8e9700568199456868851c33c4("_MatrixBase_29644c8e9700568199456868851c33c4", "", boost::python::no_init);
    class_29644c8e9700568199456868851c33c4.def("diagonal_size", method_pointer_7a8c5cfac71956168b62c8cd552c2964, "");
    class_29644c8e9700568199456868851c33c4.def("conjugate", method_pointer_cf97cd32ecbc5e9e84236b5136e33153, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_29644c8e9700568199456868851c33c4.def("real", method_pointer_6ae604df934d524f9024a62911d22cee, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_29644c8e9700568199456868851c33c4.def("real", method_pointer_e0d52bbb02dd5487b359218edab11b06, boost::python::return_internal_reference<>(), "");
    class_29644c8e9700568199456868851c33c4.def("real", autowig::method_decorator_e0d52bbb02dd5487b359218edab11b06);
    class_29644c8e9700568199456868851c33c4.def("squared_norm", method_pointer_9c07aea905085676a0cc5ce531b14fa5, "");
    class_29644c8e9700568199456868851c33c4.def("norm", method_pointer_f451302cfb1d58759991238294b052f8, "");
    class_29644c8e9700568199456868851c33c4.def("stable_norm", method_pointer_60fff378138055049c81859e67c5fe61, "");
    class_29644c8e9700568199456868851c33c4.def("blue_norm", method_pointer_50623e41f2365e6f8b233a98bf9b7185, "");
    class_29644c8e9700568199456868851c33c4.def("hypot_norm", method_pointer_6d40761920ed525bb8103311c1c77976, "");
    class_29644c8e9700568199456868851c33c4.def("normalized", method_pointer_9980a981ec385f079fb3bdaaa3747e85, "");
    class_29644c8e9700568199456868851c33c4.def("stable_normalized", method_pointer_7fa3e998d78a5a3fa86c6b758e4fff45, "");
    class_29644c8e9700568199456868851c33c4.def("normalize", method_pointer_d760ee8cbf3f54f0ac6f3cf910db8cfe, "");
    class_29644c8e9700568199456868851c33c4.def("stable_normalize", method_pointer_20be8f8c82705ea79e6e0d51be48d68a, "");
    class_29644c8e9700568199456868851c33c4.def("adjoint_in_place", method_pointer_401c2920b36e5a53bd789283dbfd4004, "");
    class_29644c8e9700568199456868851c33c4.def("set_identity", method_pointer_ca8922cf74ea51dfa1e8a277e3878c93, boost::python::return_internal_reference<>(), "");
    class_29644c8e9700568199456868851c33c4.def("set_identity", autowig::method_decorator_ca8922cf74ea51dfa1e8a277e3878c93);
    class_29644c8e9700568199456868851c33c4.def("set_identity", method_pointer_1a8869f86770551693e15f458f42fe2d, boost::python::return_internal_reference<>(), "");
    class_29644c8e9700568199456868851c33c4.def("set_identity", autowig::method_decorator_1a8869f86770551693e15f458f42fe2d);
    class_29644c8e9700568199456868851c33c4.def("is_identity", method_pointer_e49b004d836c56ab975299570d338c6e, "");
    class_29644c8e9700568199456868851c33c4.def("is_diagonal", method_pointer_c00febb43549508cbfec339023184afc, "");
    class_29644c8e9700568199456868851c33c4.def("is_upper_triangular", method_pointer_d51b7358f2d8523aa09bd08919ce1046, "");
    class_29644c8e9700568199456868851c33c4.def("is_lower_triangular", method_pointer_76b1f99c5b6250d0a12e4afe1989428e, "");
    class_29644c8e9700568199456868851c33c4.def("is_unitary", method_pointer_0abcfa9f519050e582fdb0d851396c68, "");
    class_29644c8e9700568199456868851c33c4.def("force_aligned_access", method_pointer_2baa5ac0e72350fbbdb0aa1459eb7fb6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_29644c8e9700568199456868851c33c4.def("force_aligned_access", method_pointer_e9cbc149e0e1539db2d1efe9af03d9e4, boost::python::return_internal_reference<>(), "");
    class_29644c8e9700568199456868851c33c4.def("force_aligned_access", autowig::method_decorator_e9cbc149e0e1539db2d1efe9af03d9e4);
    class_29644c8e9700568199456868851c33c4.def("trace", method_pointer_bffec9f65a515eb9a57dce6e453bc0ce, "");
    class_29644c8e9700568199456868851c33c4.def("matrix", method_pointer_3e751a57d11156a195a6fb14eadf8cd2, boost::python::return_internal_reference<>(), "");
    class_29644c8e9700568199456868851c33c4.def("matrix", autowig::method_decorator_3e751a57d11156a195a6fb14eadf8cd2);
    class_29644c8e9700568199456868851c33c4.def("matrix", method_pointer_9c53e7aceac05ecfba103c86831f4816, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_29644c8e9700568199456868851c33c4.def("determinant", method_pointer_725c612e918e554f854215c6117e8e77, "");
    class_29644c8e9700568199456868851c33c4.def("unit_orthogonal", method_pointer_44df84c49aca5dfaadb202ab03a88581, "");
    class_29644c8e9700568199456868851c33c4.def("make_householder_in_place", method_pointer_548a6a47ee995fb480055ee301c412ea, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >();
    }

}