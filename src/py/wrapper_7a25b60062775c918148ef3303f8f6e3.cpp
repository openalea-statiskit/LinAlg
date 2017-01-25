#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f9a2e3a711ad55678bbd98602413c827(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_8f3a830d8af251af9b5e24b383bf10b5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_789279077ef25b72843c973d37cd1519(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_c0bb91375a88553bbc58c18208fb996e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_97d5e6b732a959179dc3c2f40796aac6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_7a25b60062775c918148ef3303f8f6e3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_98da8a000f51549c935c5d86c8157177)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::diagonalSize;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f7daf5927ffa5645868baa7f740e3209)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::conjugate;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_13355958cb4e5fe49c7738d518f56aae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::real;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f9a2e3a711ad55678bbd98602413c827)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9b0d19f178fd5b96b258c87fc7ee9eec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_97a839b5005a5034bd6873de392d3609)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_dc129ee46bec5de7b0322637530d4680)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_ca0a6b4b34025279af934814109cee57)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_2e806725b7a75d5cbb029de2dbe70e2a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::hypotNorm;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_d2689d85e6225185bc2b57be04227115)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::normalized;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_b220a5ff77645ba7a61c316a8200013e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_2fdf8a7f9058520d83f26c63981f0341)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9488c013f4095faeb56c4f0845dc9742)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c67f2728d1cc5b9d9b3a4e5248da864b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_8f3a830d8af251af9b5e24b383bf10b5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setIdentity;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_789279077ef25b72843c973d37cd1519)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c1e286c498d85eefb677928250536c03)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_1cff5c05858a54ddbf22facac5ccda2b)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_fa9d3688274451f1864ad55638d3b4ea)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_4e3ea31be5c058c08b643026e22e35b1)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_21c8a10f2ae35b56b9b72bbd569e6105)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isUnitary;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c6a31c51668d5549843e3587fb91836b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c0bb91375a88553bbc58c18208fb996e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_e7d1ea9ebfe855aab5cd3918e7369960)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_97d5e6b732a959179dc3c2f40796aac6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_41393d6ad11353e99e15fa451b35eb8b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c009766a8f0755dbabc9401ebc09f25a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::determinant;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_75bb5fcc0bba5c608ba327b6a3148814)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_50fcc18281235972a25aeeb0cf71ddc7)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_478eeef1e5cd50c4b021199545106120)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > > class_7a25b60062775c918148ef3303f8f6e3("_MatrixBase_7a25b60062775c918148ef3303f8f6e3", "", boost::python::no_init);
    class_7a25b60062775c918148ef3303f8f6e3.def("diagonal_size", method_pointer_98da8a000f51549c935c5d86c8157177, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("conjugate", method_pointer_f7daf5927ffa5645868baa7f740e3209, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("real", method_pointer_13355958cb4e5fe49c7738d518f56aae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("real", method_pointer_f9a2e3a711ad55678bbd98602413c827, boost::python::return_internal_reference<>(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("real", autowig::method_decorator_f9a2e3a711ad55678bbd98602413c827);
    class_7a25b60062775c918148ef3303f8f6e3.def("squared_norm", method_pointer_9b0d19f178fd5b96b258c87fc7ee9eec, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("norm", method_pointer_97a839b5005a5034bd6873de392d3609, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("stable_norm", method_pointer_dc129ee46bec5de7b0322637530d4680, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("blue_norm", method_pointer_ca0a6b4b34025279af934814109cee57, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("hypot_norm", method_pointer_2e806725b7a75d5cbb029de2dbe70e2a, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("normalized", method_pointer_d2689d85e6225185bc2b57be04227115, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("stable_normalized", method_pointer_b220a5ff77645ba7a61c316a8200013e, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("normalize", method_pointer_2fdf8a7f9058520d83f26c63981f0341, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("stable_normalize", method_pointer_9488c013f4095faeb56c4f0845dc9742, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("adjoint_in_place", method_pointer_c67f2728d1cc5b9d9b3a4e5248da864b, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("set_identity", method_pointer_8f3a830d8af251af9b5e24b383bf10b5, boost::python::return_internal_reference<>(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("set_identity", autowig::method_decorator_8f3a830d8af251af9b5e24b383bf10b5);
    class_7a25b60062775c918148ef3303f8f6e3.def("set_identity", method_pointer_789279077ef25b72843c973d37cd1519, boost::python::return_internal_reference<>(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("set_identity", autowig::method_decorator_789279077ef25b72843c973d37cd1519);
    class_7a25b60062775c918148ef3303f8f6e3.def("is_identity", method_pointer_c1e286c498d85eefb677928250536c03, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("is_diagonal", method_pointer_1cff5c05858a54ddbf22facac5ccda2b, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("is_upper_triangular", method_pointer_fa9d3688274451f1864ad55638d3b4ea, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("is_lower_triangular", method_pointer_4e3ea31be5c058c08b643026e22e35b1, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("is_unitary", method_pointer_21c8a10f2ae35b56b9b72bbd569e6105, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("force_aligned_access", method_pointer_c6a31c51668d5549843e3587fb91836b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("force_aligned_access", method_pointer_c0bb91375a88553bbc58c18208fb996e, boost::python::return_internal_reference<>(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("force_aligned_access", autowig::method_decorator_c0bb91375a88553bbc58c18208fb996e);
    class_7a25b60062775c918148ef3303f8f6e3.def("trace", method_pointer_e7d1ea9ebfe855aab5cd3918e7369960, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("matrix", method_pointer_97d5e6b732a959179dc3c2f40796aac6, boost::python::return_internal_reference<>(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("matrix", autowig::method_decorator_97d5e6b732a959179dc3c2f40796aac6);
    class_7a25b60062775c918148ef3303f8f6e3.def("matrix", method_pointer_41393d6ad11353e99e15fa451b35eb8b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a25b60062775c918148ef3303f8f6e3.def("determinant", method_pointer_c009766a8f0755dbabc9401ebc09f25a, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("unit_orthogonal", method_pointer_75bb5fcc0bba5c608ba327b6a3148814, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("euler_angles", method_pointer_50fcc18281235972a25aeeb0cf71ddc7, "");
    class_7a25b60062775c918148ef3303f8f6e3.def("make_householder_in_place", method_pointer_478eeef1e5cd50c4b021199545106120, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >();
    }

}