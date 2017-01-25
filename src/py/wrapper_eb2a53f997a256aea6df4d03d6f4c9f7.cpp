#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6956e7198f4c58248dc937df8d2c69b4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_0cf80a1446025737a217d5fee2239cd2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_b7d3e7742ff05ebcbf97b3e2b7b105ae(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_ed838818b434561988d0c8bdd2fcb9f3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_9699d0f50bf552c496972cd8895d4dbe(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_eb2a53f997a256aea6df4d03d6f4c9f7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_046dc0bba3d558f4b1c04098f31dcb24)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::diagonalSize;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_25041438488455eaa1d6b9b2100888b8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::conjugate;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0b0bb5f1a43e5a3f816b495a6852ba71)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::real;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6956e7198f4c58248dc937df8d2c69b4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_3fb45808a6c85816b4afb6ae3979cc7f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_1a702339d7a857c79b2345ba5f4426f0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0cab442147f55a2196b3ef7cebecbdf6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_efb25a7356195c9c98f15825e14d5ef9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_c74ca37363b75db680e11bd905abecd6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::hypotNorm;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_2ae77fc12f2158b38c6ab37f394061c3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::normalized;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_e731661478bf50e7972c52fd08f65138)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_5bcd5ab645f958bc9b1d30fa73a17828)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_5a6d599aefe85bdf83dc8e7f793805b5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_be79a617d0395d11ab890a5fc554b98a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0cf80a1446025737a217d5fee2239cd2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setIdentity;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b7d3e7742ff05ebcbf97b3e2b7b105ae)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_fbbecce5e0f1597cb03a21b4166bfe65)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0cb2dc0205585de0a0381db1d173d96b)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_4fd049628ae65a6d90b9ba82afc1caf7)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_7c59765195165ff2bab2fa4bf928c837)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_dfef65f044905089af7108fd005ee938)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isUnitary;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_2221620cf7165a7ba86d6793f8c42aa6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ed838818b434561988d0c8bdd2fcb9f3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_588753b4c9585c2ab6d26f7e1ee83633)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_9699d0f50bf552c496972cd8895d4dbe)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_e5a25f2504b4551a842f76b321274ab2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_f0cbd697f2a8557486e5075edef262bf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b3aacea74d3358d58a050be96c27f815)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::eigenvalues;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_e3c57b84d1595b57b27e5cacd88ff872)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_4b6ac4bdaf455d2d987b7ab0a5ad899f)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_fb9812fc890e541294dd78d05a105bd0)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > > class_eb2a53f997a256aea6df4d03d6f4c9f7("_MatrixBase_eb2a53f997a256aea6df4d03d6f4c9f7", "", boost::python::no_init);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("diagonal_size", method_pointer_046dc0bba3d558f4b1c04098f31dcb24, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("conjugate", method_pointer_25041438488455eaa1d6b9b2100888b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("real", method_pointer_0b0bb5f1a43e5a3f816b495a6852ba71, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("real", method_pointer_6956e7198f4c58248dc937df8d2c69b4, boost::python::return_internal_reference<>(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("real", autowig::method_decorator_6956e7198f4c58248dc937df8d2c69b4);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("squared_norm", method_pointer_3fb45808a6c85816b4afb6ae3979cc7f, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("norm", method_pointer_1a702339d7a857c79b2345ba5f4426f0, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("stable_norm", method_pointer_0cab442147f55a2196b3ef7cebecbdf6, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("blue_norm", method_pointer_efb25a7356195c9c98f15825e14d5ef9, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("hypot_norm", method_pointer_c74ca37363b75db680e11bd905abecd6, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("normalized", method_pointer_2ae77fc12f2158b38c6ab37f394061c3, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("stable_normalized", method_pointer_e731661478bf50e7972c52fd08f65138, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("normalize", method_pointer_5bcd5ab645f958bc9b1d30fa73a17828, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("stable_normalize", method_pointer_5a6d599aefe85bdf83dc8e7f793805b5, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("adjoint_in_place", method_pointer_be79a617d0395d11ab890a5fc554b98a, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("set_identity", method_pointer_0cf80a1446025737a217d5fee2239cd2, boost::python::return_internal_reference<>(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("set_identity", autowig::method_decorator_0cf80a1446025737a217d5fee2239cd2);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("set_identity", method_pointer_b7d3e7742ff05ebcbf97b3e2b7b105ae, boost::python::return_internal_reference<>(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("set_identity", autowig::method_decorator_b7d3e7742ff05ebcbf97b3e2b7b105ae);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("is_identity", method_pointer_fbbecce5e0f1597cb03a21b4166bfe65, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("is_diagonal", method_pointer_0cb2dc0205585de0a0381db1d173d96b, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("is_upper_triangular", method_pointer_4fd049628ae65a6d90b9ba82afc1caf7, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("is_lower_triangular", method_pointer_7c59765195165ff2bab2fa4bf928c837, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("is_unitary", method_pointer_dfef65f044905089af7108fd005ee938, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("force_aligned_access", method_pointer_2221620cf7165a7ba86d6793f8c42aa6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("force_aligned_access", method_pointer_ed838818b434561988d0c8bdd2fcb9f3, boost::python::return_internal_reference<>(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("force_aligned_access", autowig::method_decorator_ed838818b434561988d0c8bdd2fcb9f3);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("trace", method_pointer_588753b4c9585c2ab6d26f7e1ee83633, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("matrix", method_pointer_9699d0f50bf552c496972cd8895d4dbe, boost::python::return_internal_reference<>(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("matrix", autowig::method_decorator_9699d0f50bf552c496972cd8895d4dbe);
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("matrix", method_pointer_e5a25f2504b4551a842f76b321274ab2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("determinant", method_pointer_f0cbd697f2a8557486e5075edef262bf, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("eigenvalues", method_pointer_b3aacea74d3358d58a050be96c27f815, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("unit_orthogonal", method_pointer_e3c57b84d1595b57b27e5cacd88ff872, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("euler_angles", method_pointer_4b6ac4bdaf455d2d987b7ab0a5ad899f, "");
    class_eb2a53f997a256aea6df4d03d6f4c9f7.def("make_householder_in_place", method_pointer_fb9812fc890e541294dd78d05a105bd0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >();
    }

}