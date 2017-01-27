#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3ce18f03256b5b16a15f52e0accd2e9f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_87eef3019d8154eda3f3b5d430c54d4a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_da5377ef593458c9946548e9bfdbed98(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_b6e7303ef68554048657ab066e18d3e5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_787c7db205285580aed1a833a070348f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_2f9397a3d7cb579194f1449ed898fb75()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_9fc4463fc6335e6fb7ccf1be2b653386)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::diagonalSize;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0839c18b67ab576794a720b0a647ef89)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::conjugate;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_756e06316b9750e89e8ff52e3520587d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::real;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_3ce18f03256b5b16a15f52e0accd2e9f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0cbdae4080235f289063aab1e6e3e15d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_f1be50f4e23b57be9fc8a99d900a60ff)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_7bc11431cc095a22822e52dd998dc97b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_55b5dd5a66b957c5bbdb7f1193d90800)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_e639e29bbc195f07bf7ada3b12b85ae1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::hypotNorm;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c0f7be00c0b454318f83be5be139b5a2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::normalized;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0b7a74b7066050e58d9af3351864dce9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_e1011c567be65cb481d772bdd55f6944)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_d2078b3a230a5ad7972d31e2e0e8441d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_9de033a3ef075d74ac49485b7e42822b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_87eef3019d8154eda3f3b5d430c54d4a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setIdentity;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_da5377ef593458c9946548e9bfdbed98)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0b0a51a966c752719b36bc967f8007cf)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b006568593825e809c4aed212731eb3c)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0871926b9ef65a7f9275c6473a37bb6d)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_28e26ce314665ca2972afa2e72b61d71)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_76fd70956e2658a3900591886b621c7d)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isUnitary;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_ce8479c8e2a45434bfb092ab1db392c6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b6e7303ef68554048657ab066e18d3e5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_32b656736c4d5381abed20f99387ff9a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_787c7db205285580aed1a833a070348f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_de62ed3503c255d8862b97f1756f53f1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_deb8119c8cb9514c8f41f02700bf4108)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::determinant;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_767bf785177755f597af1bbafbd993ae)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_db94a1e531b25c57a98bf30573241ed8)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > > class_2f9397a3d7cb579194f1449ed898fb75("_MatrixBase_2f9397a3d7cb579194f1449ed898fb75", "", boost::python::no_init);
    class_2f9397a3d7cb579194f1449ed898fb75.def("diagonal_size", method_pointer_9fc4463fc6335e6fb7ccf1be2b653386, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("conjugate", method_pointer_0839c18b67ab576794a720b0a647ef89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("real", method_pointer_756e06316b9750e89e8ff52e3520587d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("real", method_pointer_3ce18f03256b5b16a15f52e0accd2e9f, boost::python::return_internal_reference<>(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("real", autowig::method_decorator_3ce18f03256b5b16a15f52e0accd2e9f);
    class_2f9397a3d7cb579194f1449ed898fb75.def("squared_norm", method_pointer_0cbdae4080235f289063aab1e6e3e15d, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("norm", method_pointer_f1be50f4e23b57be9fc8a99d900a60ff, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("stable_norm", method_pointer_7bc11431cc095a22822e52dd998dc97b, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("blue_norm", method_pointer_55b5dd5a66b957c5bbdb7f1193d90800, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("hypot_norm", method_pointer_e639e29bbc195f07bf7ada3b12b85ae1, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("normalized", method_pointer_c0f7be00c0b454318f83be5be139b5a2, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("stable_normalized", method_pointer_0b7a74b7066050e58d9af3351864dce9, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("normalize", method_pointer_e1011c567be65cb481d772bdd55f6944, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("stable_normalize", method_pointer_d2078b3a230a5ad7972d31e2e0e8441d, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("adjoint_in_place", method_pointer_9de033a3ef075d74ac49485b7e42822b, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("set_identity", method_pointer_87eef3019d8154eda3f3b5d430c54d4a, boost::python::return_internal_reference<>(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("set_identity", autowig::method_decorator_87eef3019d8154eda3f3b5d430c54d4a);
    class_2f9397a3d7cb579194f1449ed898fb75.def("set_identity", method_pointer_da5377ef593458c9946548e9bfdbed98, boost::python::return_internal_reference<>(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("set_identity", autowig::method_decorator_da5377ef593458c9946548e9bfdbed98);
    class_2f9397a3d7cb579194f1449ed898fb75.def("is_identity", method_pointer_0b0a51a966c752719b36bc967f8007cf, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("is_diagonal", method_pointer_b006568593825e809c4aed212731eb3c, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("is_upper_triangular", method_pointer_0871926b9ef65a7f9275c6473a37bb6d, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("is_lower_triangular", method_pointer_28e26ce314665ca2972afa2e72b61d71, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("is_unitary", method_pointer_76fd70956e2658a3900591886b621c7d, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("force_aligned_access", method_pointer_ce8479c8e2a45434bfb092ab1db392c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("force_aligned_access", method_pointer_b6e7303ef68554048657ab066e18d3e5, boost::python::return_internal_reference<>(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("force_aligned_access", autowig::method_decorator_b6e7303ef68554048657ab066e18d3e5);
    class_2f9397a3d7cb579194f1449ed898fb75.def("trace", method_pointer_32b656736c4d5381abed20f99387ff9a, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("matrix", method_pointer_787c7db205285580aed1a833a070348f, boost::python::return_internal_reference<>(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("matrix", autowig::method_decorator_787c7db205285580aed1a833a070348f);
    class_2f9397a3d7cb579194f1449ed898fb75.def("matrix", method_pointer_de62ed3503c255d8862b97f1756f53f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("determinant", method_pointer_deb8119c8cb9514c8f41f02700bf4108, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("unit_orthogonal", method_pointer_767bf785177755f597af1bbafbd993ae, "");
    class_2f9397a3d7cb579194f1449ed898fb75.def("make_householder_in_place", method_pointer_db94a1e531b25c57a98bf30573241ed8, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >();
    }

}