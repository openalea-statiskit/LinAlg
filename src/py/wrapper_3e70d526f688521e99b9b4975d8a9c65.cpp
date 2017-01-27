#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3e70d526f688521e99b9b4975d8a9c65()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_7d0f64ca65d35ee790f7f7aefcc80301)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_effd4af2923f59a1b8f21737884ee9bd)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_a0acda26fe945f5ba48da77b99a15b99)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_c6e73e3e429b59ae96031f03410aacb1)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_76ea00f90a3b59e1a02199514935309b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_0723726a1ffa532398b84d43d511bdd0)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_956a4a73bbac546b94da1db6dd7c8bc8)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > > > class_3e70d526f688521e99b9b4975d8a9c65("_LLT_3e70d526f688521e99b9b4975d8a9c65", "", boost::python::no_init);
    class_3e70d526f688521e99b9b4975d8a9c65.def("rcond", method_pointer_7d0f64ca65d35ee790f7f7aefcc80301, "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("matrix_llt", method_pointer_effd4af2923f59a1b8f21737884ee9bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("reconstructed_matrix", method_pointer_a0acda26fe945f5ba48da77b99a15b99, "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("info", method_pointer_c6e73e3e429b59ae96031f03410aacb1, "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("adjoint", method_pointer_76ea00f90a3b59e1a02199514935309b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("rows", method_pointer_0723726a1ffa532398b84d43d511bdd0, "");
    class_3e70d526f688521e99b9b4975d8a9c65.def("cols", method_pointer_956a4a73bbac546b94da1db6dd7c8bc8, "");

}