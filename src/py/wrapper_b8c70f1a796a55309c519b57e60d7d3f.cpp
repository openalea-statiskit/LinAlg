#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b8c70f1a796a55309c519b57e60d7d3f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_280abc664c195f34ae6f3b8cd5b4067b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_74af9159325c5542b6d90acd3c3613be)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_eb6acd6b2468500a904bf53cf6713a4c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_73709e09fda65b98a8072a5b891936ed)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_c6007522b1c55c8985f5aed8a2c6c337)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_1fd1ca6139bc51f695720342953a58fb)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_e4461f369ebc5a8ba88243a038079178)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_b8c70f1a796a55309c519b57e60d7d3f("_DenseCoeffsBase_b8c70f1a796a55309c519b57e60d7d3f", "", boost::python::no_init);
    class_b8c70f1a796a55309c519b57e60d7d3f.def("row_index_by_outer_inner", method_pointer_280abc664c195f34ae6f3b8cd5b4067b, "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("col_index_by_outer_inner", method_pointer_74af9159325c5542b6d90acd3c3613be, "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("coeff", method_pointer_eb6acd6b2468500a904bf53cf6713a4c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("coeff_by_outer_inner", method_pointer_73709e09fda65b98a8072a5b891936ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("__call__", method_pointer_c6007522b1c55c8985f5aed8a2c6c337, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("coeff", method_pointer_1fd1ca6139bc51f695720342953a58fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b8c70f1a796a55309c519b57e60d7d3f.def("__call__", method_pointer_e4461f369ebc5a8ba88243a038079178, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >();
    }

}