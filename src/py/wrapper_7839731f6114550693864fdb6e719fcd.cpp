#include "_ieigen.h"


namespace autowig
{
    void method_decorator_be75db35cca55791a78204902a410ab8(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_fffd6506636d5701ae7010d1a4858eca(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_80ea407662cb55ad826b71955cd7bcfd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_756cab21a2b758edb6c5b026b31476e5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_e17f0538029c53379de0f7bc403bbcfd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_7839731f6114550693864fdb6e719fcd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_92784a289cd75ccf8e53f6252b0ef3a8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::diagonalSize;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_e61750eae2955ab1882afbea7fa761a0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::conjugate;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f8cf490785f753dd9b94b825f4b81bd1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::real;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_be75db35cca55791a78204902a410ab8)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ddacc51941125e62beefeeb08147c492)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_a626576912c05c55ad9e75b1a0d94f85)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d770d5e27e6851ad96b1cc1ca4886aee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_eb649b824b2952e1b6b2b54dab30a0ca)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_50d2dd6dbd5852d59a49a1b72a158229)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::hypotNorm;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_a46c28180b1c5d8696ae7e3829c147ea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::normalized;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_aaf7b5a2873e59f1abf0130b20ed080d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d05da4bef9975f1cbae0454511ae5182)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ae99ba757b26546a96c45bda28655417)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d5d3cf215dca5d1c82fd38db806512a8)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_fffd6506636d5701ae7010d1a4858eca)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setIdentity;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_80ea407662cb55ad826b71955cd7bcfd)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ed05b3ec32bf529f810eb8ac486b42b5)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f7fb0ca1bb59596fb6ccce9b98d75979)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_1338b7d108fc560d9a2f92b4f97ff1a2)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f111238c04c95e3aab51f3c94194b97f)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_fb6f85b79e425890ba313573d26277b3)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isUnitary;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_6b29078e8ad75579835053b1becb17eb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_756cab21a2b758edb6c5b026b31476e5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_619f871ad6e650b0a9e7328ab641ad1e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_e17f0538029c53379de0f7bc403bbcfd)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_1df4a20269b2586fbf9cf3de0643f39c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_1e9d171bdc3d584eb7732dbe6c7e1fd2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::determinant;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d0c5a5f3915b50f18516f69961d621db)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_cfe7f8a7bb135e0fb6e15478843af7c1)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > > class_7839731f6114550693864fdb6e719fcd("_MatrixBase_7839731f6114550693864fdb6e719fcd", "", boost::python::no_init);
    class_7839731f6114550693864fdb6e719fcd.def("diagonal_size", method_pointer_92784a289cd75ccf8e53f6252b0ef3a8, "");
    class_7839731f6114550693864fdb6e719fcd.def("conjugate", method_pointer_e61750eae2955ab1882afbea7fa761a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7839731f6114550693864fdb6e719fcd.def("real", method_pointer_f8cf490785f753dd9b94b825f4b81bd1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7839731f6114550693864fdb6e719fcd.def("real", method_pointer_be75db35cca55791a78204902a410ab8, boost::python::return_internal_reference<>(), "");
    class_7839731f6114550693864fdb6e719fcd.def("real", autowig::method_decorator_be75db35cca55791a78204902a410ab8);
    class_7839731f6114550693864fdb6e719fcd.def("squared_norm", method_pointer_ddacc51941125e62beefeeb08147c492, "");
    class_7839731f6114550693864fdb6e719fcd.def("norm", method_pointer_a626576912c05c55ad9e75b1a0d94f85, "");
    class_7839731f6114550693864fdb6e719fcd.def("stable_norm", method_pointer_d770d5e27e6851ad96b1cc1ca4886aee, "");
    class_7839731f6114550693864fdb6e719fcd.def("blue_norm", method_pointer_eb649b824b2952e1b6b2b54dab30a0ca, "");
    class_7839731f6114550693864fdb6e719fcd.def("hypot_norm", method_pointer_50d2dd6dbd5852d59a49a1b72a158229, "");
    class_7839731f6114550693864fdb6e719fcd.def("normalized", method_pointer_a46c28180b1c5d8696ae7e3829c147ea, "");
    class_7839731f6114550693864fdb6e719fcd.def("stable_normalized", method_pointer_aaf7b5a2873e59f1abf0130b20ed080d, "");
    class_7839731f6114550693864fdb6e719fcd.def("normalize", method_pointer_d05da4bef9975f1cbae0454511ae5182, "");
    class_7839731f6114550693864fdb6e719fcd.def("stable_normalize", method_pointer_ae99ba757b26546a96c45bda28655417, "");
    class_7839731f6114550693864fdb6e719fcd.def("adjoint_in_place", method_pointer_d5d3cf215dca5d1c82fd38db806512a8, "");
    class_7839731f6114550693864fdb6e719fcd.def("set_identity", method_pointer_fffd6506636d5701ae7010d1a4858eca, boost::python::return_internal_reference<>(), "");
    class_7839731f6114550693864fdb6e719fcd.def("set_identity", autowig::method_decorator_fffd6506636d5701ae7010d1a4858eca);
    class_7839731f6114550693864fdb6e719fcd.def("set_identity", method_pointer_80ea407662cb55ad826b71955cd7bcfd, boost::python::return_internal_reference<>(), "");
    class_7839731f6114550693864fdb6e719fcd.def("set_identity", autowig::method_decorator_80ea407662cb55ad826b71955cd7bcfd);
    class_7839731f6114550693864fdb6e719fcd.def("is_identity", method_pointer_ed05b3ec32bf529f810eb8ac486b42b5, "");
    class_7839731f6114550693864fdb6e719fcd.def("is_diagonal", method_pointer_f7fb0ca1bb59596fb6ccce9b98d75979, "");
    class_7839731f6114550693864fdb6e719fcd.def("is_upper_triangular", method_pointer_1338b7d108fc560d9a2f92b4f97ff1a2, "");
    class_7839731f6114550693864fdb6e719fcd.def("is_lower_triangular", method_pointer_f111238c04c95e3aab51f3c94194b97f, "");
    class_7839731f6114550693864fdb6e719fcd.def("is_unitary", method_pointer_fb6f85b79e425890ba313573d26277b3, "");
    class_7839731f6114550693864fdb6e719fcd.def("force_aligned_access", method_pointer_6b29078e8ad75579835053b1becb17eb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7839731f6114550693864fdb6e719fcd.def("force_aligned_access", method_pointer_756cab21a2b758edb6c5b026b31476e5, boost::python::return_internal_reference<>(), "");
    class_7839731f6114550693864fdb6e719fcd.def("force_aligned_access", autowig::method_decorator_756cab21a2b758edb6c5b026b31476e5);
    class_7839731f6114550693864fdb6e719fcd.def("trace", method_pointer_619f871ad6e650b0a9e7328ab641ad1e, "");
    class_7839731f6114550693864fdb6e719fcd.def("matrix", method_pointer_e17f0538029c53379de0f7bc403bbcfd, boost::python::return_internal_reference<>(), "");
    class_7839731f6114550693864fdb6e719fcd.def("matrix", autowig::method_decorator_e17f0538029c53379de0f7bc403bbcfd);
    class_7839731f6114550693864fdb6e719fcd.def("matrix", method_pointer_1df4a20269b2586fbf9cf3de0643f39c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7839731f6114550693864fdb6e719fcd.def("determinant", method_pointer_1e9d171bdc3d584eb7732dbe6c7e1fd2, "");
    class_7839731f6114550693864fdb6e719fcd.def("unit_orthogonal", method_pointer_d0c5a5f3915b50f18516f69961d621db, "");
    class_7839731f6114550693864fdb6e719fcd.def("make_householder_in_place", method_pointer_cfe7f8a7bb135e0fb6e15478843af7c1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >();
    }

}