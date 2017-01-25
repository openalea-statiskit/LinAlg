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
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_a3da340235015692985ef3219cf4a780)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_c511b75f690e513abd33d71556b09e3e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_ad3bc6965dcd5f95b30b2274c1a52883)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_ed9dd8249f9255749d583b675a24c708)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_bf69ac950bd35a9f8a87a4378fbfbe27)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_f4f3e03eb3f257d2871475204d80be62)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_7c078f88e9f65d4386a809cb0aea76e0("_DenseCoeffsBase_7c078f88e9f65d4386a809cb0aea76e0", "", boost::python::no_init);
    class_7c078f88e9f65d4386a809cb0aea76e0.def("row_index_by_outer_inner", method_pointer_489d9fb9afc9542786bafe12f74673d2, "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("col_index_by_outer_inner", method_pointer_97309a77b2685585a5dcf8aac8647de6, "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff", method_pointer_0ac2f984fffe5141a769a7f129836560, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff_by_outer_inner", method_pointer_5a3f065c293b50fa96297fe50a70a6d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("__call__", method_pointer_26da35edf0c750509a5accd5992f587b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("coeff", method_pointer_d7de6cb83db4503b8603a93e5274528f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("__getitem__", method_pointer_a3da340235015692985ef3219cf4a780, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("__call__", method_pointer_c511b75f690e513abd33d71556b09e3e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("x", method_pointer_ad3bc6965dcd5f95b30b2274c1a52883, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("y", method_pointer_ed9dd8249f9255749d583b675a24c708, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("z", method_pointer_bf69ac950bd35a9f8a87a4378fbfbe27, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c078f88e9f65d4386a809cb0aea76e0.def("w", method_pointer_f4f3e03eb3f257d2871475204d80be62, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >();
    }

}