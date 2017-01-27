#include "_ieigen.h"


namespace autowig
{
    void method_decorator_89dcce2742f25591b6b3825efbeef092(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_3fc6912566625063961c261dcbf4ebf4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_6455dba2822657f1a88cbecab494d806(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c04a250afbe95284aae5c6123db458de(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_c278a88782ad5bdaacf6474cb06db99e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_eb4aa6e3bf4153d9990b31fbd5bccc4f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ad96035ededf597ba57bb1772f62d89d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_31b6d3a4a2ef5006839abf6f170cd316)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8ce09a460fa35515b5c9c448fcb79fe3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6f6bc998335a5d318d7199b44ef132e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_fd50a886ed69581e86cffa1b0566f454)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_bc8c16b517605bd28ea6e83878f5f741)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_372e940d58ec5ef283cc00cc414ad891)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_714a8bc8c873516ca9077834b9a5399a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_dc4958102e5a536f8b45a38dec7af728)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_89dcce2742f25591b6b3825efbeef092)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_3fc6912566625063961c261dcbf4ebf4)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_bab2a4cfde9c558fb5918fed20ce0530)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_baa536d560e4518e8c90673c28f7a0e5)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_7d9721d249b753e69ef86f95cfae99f6)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_3bdca1be21495bc386786d6cebe93eb0)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_16c518a2123b59789aafd6ccfa200dd2)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_df47c016b6d959cbb71ace583697d1aa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6455dba2822657f1a88cbecab494d806)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_2e5e793b6662558babf7db02fabe5fec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_c04a250afbe95284aae5c6123db458de)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_748ac365f219535189873c2396390721)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4da5def501115be4b94e968d14660df7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4c712c45094f557d9bb0638f80229d00)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f45d919c0bea51db98a276c6a792241a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::lu;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_88fbefcd7fc652d8b232ebee3aaf485c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_eed567df6f345da9951b51cb88328302)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b9b80439567856bd84c074afeb91b714)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_76dfb98acb8f533e856134f26aa53c71)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_01e12c99e27255a5807b60ad7b7ae095)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_193fda1890065328a0c50d3c8b35b110)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_31782f7874c651089df9f049bb287214)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b2ab1d33e10256a3b59cfad839b99cc4)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0c67f6faa7b85b3a9e9ae44f3bb6172e)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_c278a88782ad5bdaacf6474cb06db99e("_MatrixBase_c278a88782ad5bdaacf6474cb06db99e", "", boost::python::no_init);
    class_c278a88782ad5bdaacf6474cb06db99e.def("diagonal_size", method_pointer_eb4aa6e3bf4153d9990b31fbd5bccc4f, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("squared_norm", method_pointer_ad96035ededf597ba57bb1772f62d89d, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("norm", method_pointer_31b6d3a4a2ef5006839abf6f170cd316, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("blue_norm", method_pointer_8ce09a460fa35515b5c9c448fcb79fe3, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("hypot_norm", method_pointer_6f6bc998335a5d318d7199b44ef132e4, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("normalized", method_pointer_fd50a886ed69581e86cffa1b0566f454, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("stable_normalized", method_pointer_bc8c16b517605bd28ea6e83878f5f741, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("normalize", method_pointer_372e940d58ec5ef283cc00cc414ad891, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("stable_normalize", method_pointer_714a8bc8c873516ca9077834b9a5399a, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("adjoint_in_place", method_pointer_dc4958102e5a536f8b45a38dec7af728, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("set_identity", method_pointer_89dcce2742f25591b6b3825efbeef092, boost::python::return_internal_reference<>(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("set_identity", autowig::method_decorator_89dcce2742f25591b6b3825efbeef092);
    class_c278a88782ad5bdaacf6474cb06db99e.def("set_identity", method_pointer_3fc6912566625063961c261dcbf4ebf4, boost::python::return_internal_reference<>(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("set_identity", autowig::method_decorator_3fc6912566625063961c261dcbf4ebf4);
    class_c278a88782ad5bdaacf6474cb06db99e.def("is_identity", method_pointer_bab2a4cfde9c558fb5918fed20ce0530, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("is_diagonal", method_pointer_baa536d560e4518e8c90673c28f7a0e5, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("is_upper_triangular", method_pointer_7d9721d249b753e69ef86f95cfae99f6, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("is_lower_triangular", method_pointer_3bdca1be21495bc386786d6cebe93eb0, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("is_unitary", method_pointer_16c518a2123b59789aafd6ccfa200dd2, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("force_aligned_access", method_pointer_df47c016b6d959cbb71ace583697d1aa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("force_aligned_access", method_pointer_6455dba2822657f1a88cbecab494d806, boost::python::return_internal_reference<>(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("force_aligned_access", autowig::method_decorator_6455dba2822657f1a88cbecab494d806);
    class_c278a88782ad5bdaacf6474cb06db99e.def("trace", method_pointer_2e5e793b6662558babf7db02fabe5fec, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("matrix", method_pointer_c04a250afbe95284aae5c6123db458de, boost::python::return_internal_reference<>(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("matrix", autowig::method_decorator_c04a250afbe95284aae5c6123db458de);
    class_c278a88782ad5bdaacf6474cb06db99e.def("matrix", method_pointer_748ac365f219535189873c2396390721, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("full_piv_lu", method_pointer_4da5def501115be4b94e968d14660df7, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("partial_piv_lu", method_pointer_4c712c45094f557d9bb0638f80229d00, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("lu", method_pointer_f45d919c0bea51db98a276c6a792241a, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("determinant", method_pointer_88fbefcd7fc652d8b232ebee3aaf485c, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("llt", method_pointer_eed567df6f345da9951b51cb88328302, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("ldlt", method_pointer_b9b80439567856bd84c074afeb91b714, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("householder_qr", method_pointer_76dfb98acb8f533e856134f26aa53c71, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("col_piv_householder_qr", method_pointer_01e12c99e27255a5807b60ad7b7ae095, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("full_piv_householder_qr", method_pointer_193fda1890065328a0c50d3c8b35b110, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("eigenvalues", method_pointer_31782f7874c651089df9f049bb287214, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("jacobi_svd", method_pointer_b2ab1d33e10256a3b59cfad839b99cc4, "");
    class_c278a88782ad5bdaacf6474cb06db99e.def("make_householder_in_place", method_pointer_0c67f6faa7b85b3a9e9ae44f3bb6172e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >();
    }

}