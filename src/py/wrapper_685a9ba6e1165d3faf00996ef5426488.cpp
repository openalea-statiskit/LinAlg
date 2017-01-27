#include "_ieigen.h"


namespace autowig
{
}


void wrapper_685a9ba6e1165d3faf00996ef5426488()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_1768c6027cfd55a484a412504819ad09)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_837ad1c1b57a5a0d9327b888555230a3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_b55a35343ea95eaf9e3604e45c357745)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_9be234e019dd590ea2c35b2293572902)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_54231154507b5174828fbe128d4ccf9b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_36ea02454fd65fbfb3e2981d62334e10)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_7fbfa84bc7ed50cea1f2b4756c6368b7)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_685a9ba6e1165d3faf00996ef5426488("_DenseCoeffsBase_685a9ba6e1165d3faf00996ef5426488", "", boost::python::no_init);
    class_685a9ba6e1165d3faf00996ef5426488.def("row_index_by_outer_inner", method_pointer_1768c6027cfd55a484a412504819ad09, "");
    class_685a9ba6e1165d3faf00996ef5426488.def("col_index_by_outer_inner", method_pointer_837ad1c1b57a5a0d9327b888555230a3, "");
    class_685a9ba6e1165d3faf00996ef5426488.def("coeff", method_pointer_b55a35343ea95eaf9e3604e45c357745, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_685a9ba6e1165d3faf00996ef5426488.def("coeff_by_outer_inner", method_pointer_9be234e019dd590ea2c35b2293572902, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_685a9ba6e1165d3faf00996ef5426488.def("__call__", method_pointer_54231154507b5174828fbe128d4ccf9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_685a9ba6e1165d3faf00996ef5426488.def("coeff", method_pointer_36ea02454fd65fbfb3e2981d62334e10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_685a9ba6e1165d3faf00996ef5426488.def("__call__", method_pointer_7fbfa84bc7ed50cea1f2b4756c6368b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >();
    }

}