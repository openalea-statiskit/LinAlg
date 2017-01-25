#include "_ieigen.h"


namespace autowig
{
}


void wrapper_cb095380aa715a14bdc722a2fd261760()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_349d74d1bf49522181d8377210e91048)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_9a0bacfe3e705347b7b7fc6c8b83fd2d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_4550881696df5e34bbb0bb07f2d13312)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_36bd8ae70f5f5382b548307b02982004)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_fa375589a57a5453bcf7800aa6c248ae)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_a15276104d405ef9a03bca156d09fd7e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_ea13f7d5aa9a5dfdbad7fc5533c2306e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_744f36fd21d8581cb11d7e9fdce38ccd)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_24f9d467641f57558cd5cdf702d5a7d4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_783bd2dfc08851808f89e656c952e334)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_0b208badc356510f8a6c012323820598)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_41ab3cbb15315219a31bf6a701db9d3c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > > class_cb095380aa715a14bdc722a2fd261760("_DenseCoeffsBase_cb095380aa715a14bdc722a2fd261760", "", boost::python::no_init);
    class_cb095380aa715a14bdc722a2fd261760.def("row_index_by_outer_inner", method_pointer_349d74d1bf49522181d8377210e91048, "");
    class_cb095380aa715a14bdc722a2fd261760.def("col_index_by_outer_inner", method_pointer_9a0bacfe3e705347b7b7fc6c8b83fd2d, "");
    class_cb095380aa715a14bdc722a2fd261760.def("coeff", method_pointer_4550881696df5e34bbb0bb07f2d13312, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("coeff_by_outer_inner", method_pointer_36bd8ae70f5f5382b548307b02982004, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("__call__", method_pointer_fa375589a57a5453bcf7800aa6c248ae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("coeff", method_pointer_a15276104d405ef9a03bca156d09fd7e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("__getitem__", method_pointer_ea13f7d5aa9a5dfdbad7fc5533c2306e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("__call__", method_pointer_744f36fd21d8581cb11d7e9fdce38ccd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("x", method_pointer_24f9d467641f57558cd5cdf702d5a7d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("y", method_pointer_783bd2dfc08851808f89e656c952e334, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("z", method_pointer_0b208badc356510f8a6c012323820598, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cb095380aa715a14bdc722a2fd261760.def("w", method_pointer_41ab3cbb15315219a31bf6a701db9d3c, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >();
    }

}