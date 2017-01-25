#include "_ieigen.h"


namespace autowig
{
    void method_decorator_449052dd729854488e423cdc74ea37f5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_bd1bb1439c7e5d63a93ea96e0b90a73c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_29138eb0ef475c85b2a7780da174540e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d528a4fd312f50c29512591b00a16d64(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_d81889dd920f5f8799615e62c32625e2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_5b5ec928b412552482dbf88cdf473892)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b063a1cb6e9d537781a40716403bea29)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b3f949662d275e5bb5957f6fad6ad883)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b40a0525e1175e9d8deba59adb72a3b2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_e8a830ec7d365bd08320a00c4636d718)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_8e7758b61cf65be7805f3f0d93b6a0ec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_44f374e349fe5da7967084046de9dd6b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_9372cf8ba3e45857ba9e9b66f88aa39c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_c5c719c261895dbca41d8c9f742bf094)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_46c2dd2cde0458728e9eda5fd4b87c7f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_dd208e75b8965e2b8da3ff40252282bc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_449052dd729854488e423cdc74ea37f5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_bd1bb1439c7e5d63a93ea96e0b90a73c)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_407dc75677fd59e98d83b97ceae9708f)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_5ce8e2e96b6d5d8c8888535b7cff6577)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_5b60cd5ab0255da8b01238d8ad7eb6fa)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_fed5765cc49357f796106b1399a63def)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_8747237bc1e65f53ac6c24cabb3c92b6)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_729c00ac710950f8b98032ff50c62685)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_29138eb0ef475c85b2a7780da174540e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_49d50724a85a53c1acc0d652bdcaba36)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_d528a4fd312f50c29512591b00a16d64)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_9bd5655be7c65b5b8cedffadd268ba7d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_0155787819de527abc681adf909092e3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_23d32cffde6b58768299effc6556c069)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_0e5f23573747530e80fd4e54f83d7ae3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_4b81cac6bf0e5366b9bb6aeef4249eba)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_cba9390a1b195c259f01bdd5f65e0c63)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > > class_d81889dd920f5f8799615e62c32625e2("_MatrixBase_d81889dd920f5f8799615e62c32625e2", "", boost::python::no_init);
    class_d81889dd920f5f8799615e62c32625e2.def("diagonal_size", method_pointer_5b5ec928b412552482dbf88cdf473892, "");
    class_d81889dd920f5f8799615e62c32625e2.def("squared_norm", method_pointer_b063a1cb6e9d537781a40716403bea29, "");
    class_d81889dd920f5f8799615e62c32625e2.def("norm", method_pointer_b3f949662d275e5bb5957f6fad6ad883, "");
    class_d81889dd920f5f8799615e62c32625e2.def("stable_norm", method_pointer_b40a0525e1175e9d8deba59adb72a3b2, "");
    class_d81889dd920f5f8799615e62c32625e2.def("blue_norm", method_pointer_e8a830ec7d365bd08320a00c4636d718, "");
    class_d81889dd920f5f8799615e62c32625e2.def("hypot_norm", method_pointer_8e7758b61cf65be7805f3f0d93b6a0ec, "");
    class_d81889dd920f5f8799615e62c32625e2.def("normalized", method_pointer_44f374e349fe5da7967084046de9dd6b, "");
    class_d81889dd920f5f8799615e62c32625e2.def("stable_normalized", method_pointer_9372cf8ba3e45857ba9e9b66f88aa39c, "");
    class_d81889dd920f5f8799615e62c32625e2.def("normalize", method_pointer_c5c719c261895dbca41d8c9f742bf094, "");
    class_d81889dd920f5f8799615e62c32625e2.def("stable_normalize", method_pointer_46c2dd2cde0458728e9eda5fd4b87c7f, "");
    class_d81889dd920f5f8799615e62c32625e2.def("adjoint_in_place", method_pointer_dd208e75b8965e2b8da3ff40252282bc, "");
    class_d81889dd920f5f8799615e62c32625e2.def("set_identity", method_pointer_449052dd729854488e423cdc74ea37f5, boost::python::return_internal_reference<>(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("set_identity", autowig::method_decorator_449052dd729854488e423cdc74ea37f5);
    class_d81889dd920f5f8799615e62c32625e2.def("set_identity", method_pointer_bd1bb1439c7e5d63a93ea96e0b90a73c, boost::python::return_internal_reference<>(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("set_identity", autowig::method_decorator_bd1bb1439c7e5d63a93ea96e0b90a73c);
    class_d81889dd920f5f8799615e62c32625e2.def("is_identity", method_pointer_407dc75677fd59e98d83b97ceae9708f, "");
    class_d81889dd920f5f8799615e62c32625e2.def("is_diagonal", method_pointer_5ce8e2e96b6d5d8c8888535b7cff6577, "");
    class_d81889dd920f5f8799615e62c32625e2.def("is_upper_triangular", method_pointer_5b60cd5ab0255da8b01238d8ad7eb6fa, "");
    class_d81889dd920f5f8799615e62c32625e2.def("is_lower_triangular", method_pointer_fed5765cc49357f796106b1399a63def, "");
    class_d81889dd920f5f8799615e62c32625e2.def("is_unitary", method_pointer_8747237bc1e65f53ac6c24cabb3c92b6, "");
    class_d81889dd920f5f8799615e62c32625e2.def("force_aligned_access", method_pointer_729c00ac710950f8b98032ff50c62685, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("force_aligned_access", method_pointer_29138eb0ef475c85b2a7780da174540e, boost::python::return_internal_reference<>(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("force_aligned_access", autowig::method_decorator_29138eb0ef475c85b2a7780da174540e);
    class_d81889dd920f5f8799615e62c32625e2.def("trace", method_pointer_49d50724a85a53c1acc0d652bdcaba36, "");
    class_d81889dd920f5f8799615e62c32625e2.def("matrix", method_pointer_d528a4fd312f50c29512591b00a16d64, boost::python::return_internal_reference<>(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("matrix", autowig::method_decorator_d528a4fd312f50c29512591b00a16d64);
    class_d81889dd920f5f8799615e62c32625e2.def("matrix", method_pointer_9bd5655be7c65b5b8cedffadd268ba7d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81889dd920f5f8799615e62c32625e2.def("determinant", method_pointer_0155787819de527abc681adf909092e3, "");
    class_d81889dd920f5f8799615e62c32625e2.def("eigenvalues", method_pointer_23d32cffde6b58768299effc6556c069, "");
    class_d81889dd920f5f8799615e62c32625e2.def("unit_orthogonal", method_pointer_0e5f23573747530e80fd4e54f83d7ae3, "");
    class_d81889dd920f5f8799615e62c32625e2.def("euler_angles", method_pointer_4b81cac6bf0e5366b9bb6aeef4249eba, "");
    class_d81889dd920f5f8799615e62c32625e2.def("make_householder_in_place", method_pointer_cba9390a1b195c259f01bdd5f65e0c63, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >();
    }

}