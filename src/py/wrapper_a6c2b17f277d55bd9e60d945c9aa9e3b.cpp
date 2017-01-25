#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a6c2b17f277d55bd9e60d945c9aa9e3b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_ed82aa4b8a8d5a42b7bcb0cf5060ba2a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_1cd51a95b6d155d6b16b738193bc55bc)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_cdf736e97b0f5ca88a532c9277b42e37)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_10532414d7eb5c4ea3ad6e7325dbcd9a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_82dfb0d2865f5ddb8da5c890ca06cebd)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_8ebef6d3c69f501ea2decebc82d45b65)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_987e0f422b1352578335f3cb79224872)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_5f5fcaf8ac6356dda81fa31bedcb0832)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_6dae1ce6ae8d59c5be9d9fba6947336f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_252aa1aa021b5703825c806dab31740f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c7cfc823175a54548d5123cf04c6cc88)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_8fa35b0a305e572eaf9e899457cbd57a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > > class_a6c2b17f277d55bd9e60d945c9aa9e3b("_DenseCoeffsBase_a6c2b17f277d55bd9e60d945c9aa9e3b", "", boost::python::no_init);
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("row_index_by_outer_inner", method_pointer_ed82aa4b8a8d5a42b7bcb0cf5060ba2a, "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("col_index_by_outer_inner", method_pointer_1cd51a95b6d155d6b16b738193bc55bc, "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("coeff", method_pointer_cdf736e97b0f5ca88a532c9277b42e37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("coeff_by_outer_inner", method_pointer_10532414d7eb5c4ea3ad6e7325dbcd9a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("__call__", method_pointer_82dfb0d2865f5ddb8da5c890ca06cebd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("coeff", method_pointer_8ebef6d3c69f501ea2decebc82d45b65, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("__getitem__", method_pointer_987e0f422b1352578335f3cb79224872, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("__call__", method_pointer_5f5fcaf8ac6356dda81fa31bedcb0832, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("x", method_pointer_6dae1ce6ae8d59c5be9d9fba6947336f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("y", method_pointer_252aa1aa021b5703825c806dab31740f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("z", method_pointer_c7cfc823175a54548d5123cf04c6cc88, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a6c2b17f277d55bd9e60d945c9aa9e3b.def("w", method_pointer_8fa35b0a305e572eaf9e899457cbd57a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >();
    }

}