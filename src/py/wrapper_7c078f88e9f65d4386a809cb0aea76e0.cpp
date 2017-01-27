#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7c078f88e9f65d4386a809cb0aea76e0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_489d9fb9afc9542786bafe12f74673d2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_97309a77b2685585a5dcf8aac8647de6)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_0ac2f984fffe5141a769a7f129836560)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_5a3f065c293b50fa96297fe50a70a6d5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_26da35edf0c750509a5accd5992f587b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_d7de6cb83db4503b8603a93e5274528f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_c511b75f690e513abd33d71556b09e3e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_7c078f88e9f65d4386a809cb0aea76e0("_DenseCoeffsBase_7c078f88e9f65d4386a809cb0aea76e0", "", boost::python::no_init);
    class_7c078f88e9f65d4386a809cb0aea76e0.def("row_index_by_outer_inner", method_pointer_489d9fb9afc9542786bafe12f74673d2, "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("col_index_by_outer_inner", method_pointer_97309a77b2685585a5dcf8aac8647de6, "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff", method_pointer_0ac2f984fffe5141a769a7f129836560, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff_by_outer_inner", method_pointer_5a3f065c293b50fa96297fe50a70a6d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("__call__", method_pointer_26da35edf0c750509a5accd5992f587b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff", method_pointer_d7de6cb83db4503b8603a93e5274528f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("__call__", method_pointer_c511b75f690e513abd33d71556b09e3e, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >();
    }

}