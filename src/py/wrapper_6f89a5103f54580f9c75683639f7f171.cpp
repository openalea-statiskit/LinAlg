#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c481d505ed75501b8155c7bdbb03edf7(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_1f4260f5e85c570ea93db5b51ac3f219(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_b225f478e02158dbb31c1660782567ba(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_680a97d2548f5bfb8471585fde873afc(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_6f89a5103f54580f9c75683639f7f171()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_310e0bf21ab15685824efbd110b518ba)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e57224a773c05a6aa115680cf9cbfba3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_da6566e10d1e5b7698e312e767abc243)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_3cea1e26be845f1fb0f0941d840ebefd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_500afc1df0f75e8fbd6863c69ab46ca0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c4d21850a19f52c7a48f5ad703d2cc55)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_87b9cfb8430856e993839bfdfeae0340)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8f546e38cfc057baa8cd25d6ec1134e3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c0b21afb868d5ffc860005e07dfff631)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4a0f9e2bc6125c4992afbfadcdf7f71a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c481d505ed75501b8155c7bdbb03edf7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_1f4260f5e85c570ea93db5b51ac3f219)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_d76aebf73e3150ddb936ed05a32dbec8)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ca40355fb41b5d73856650b4e258d570)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_770b62a0e3835f8bbe9b9cd98a1cc6c9)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4ed8e8b15bfe5fda8e956a26ce4e194e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c37af0a9e2bf54919568b74e0f67bd95)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_65b8a5a195ad53d78ff3d0e16316cd76)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b225f478e02158dbb31c1660782567ba)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_5669cdeb37f957acbba0c2243562e131)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_680a97d2548f5bfb8471585fde873afc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_cb74fc7b45a957cc9549600c35dbf3da)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b3f6e8f8c85151deb04fed574b19700b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_768f84dc65a05c18a0a34b96aaac92be)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ba033b9407e55ef29a2719bf01b789be)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::lu;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b892bbc984855cf89ba0bd65bd7c4a5e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_832565b386d352f6b1ec2622cf2ab27d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_26219a4c506056e79e2f34391bcf84c8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_76fe4f76f7d257aca34ca9683cfc2574)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4101f888abeb52449553be42352d9208)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_021d10ad486a5877ae83280701898a48)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_de99937114f45f4dbfdf8c83e4a870bf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8cf92b8573705c58abf9d7fc3423e31d)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_2b21d84d4e755de8b3b6d234f832f373)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_6f89a5103f54580f9c75683639f7f171("_MatrixBase_6f89a5103f54580f9c75683639f7f171", "", boost::python::no_init);
    class_6f89a5103f54580f9c75683639f7f171.def("diagonal_size", method_pointer_310e0bf21ab15685824efbd110b518ba, "");
    class_6f89a5103f54580f9c75683639f7f171.def("squared_norm", method_pointer_e57224a773c05a6aa115680cf9cbfba3, "");
    class_6f89a5103f54580f9c75683639f7f171.def("norm", method_pointer_da6566e10d1e5b7698e312e767abc243, "");
    class_6f89a5103f54580f9c75683639f7f171.def("blue_norm", method_pointer_3cea1e26be845f1fb0f0941d840ebefd, "");
    class_6f89a5103f54580f9c75683639f7f171.def("hypot_norm", method_pointer_500afc1df0f75e8fbd6863c69ab46ca0, "");
    class_6f89a5103f54580f9c75683639f7f171.def("normalized", method_pointer_c4d21850a19f52c7a48f5ad703d2cc55, "");
    class_6f89a5103f54580f9c75683639f7f171.def("stable_normalized", method_pointer_87b9cfb8430856e993839bfdfeae0340, "");
    class_6f89a5103f54580f9c75683639f7f171.def("normalize", method_pointer_8f546e38cfc057baa8cd25d6ec1134e3, "");
    class_6f89a5103f54580f9c75683639f7f171.def("stable_normalize", method_pointer_c0b21afb868d5ffc860005e07dfff631, "");
    class_6f89a5103f54580f9c75683639f7f171.def("adjoint_in_place", method_pointer_4a0f9e2bc6125c4992afbfadcdf7f71a, "");
    class_6f89a5103f54580f9c75683639f7f171.def("set_identity", method_pointer_c481d505ed75501b8155c7bdbb03edf7, boost::python::return_internal_reference<>(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("set_identity", autowig::method_decorator_c481d505ed75501b8155c7bdbb03edf7);
    class_6f89a5103f54580f9c75683639f7f171.def("set_identity", method_pointer_1f4260f5e85c570ea93db5b51ac3f219, boost::python::return_internal_reference<>(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("set_identity", autowig::method_decorator_1f4260f5e85c570ea93db5b51ac3f219);
    class_6f89a5103f54580f9c75683639f7f171.def("is_identity", method_pointer_d76aebf73e3150ddb936ed05a32dbec8, "");
    class_6f89a5103f54580f9c75683639f7f171.def("is_diagonal", method_pointer_ca40355fb41b5d73856650b4e258d570, "");
    class_6f89a5103f54580f9c75683639f7f171.def("is_upper_triangular", method_pointer_770b62a0e3835f8bbe9b9cd98a1cc6c9, "");
    class_6f89a5103f54580f9c75683639f7f171.def("is_lower_triangular", method_pointer_4ed8e8b15bfe5fda8e956a26ce4e194e, "");
    class_6f89a5103f54580f9c75683639f7f171.def("is_unitary", method_pointer_c37af0a9e2bf54919568b74e0f67bd95, "");
    class_6f89a5103f54580f9c75683639f7f171.def("force_aligned_access", method_pointer_65b8a5a195ad53d78ff3d0e16316cd76, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("force_aligned_access", method_pointer_b225f478e02158dbb31c1660782567ba, boost::python::return_internal_reference<>(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("force_aligned_access", autowig::method_decorator_b225f478e02158dbb31c1660782567ba);
    class_6f89a5103f54580f9c75683639f7f171.def("trace", method_pointer_5669cdeb37f957acbba0c2243562e131, "");
    class_6f89a5103f54580f9c75683639f7f171.def("matrix", method_pointer_680a97d2548f5bfb8471585fde873afc, boost::python::return_internal_reference<>(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("matrix", autowig::method_decorator_680a97d2548f5bfb8471585fde873afc);
    class_6f89a5103f54580f9c75683639f7f171.def("matrix", method_pointer_cb74fc7b45a957cc9549600c35dbf3da, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6f89a5103f54580f9c75683639f7f171.def("full_piv_lu", method_pointer_b3f6e8f8c85151deb04fed574b19700b, "");
    class_6f89a5103f54580f9c75683639f7f171.def("partial_piv_lu", method_pointer_768f84dc65a05c18a0a34b96aaac92be, "");
    class_6f89a5103f54580f9c75683639f7f171.def("lu", method_pointer_ba033b9407e55ef29a2719bf01b789be, "");
    class_6f89a5103f54580f9c75683639f7f171.def("determinant", method_pointer_b892bbc984855cf89ba0bd65bd7c4a5e, "");
    class_6f89a5103f54580f9c75683639f7f171.def("llt", method_pointer_832565b386d352f6b1ec2622cf2ab27d, "");
    class_6f89a5103f54580f9c75683639f7f171.def("ldlt", method_pointer_26219a4c506056e79e2f34391bcf84c8, "");
    class_6f89a5103f54580f9c75683639f7f171.def("householder_qr", method_pointer_76fe4f76f7d257aca34ca9683cfc2574, "");
    class_6f89a5103f54580f9c75683639f7f171.def("col_piv_householder_qr", method_pointer_4101f888abeb52449553be42352d9208, "");
    class_6f89a5103f54580f9c75683639f7f171.def("full_piv_householder_qr", method_pointer_021d10ad486a5877ae83280701898a48, "");
    class_6f89a5103f54580f9c75683639f7f171.def("eigenvalues", method_pointer_de99937114f45f4dbfdf8c83e4a870bf, "");
    class_6f89a5103f54580f9c75683639f7f171.def("jacobi_svd", method_pointer_8cf92b8573705c58abf9d7fc3423e31d, "");
    class_6f89a5103f54580f9c75683639f7f171.def("make_householder_in_place", method_pointer_2b21d84d4e755de8b3b6d234f832f373, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >();
    }

}