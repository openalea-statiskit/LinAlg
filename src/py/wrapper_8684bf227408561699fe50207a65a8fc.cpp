#include "_ieigen.h"


namespace autowig
{
    void method_decorator_282651ad1e805ea9bec5a447f1e22293(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_fcc960e85b7f5098a38ab159f171b886(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_56b036d9291f5da19236e9e396a56ee0(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_b8bb1e0c9093544aa98db72ae757282a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_8684bf227408561699fe50207a65a8fc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_2e6bd80c395153e88ea8ef8ceb0ead83)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ca99dcdbe39951cab9eeeb1965e2a849)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f7c5b5379e595dbd9ac24986eb85389f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a52bc3ca6aa65d9d95bebd598fa087ed)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_10e60910dfe15eed9b43f0c175989b68)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_9d041e3f424b544b91bee3a668e0d7d0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7b3de4ce3b71554c83c8abfa68da9cdf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_dbddd88b14575b429a0c7aa09849b605)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_71a4c71f0661510989cb21f2810dfc55)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_14b0a73aa8ec5b93983aca8d4c93a67e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_5d2cb87ca5265980bbc4fe776f061c7c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_282651ad1e805ea9bec5a447f1e22293)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_fcc960e85b7f5098a38ab159f171b886)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ed07da9ffc8759709790fb7984ba2ab9)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_fa9d368cdff75926b1f6dd24dcf2321a)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7a3b27dc4d9a5071a15c09713e69d216)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f9e75f52595157a0829668f3576cb017)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_fd43de0ea1065c10a1637769f05405db)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_5bf6e0fd2f425341b492feb6784cac39)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_56b036d9291f5da19236e9e396a56ee0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a7b1f621a76a5707a30a19c37fff89e5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b8bb1e0c9093544aa98db72ae757282a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_74dc61c4621d5d60956fef3f3f27dbf4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_db774d0bdb9258ada636883110498661)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a79645f6a3e6512dbc6689b6d3d930eb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7399cb2529f151319732cda06ec3e30e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_06bd4cc490845967b961f27340db04f3)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_0799f80e5b8357c493899a978640bce7)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > > class_8684bf227408561699fe50207a65a8fc("_MatrixBase_8684bf227408561699fe50207a65a8fc", "", boost::python::no_init);
    class_8684bf227408561699fe50207a65a8fc.def("diagonal_size", method_pointer_2e6bd80c395153e88ea8ef8ceb0ead83, "");
    class_8684bf227408561699fe50207a65a8fc.def("squared_norm", method_pointer_ca99dcdbe39951cab9eeeb1965e2a849, "");
    class_8684bf227408561699fe50207a65a8fc.def("norm", method_pointer_f7c5b5379e595dbd9ac24986eb85389f, "");
    class_8684bf227408561699fe50207a65a8fc.def("stable_norm", method_pointer_a52bc3ca6aa65d9d95bebd598fa087ed, "");
    class_8684bf227408561699fe50207a65a8fc.def("blue_norm", method_pointer_10e60910dfe15eed9b43f0c175989b68, "");
    class_8684bf227408561699fe50207a65a8fc.def("hypot_norm", method_pointer_9d041e3f424b544b91bee3a668e0d7d0, "");
    class_8684bf227408561699fe50207a65a8fc.def("normalized", method_pointer_7b3de4ce3b71554c83c8abfa68da9cdf, "");
    class_8684bf227408561699fe50207a65a8fc.def("stable_normalized", method_pointer_dbddd88b14575b429a0c7aa09849b605, "");
    class_8684bf227408561699fe50207a65a8fc.def("normalize", method_pointer_71a4c71f0661510989cb21f2810dfc55, "");
    class_8684bf227408561699fe50207a65a8fc.def("stable_normalize", method_pointer_14b0a73aa8ec5b93983aca8d4c93a67e, "");
    class_8684bf227408561699fe50207a65a8fc.def("adjoint_in_place", method_pointer_5d2cb87ca5265980bbc4fe776f061c7c, "");
    class_8684bf227408561699fe50207a65a8fc.def("set_identity", method_pointer_282651ad1e805ea9bec5a447f1e22293, boost::python::return_internal_reference<>(), "");
    class_8684bf227408561699fe50207a65a8fc.def("set_identity", autowig::method_decorator_282651ad1e805ea9bec5a447f1e22293);
    class_8684bf227408561699fe50207a65a8fc.def("set_identity", method_pointer_fcc960e85b7f5098a38ab159f171b886, boost::python::return_internal_reference<>(), "");
    class_8684bf227408561699fe50207a65a8fc.def("set_identity", autowig::method_decorator_fcc960e85b7f5098a38ab159f171b886);
    class_8684bf227408561699fe50207a65a8fc.def("is_identity", method_pointer_ed07da9ffc8759709790fb7984ba2ab9, "");
    class_8684bf227408561699fe50207a65a8fc.def("is_diagonal", method_pointer_fa9d368cdff75926b1f6dd24dcf2321a, "");
    class_8684bf227408561699fe50207a65a8fc.def("is_upper_triangular", method_pointer_7a3b27dc4d9a5071a15c09713e69d216, "");
    class_8684bf227408561699fe50207a65a8fc.def("is_lower_triangular", method_pointer_f9e75f52595157a0829668f3576cb017, "");
    class_8684bf227408561699fe50207a65a8fc.def("is_unitary", method_pointer_fd43de0ea1065c10a1637769f05405db, "");
    class_8684bf227408561699fe50207a65a8fc.def("force_aligned_access", method_pointer_5bf6e0fd2f425341b492feb6784cac39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8684bf227408561699fe50207a65a8fc.def("force_aligned_access", method_pointer_56b036d9291f5da19236e9e396a56ee0, boost::python::return_internal_reference<>(), "");
    class_8684bf227408561699fe50207a65a8fc.def("force_aligned_access", autowig::method_decorator_56b036d9291f5da19236e9e396a56ee0);
    class_8684bf227408561699fe50207a65a8fc.def("trace", method_pointer_a7b1f621a76a5707a30a19c37fff89e5, "");
    class_8684bf227408561699fe50207a65a8fc.def("matrix", method_pointer_b8bb1e0c9093544aa98db72ae757282a, boost::python::return_internal_reference<>(), "");
    class_8684bf227408561699fe50207a65a8fc.def("matrix", autowig::method_decorator_b8bb1e0c9093544aa98db72ae757282a);
    class_8684bf227408561699fe50207a65a8fc.def("matrix", method_pointer_74dc61c4621d5d60956fef3f3f27dbf4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8684bf227408561699fe50207a65a8fc.def("determinant", method_pointer_db774d0bdb9258ada636883110498661, "");
    class_8684bf227408561699fe50207a65a8fc.def("eigenvalues", method_pointer_a79645f6a3e6512dbc6689b6d3d930eb, "");
    class_8684bf227408561699fe50207a65a8fc.def("unit_orthogonal", method_pointer_7399cb2529f151319732cda06ec3e30e, "");
    class_8684bf227408561699fe50207a65a8fc.def("euler_angles", method_pointer_06bd4cc490845967b961f27340db04f3, "");
    class_8684bf227408561699fe50207a65a8fc.def("make_householder_in_place", method_pointer_0799f80e5b8357c493899a978640bce7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >();
    }

}