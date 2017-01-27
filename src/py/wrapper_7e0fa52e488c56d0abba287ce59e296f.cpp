#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7e0fa52e488c56d0abba287ce59e296f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_cacdb82820a95c8fbaa7e1b271ee9195)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_f671134f65455969bfe7017f313f9157)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_3505240266cc5bc0b212103765c9dab3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_9cc3e4d5a91e5bf9a97a91939b074ef0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_3851b8d93c1b5abf9b6edc5d79bdc9b1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_02c5c2f4de04506da10ca1028d0e6f10)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_6a182fe292ce5d258d0a6439792722c3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_7e0fa52e488c56d0abba287ce59e296f("_DenseCoeffsBase_7e0fa52e488c56d0abba287ce59e296f", "", boost::python::no_init);
    class_7e0fa52e488c56d0abba287ce59e296f.def("row_index_by_outer_inner", method_pointer_cacdb82820a95c8fbaa7e1b271ee9195, "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("col_index_by_outer_inner", method_pointer_f671134f65455969bfe7017f313f9157, "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("coeff", method_pointer_3505240266cc5bc0b212103765c9dab3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("coeff_by_outer_inner", method_pointer_9cc3e4d5a91e5bf9a97a91939b074ef0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("__call__", method_pointer_3851b8d93c1b5abf9b6edc5d79bdc9b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("coeff", method_pointer_02c5c2f4de04506da10ca1028d0e6f10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e0fa52e488c56d0abba287ce59e296f.def("__call__", method_pointer_6a182fe292ce5d258d0a6439792722c3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >();
    }

}