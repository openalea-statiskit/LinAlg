#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8a0553578953500fa88fe6d5acb5a4ed(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_f518262e68c85f408e1adfb7dc29ab70(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_b9b2cde8cb10574e96ea91e807e7091a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_fc6c523457525b72bf21333cda885da3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9ceb4a222eef5a1d898ccd962cc1ca78)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 4, 1, 1, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_451f33dba7da5c03a6308285dbfdb13b)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_0f5372ddd9165eb4af468c816375bb11)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_409f14763ae25e1fba492e227d43e37a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2187daa0c2b45958a4fde425131395d2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1d7d2963113854328b1feb8bfa5c9f7d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ff953946c9f55371bded0e8681abc597)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7de6fc582ed65ab8b05462d658db2e2e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8803c54a1a9c5fb3a9974e67eb3c3f4c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7c6d19cd2829526cb3f555fd7edb7dc4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_759d64df98825a538e7798bca6486a86)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f397a06bb04d5c1795a18ceef7141a16)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8a0553578953500fa88fe6d5acb5a4ed)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f518262e68c85f408e1adfb7dc29ab70)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a1daae0a47095e90bd946d9d01476276)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5daa048201195453b0c76ff9ee51f099)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d1676a6ea435582f9ec197738574b2d6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_b9b2cde8cb10574e96ea91e807e7091a("_FullPivHouseholderQR_b9b2cde8cb10574e96ea91e807e7091a", "", boost::python::no_init);
    class_b9b2cde8cb10574e96ea91e807e7091a.def("matrix_qr", method_pointer_fc6c523457525b72bf21333cda885da3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("cols_permutation", method_pointer_9ceb4a222eef5a1d898ccd962cc1ca78, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("rows_transpositions", method_pointer_451f33dba7da5c03a6308285dbfdb13b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("abs_determinant", method_pointer_0f5372ddd9165eb4af468c816375bb11, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("log_abs_determinant", method_pointer_409f14763ae25e1fba492e227d43e37a, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("rank", method_pointer_2187daa0c2b45958a4fde425131395d2, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("dimension_of_kernel", method_pointer_1d7d2963113854328b1feb8bfa5c9f7d, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("is_injective", method_pointer_ff953946c9f55371bded0e8681abc597, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("is_surjective", method_pointer_7de6fc582ed65ab8b05462d658db2e2e, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("is_invertible", method_pointer_8803c54a1a9c5fb3a9974e67eb3c3f4c, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("rows", method_pointer_7c6d19cd2829526cb3f555fd7edb7dc4, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("cols", method_pointer_759d64df98825a538e7798bca6486a86, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("h_coeffs", method_pointer_f397a06bb04d5c1795a18ceef7141a16, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("set_threshold", method_pointer_8a0553578953500fa88fe6d5acb5a4ed, boost::python::return_internal_reference<>(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("set_threshold", autowig::method_decorator_8a0553578953500fa88fe6d5acb5a4ed);
    class_b9b2cde8cb10574e96ea91e807e7091a.def("set_threshold", method_pointer_f518262e68c85f408e1adfb7dc29ab70, boost::python::return_internal_reference<>(), "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("set_threshold", autowig::method_decorator_f518262e68c85f408e1adfb7dc29ab70);
    class_b9b2cde8cb10574e96ea91e807e7091a.def("threshold", method_pointer_a1daae0a47095e90bd946d9d01476276, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("nonzero_pivots", method_pointer_5daa048201195453b0c76ff9ee51f099, "");
    class_b9b2cde8cb10574e96ea91e807e7091a.def("max_pivot", method_pointer_d1676a6ea435582f9ec197738574b2d6, "");

}