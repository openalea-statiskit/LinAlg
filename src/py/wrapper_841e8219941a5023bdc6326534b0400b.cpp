#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7240e3bcf2fa59c9b778eb98a1407ccf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_9300b056214451b1a00a585a3eb74898(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_015659df121658779f8f22df06c46e65(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_a4cfb46efa4c5d27b2f1c912ba54d6b7(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_841e8219941a5023bdc6326534b0400b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_9f9d3018c27254978cf4a6ac2a17f1ae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_68f6d3638e1455bc83b721e01f5e1f9c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_8bbb14849f9a54789f4c7e395e5b448d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_02a00d5bdebe5244be690d43ad346c00)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_7f5793f73b4c59ea91b832336191e261)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_71a5067c4c41598d911c6d60098ec992)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_3c6a7ac11b5550559b440e2571e5ad40)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c5119bc9c2ed5875b9d40bc0f1a0f687)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_8a30fb42accf5301ac05a64612ff6ff7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_2f7a54aeb3f05fd6bc53949b850735a0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_5ddf5bd048f8535ba7b2480436fe8998)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_7240e3bcf2fa59c9b778eb98a1407ccf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_9300b056214451b1a00a585a3eb74898)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_d436ef7be31f5adfaa7844729fc703ee)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c816ed77f64f5ec78fd4e23675d88c75)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_438796d260385f78a4b81fc31eb6d300)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_fd4ac44d5338503fb041acc05b165219)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_193b6a3961ba5793ac2c57a2958f4d9b)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c2aa07d6d974530f917823036567d3f8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_015659df121658779f8f22df06c46e65)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_b72e305e7b6c5e6d83ab34108986f69a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_a4cfb46efa4c5d27b2f1c912ba54d6b7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_f60a3c9a7e655d9ab2ec1832bd57629f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_5c3e8102a7e35855974e7ac5265a58cc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_79dbb98ac7ff53819ff36cfb43621d46)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_2aeb44dab3135ba6a73bec9833f737e0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_880fba0c032e56faaad3d2deabe685f2)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_96a4bbcf05a7569599ac8b52154428d0)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > > class_841e8219941a5023bdc6326534b0400b("_MatrixBase_841e8219941a5023bdc6326534b0400b", "", boost::python::no_init);
    class_841e8219941a5023bdc6326534b0400b.def("diagonal_size", method_pointer_9f9d3018c27254978cf4a6ac2a17f1ae, "");
    class_841e8219941a5023bdc6326534b0400b.def("squared_norm", method_pointer_68f6d3638e1455bc83b721e01f5e1f9c, "");
    class_841e8219941a5023bdc6326534b0400b.def("norm", method_pointer_8bbb14849f9a54789f4c7e395e5b448d, "");
    class_841e8219941a5023bdc6326534b0400b.def("stable_norm", method_pointer_02a00d5bdebe5244be690d43ad346c00, "");
    class_841e8219941a5023bdc6326534b0400b.def("blue_norm", method_pointer_7f5793f73b4c59ea91b832336191e261, "");
    class_841e8219941a5023bdc6326534b0400b.def("hypot_norm", method_pointer_71a5067c4c41598d911c6d60098ec992, "");
    class_841e8219941a5023bdc6326534b0400b.def("normalized", method_pointer_3c6a7ac11b5550559b440e2571e5ad40, "");
    class_841e8219941a5023bdc6326534b0400b.def("stable_normalized", method_pointer_c5119bc9c2ed5875b9d40bc0f1a0f687, "");
    class_841e8219941a5023bdc6326534b0400b.def("normalize", method_pointer_8a30fb42accf5301ac05a64612ff6ff7, "");
    class_841e8219941a5023bdc6326534b0400b.def("stable_normalize", method_pointer_2f7a54aeb3f05fd6bc53949b850735a0, "");
    class_841e8219941a5023bdc6326534b0400b.def("adjoint_in_place", method_pointer_5ddf5bd048f8535ba7b2480436fe8998, "");
    class_841e8219941a5023bdc6326534b0400b.def("set_identity", method_pointer_7240e3bcf2fa59c9b778eb98a1407ccf, boost::python::return_internal_reference<>(), "");
    class_841e8219941a5023bdc6326534b0400b.def("set_identity", autowig::method_decorator_7240e3bcf2fa59c9b778eb98a1407ccf);
    class_841e8219941a5023bdc6326534b0400b.def("set_identity", method_pointer_9300b056214451b1a00a585a3eb74898, boost::python::return_internal_reference<>(), "");
    class_841e8219941a5023bdc6326534b0400b.def("set_identity", autowig::method_decorator_9300b056214451b1a00a585a3eb74898);
    class_841e8219941a5023bdc6326534b0400b.def("is_identity", method_pointer_d436ef7be31f5adfaa7844729fc703ee, "");
    class_841e8219941a5023bdc6326534b0400b.def("is_diagonal", method_pointer_c816ed77f64f5ec78fd4e23675d88c75, "");
    class_841e8219941a5023bdc6326534b0400b.def("is_upper_triangular", method_pointer_438796d260385f78a4b81fc31eb6d300, "");
    class_841e8219941a5023bdc6326534b0400b.def("is_lower_triangular", method_pointer_fd4ac44d5338503fb041acc05b165219, "");
    class_841e8219941a5023bdc6326534b0400b.def("is_unitary", method_pointer_193b6a3961ba5793ac2c57a2958f4d9b, "");
    class_841e8219941a5023bdc6326534b0400b.def("force_aligned_access", method_pointer_c2aa07d6d974530f917823036567d3f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_841e8219941a5023bdc6326534b0400b.def("force_aligned_access", method_pointer_015659df121658779f8f22df06c46e65, boost::python::return_internal_reference<>(), "");
    class_841e8219941a5023bdc6326534b0400b.def("force_aligned_access", autowig::method_decorator_015659df121658779f8f22df06c46e65);
    class_841e8219941a5023bdc6326534b0400b.def("trace", method_pointer_b72e305e7b6c5e6d83ab34108986f69a, "");
    class_841e8219941a5023bdc6326534b0400b.def("matrix", method_pointer_a4cfb46efa4c5d27b2f1c912ba54d6b7, boost::python::return_internal_reference<>(), "");
    class_841e8219941a5023bdc6326534b0400b.def("matrix", autowig::method_decorator_a4cfb46efa4c5d27b2f1c912ba54d6b7);
    class_841e8219941a5023bdc6326534b0400b.def("matrix", method_pointer_f60a3c9a7e655d9ab2ec1832bd57629f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_841e8219941a5023bdc6326534b0400b.def("determinant", method_pointer_5c3e8102a7e35855974e7ac5265a58cc, "");
    class_841e8219941a5023bdc6326534b0400b.def("eigenvalues", method_pointer_79dbb98ac7ff53819ff36cfb43621d46, "");
    class_841e8219941a5023bdc6326534b0400b.def("unit_orthogonal", method_pointer_2aeb44dab3135ba6a73bec9833f737e0, "");
    class_841e8219941a5023bdc6326534b0400b.def("euler_angles", method_pointer_880fba0c032e56faaad3d2deabe685f2, "");
    class_841e8219941a5023bdc6326534b0400b.def("make_householder_in_place", method_pointer_96a4bbcf05a7569599ac8b52154428d0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >();
    }

}