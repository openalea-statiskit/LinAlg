#include "_ieigen.h"


namespace autowig
{
}


void wrapper_50c60e0297a254c79a1943ff22a899b0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_325d5ec969d65388ae0e7210d74f8b4d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_fd166cd3972958cca0faa9c464707d31)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_35da91a0f1cb5bf69b8e383600109bb0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_053b175cd74d5c51a59318196012f82c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_c3710ca84a8f5f0ca4df844e9915f0a5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_9ac6b45b660f56f3b180cc60d0fc2b0a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_5b611dc5da54536e99b4e928901d010a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_50c60e0297a254c79a1943ff22a899b0("_DenseCoeffsBase_50c60e0297a254c79a1943ff22a899b0", "", boost::python::no_init);
    class_50c60e0297a254c79a1943ff22a899b0.def("row_index_by_outer_inner", method_pointer_325d5ec969d65388ae0e7210d74f8b4d, "");
    class_50c60e0297a254c79a1943ff22a899b0.def("col_index_by_outer_inner", method_pointer_fd166cd3972958cca0faa9c464707d31, "");
    class_50c60e0297a254c79a1943ff22a899b0.def("coeff", method_pointer_35da91a0f1cb5bf69b8e383600109bb0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c60e0297a254c79a1943ff22a899b0.def("coeff_by_outer_inner", method_pointer_053b175cd74d5c51a59318196012f82c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c60e0297a254c79a1943ff22a899b0.def("__call__", method_pointer_c3710ca84a8f5f0ca4df844e9915f0a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c60e0297a254c79a1943ff22a899b0.def("coeff", method_pointer_9ac6b45b660f56f3b180cc60d0fc2b0a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c60e0297a254c79a1943ff22a899b0.def("__call__", method_pointer_5b611dc5da54536e99b4e928901d010a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >();
    }

}