#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d85e78cc6a1a5f2a987b7f5ea1160fa4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_53557f0ba6035f87bd82eba751788422)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_f3961a83b0ae5a3f84255d1b35d5bd87)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_383f210b4f9b525c8a7532993eee1ce5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_6a0bcefa2be4531fb6b877d06fb10e1b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_284725a321fb5093897f106457dff130)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_472e031fee855912afe0e331f8683f5f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_cc529d1316215f8bb103e601d7f848d4)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > > class_d85e78cc6a1a5f2a987b7f5ea1160fa4("_DenseCoeffsBase_d85e78cc6a1a5f2a987b7f5ea1160fa4", "", boost::python::no_init);
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("row_index_by_outer_inner", method_pointer_53557f0ba6035f87bd82eba751788422, "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("col_index_by_outer_inner", method_pointer_f3961a83b0ae5a3f84255d1b35d5bd87, "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("coeff", method_pointer_383f210b4f9b525c8a7532993eee1ce5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("coeff_by_outer_inner", method_pointer_6a0bcefa2be4531fb6b877d06fb10e1b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("__call__", method_pointer_284725a321fb5093897f106457dff130, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("coeff", method_pointer_472e031fee855912afe0e331f8683f5f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d85e78cc6a1a5f2a987b7f5ea1160fa4.def("__call__", method_pointer_cc529d1316215f8bb103e601d7f848d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >();
    }

}