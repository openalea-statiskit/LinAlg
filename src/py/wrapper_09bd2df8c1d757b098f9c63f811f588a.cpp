#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5a2b289f0f22571cabbc85776cd0273d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_cda43fe5a8bc5566b7ee6b331f9b350b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_83402af45cee5f959d7b74e65e637b94(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_2ca7e37b5e8053ccb59a1e8f7d751530(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_09bd2df8c1d757b098f9c63f811f588a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_183742c7c39b5b9ead2a0babae19f79d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2b9d4df9047d5a01905991a1f1160151)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_e177a10532035763b4044ea054748920)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_527424ca93b85ee7869b3d60bec847a8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_559ff4776c6a56188468296e74e6436d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_a551dc1bf3b7558fb930d70a0fdae40e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c9018ee882a253b180bf05fa93e711e0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_a2a37c09028f5a40abea751352a7a018)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_f06a8a1bb5bc5d139d8016d74dea8779)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_9014789f732f5ba0bd3e7b15d6397fe5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_bab7b1819d0652688c8908009480cd41)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5a2b289f0f22571cabbc85776cd0273d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_cda43fe5a8bc5566b7ee6b331f9b350b)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_b3e6ba1f1ae153adbadef57813d339cc)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_1306286731855232997924bcc4808d4e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_fcdb86f907335bd79912da697201d46a)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2a0f962326f554079a3b134bfa04d40e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_86beb97e0ed15ff5ac31e35c2108201e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_75c6e0cb4fc75a97be92cd766acd8489)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_83402af45cee5f959d7b74e65e637b94)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_bb0ee529d7475d609564392fd510756a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2ca7e37b5e8053ccb59a1e8f7d751530)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2cf6eb0c81a452b4ba11b11b5cec58c4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::matrix;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c2e862cc3cf353c5be087ddbe967dbd5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_dcba28a0cabd54cfacbdd6f6414740b1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_03fe240b9d57538eb2e9806121c53943)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_e3ffebd914c9535f98755e87d07d76d2)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2981bd841c5c502da45357da4613e78a)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > > class_09bd2df8c1d757b098f9c63f811f588a("_MatrixBase_09bd2df8c1d757b098f9c63f811f588a", "", boost::python::no_init);
    class_09bd2df8c1d757b098f9c63f811f588a.def("diagonal_size", method_pointer_183742c7c39b5b9ead2a0babae19f79d, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("squared_norm", method_pointer_2b9d4df9047d5a01905991a1f1160151, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("norm", method_pointer_e177a10532035763b4044ea054748920, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("stable_norm", method_pointer_527424ca93b85ee7869b3d60bec847a8, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("blue_norm", method_pointer_559ff4776c6a56188468296e74e6436d, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("hypot_norm", method_pointer_a551dc1bf3b7558fb930d70a0fdae40e, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("normalized", method_pointer_c9018ee882a253b180bf05fa93e711e0, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("stable_normalized", method_pointer_a2a37c09028f5a40abea751352a7a018, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("normalize", method_pointer_f06a8a1bb5bc5d139d8016d74dea8779, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("stable_normalize", method_pointer_9014789f732f5ba0bd3e7b15d6397fe5, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("adjoint_in_place", method_pointer_bab7b1819d0652688c8908009480cd41, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("set_identity", method_pointer_5a2b289f0f22571cabbc85776cd0273d, boost::python::return_internal_reference<>(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("set_identity", autowig::method_decorator_5a2b289f0f22571cabbc85776cd0273d);
    class_09bd2df8c1d757b098f9c63f811f588a.def("set_identity", method_pointer_cda43fe5a8bc5566b7ee6b331f9b350b, boost::python::return_internal_reference<>(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("set_identity", autowig::method_decorator_cda43fe5a8bc5566b7ee6b331f9b350b);
    class_09bd2df8c1d757b098f9c63f811f588a.def("is_identity", method_pointer_b3e6ba1f1ae153adbadef57813d339cc, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("is_diagonal", method_pointer_1306286731855232997924bcc4808d4e, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("is_upper_triangular", method_pointer_fcdb86f907335bd79912da697201d46a, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("is_lower_triangular", method_pointer_2a0f962326f554079a3b134bfa04d40e, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("is_unitary", method_pointer_86beb97e0ed15ff5ac31e35c2108201e, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("force_aligned_access", method_pointer_75c6e0cb4fc75a97be92cd766acd8489, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("force_aligned_access", method_pointer_83402af45cee5f959d7b74e65e637b94, boost::python::return_internal_reference<>(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("force_aligned_access", autowig::method_decorator_83402af45cee5f959d7b74e65e637b94);
    class_09bd2df8c1d757b098f9c63f811f588a.def("trace", method_pointer_bb0ee529d7475d609564392fd510756a, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("matrix", method_pointer_2ca7e37b5e8053ccb59a1e8f7d751530, boost::python::return_internal_reference<>(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("matrix", autowig::method_decorator_2ca7e37b5e8053ccb59a1e8f7d751530);
    class_09bd2df8c1d757b098f9c63f811f588a.def("matrix", method_pointer_2cf6eb0c81a452b4ba11b11b5cec58c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("determinant", method_pointer_c2e862cc3cf353c5be087ddbe967dbd5, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("eigenvalues", method_pointer_dcba28a0cabd54cfacbdd6f6414740b1, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("unit_orthogonal", method_pointer_03fe240b9d57538eb2e9806121c53943, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("euler_angles", method_pointer_e3ffebd914c9535f98755e87d07d76d2, "");
    class_09bd2df8c1d757b098f9c63f811f588a.def("make_householder_in_place", method_pointer_2981bd841c5c502da45357da4613e78a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >();
    }

}