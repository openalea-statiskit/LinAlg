#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0af1d4f4f1e350dc9df6293165fe01bf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_6dee5b3bc7fe523a8367f0515c99b5c5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_8cb90cef5877549093b4652643f16e01)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9fe16aa5d5ea5c889c1a04c6f698fd81)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_53d3aa650bf95790807786174a4e86c3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_aeee3c9747a4596eb4e436b9f4b3a6b7)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_906355561c655c3eaa17b985b9fc81b5)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_8b3bf0e2756555ed8c3a3bda37419607)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_2d0ada5afeb3523b844a9f5e1905687c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_1cf4924516635fb49f7e5ab07aaccc7a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_efdb91fa12f55b43821360804491066c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_bbd2a1bcc49d5747b8b12d8e2aff73ed)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_77ad6e43092e55aa88743203b988d3cf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > > class_0af1d4f4f1e350dc9df6293165fe01bf("_DenseCoeffsBase_0af1d4f4f1e350dc9df6293165fe01bf", "", boost::python::no_init);
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("row_index_by_outer_inner", method_pointer_6dee5b3bc7fe523a8367f0515c99b5c5, "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("col_index_by_outer_inner", method_pointer_8cb90cef5877549093b4652643f16e01, "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("coeff", method_pointer_9fe16aa5d5ea5c889c1a04c6f698fd81, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("coeff_by_outer_inner", method_pointer_53d3aa650bf95790807786174a4e86c3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("__call__", method_pointer_aeee3c9747a4596eb4e436b9f4b3a6b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("coeff", method_pointer_906355561c655c3eaa17b985b9fc81b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("__getitem__", method_pointer_8b3bf0e2756555ed8c3a3bda37419607, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("__call__", method_pointer_2d0ada5afeb3523b844a9f5e1905687c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("x", method_pointer_1cf4924516635fb49f7e5ab07aaccc7a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("y", method_pointer_efdb91fa12f55b43821360804491066c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("z", method_pointer_bbd2a1bcc49d5747b8b12d8e2aff73ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0af1d4f4f1e350dc9df6293165fe01bf.def("w", method_pointer_77ad6e43092e55aa88743203b988d3cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >();
    }

}