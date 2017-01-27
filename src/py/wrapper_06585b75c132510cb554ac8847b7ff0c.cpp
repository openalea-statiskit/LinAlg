#include "_ieigen.h"


namespace autowig
{
    void method_decorator_afa09b558cf25e97befed652b7f3540f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_5ffe1f2227e7533abcf47723146f3e3e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_e2dbe68b77295cca91e1c2c3b1494787(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_e6abcaf25d615bcc8a31f1b40800489a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_429251e7f008508c9c712ba50b0b1a04(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_06585b75c132510cb554ac8847b7ff0c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_4d0fd4fff3bd59ca80dd108b62978bae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::diagonalSize;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9136b3e7108352aab94cece03105abf4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::conjugate;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_a916004cf69956e9a04c19adbd3e8f6e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::real;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_afa09b558cf25e97befed652b7f3540f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_779dbe25ffea5c5ca1b40d95e54dfae5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_6b60e4b526165e58b6343d41e5da3a7a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1ca3001c64da5964a297a2271d5fdbae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_837838db47315254b9126343fccf7600)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::hypotNorm;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_902e0be31ebd586586661200b7d7748c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::normalized;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_476a6813fbf458549d6031b9238a87c9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_3ede4d512ca457bab289d9af549d28af)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_13f6b7cd40e458e78c7cd33ff941de9b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_4fd061b625fe5d158544221b7d521be3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_5ffe1f2227e7533abcf47723146f3e3e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setIdentity;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_e2dbe68b77295cca91e1c2c3b1494787)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_c9da58c6d8725f51b72ad1c9a91552d6)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9c592ae11528591bafa5df5e73fe06a5)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_5b38f8b8de2a519083272e4f41c5f986)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_02439adaf23b5764b72bfd7e9c308545)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_bc644f6ce1605021bf326ce59c85af1b)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isUnitary;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9e4e8d77399a522589827f5b63d8f059)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_e6abcaf25d615bcc8a31f1b40800489a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_de37409fd75e58e7ac2b85436751d2bd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_429251e7f008508c9c712ba50b0b1a04)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_797eb32a8b795ff7829831e93151d2ac)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_a05d8449b2c250dfbac1897603657bd2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::determinant;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_70c4f223f8845f2cba1cce7af9df60a5)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > > class_06585b75c132510cb554ac8847b7ff0c("_MatrixBase_06585b75c132510cb554ac8847b7ff0c", "", boost::python::no_init);
    class_06585b75c132510cb554ac8847b7ff0c.def("diagonal_size", method_pointer_4d0fd4fff3bd59ca80dd108b62978bae, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("conjugate", method_pointer_9136b3e7108352aab94cece03105abf4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("real", method_pointer_a916004cf69956e9a04c19adbd3e8f6e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("real", method_pointer_afa09b558cf25e97befed652b7f3540f, boost::python::return_internal_reference<>(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("real", autowig::method_decorator_afa09b558cf25e97befed652b7f3540f);
    class_06585b75c132510cb554ac8847b7ff0c.def("squared_norm", method_pointer_779dbe25ffea5c5ca1b40d95e54dfae5, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("norm", method_pointer_6b60e4b526165e58b6343d41e5da3a7a, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("blue_norm", method_pointer_1ca3001c64da5964a297a2271d5fdbae, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("hypot_norm", method_pointer_837838db47315254b9126343fccf7600, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("normalized", method_pointer_902e0be31ebd586586661200b7d7748c, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("stable_normalized", method_pointer_476a6813fbf458549d6031b9238a87c9, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("normalize", method_pointer_3ede4d512ca457bab289d9af549d28af, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("stable_normalize", method_pointer_13f6b7cd40e458e78c7cd33ff941de9b, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("adjoint_in_place", method_pointer_4fd061b625fe5d158544221b7d521be3, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("set_identity", method_pointer_5ffe1f2227e7533abcf47723146f3e3e, boost::python::return_internal_reference<>(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("set_identity", autowig::method_decorator_5ffe1f2227e7533abcf47723146f3e3e);
    class_06585b75c132510cb554ac8847b7ff0c.def("set_identity", method_pointer_e2dbe68b77295cca91e1c2c3b1494787, boost::python::return_internal_reference<>(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("set_identity", autowig::method_decorator_e2dbe68b77295cca91e1c2c3b1494787);
    class_06585b75c132510cb554ac8847b7ff0c.def("is_identity", method_pointer_c9da58c6d8725f51b72ad1c9a91552d6, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("is_diagonal", method_pointer_9c592ae11528591bafa5df5e73fe06a5, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("is_upper_triangular", method_pointer_5b38f8b8de2a519083272e4f41c5f986, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("is_lower_triangular", method_pointer_02439adaf23b5764b72bfd7e9c308545, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("is_unitary", method_pointer_bc644f6ce1605021bf326ce59c85af1b, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("force_aligned_access", method_pointer_9e4e8d77399a522589827f5b63d8f059, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("force_aligned_access", method_pointer_e6abcaf25d615bcc8a31f1b40800489a, boost::python::return_internal_reference<>(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("force_aligned_access", autowig::method_decorator_e6abcaf25d615bcc8a31f1b40800489a);
    class_06585b75c132510cb554ac8847b7ff0c.def("trace", method_pointer_de37409fd75e58e7ac2b85436751d2bd, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("matrix", method_pointer_429251e7f008508c9c712ba50b0b1a04, boost::python::return_internal_reference<>(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("matrix", autowig::method_decorator_429251e7f008508c9c712ba50b0b1a04);
    class_06585b75c132510cb554ac8847b7ff0c.def("matrix", method_pointer_797eb32a8b795ff7829831e93151d2ac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_06585b75c132510cb554ac8847b7ff0c.def("determinant", method_pointer_a05d8449b2c250dfbac1897603657bd2, "");
    class_06585b75c132510cb554ac8847b7ff0c.def("make_householder_in_place", method_pointer_70c4f223f8845f2cba1cce7af9df60a5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >();
    }

}