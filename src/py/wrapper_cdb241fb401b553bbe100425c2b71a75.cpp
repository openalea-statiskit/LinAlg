#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b24bc5e689ec5dbabf86e1e2c5cc8d41(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_63e40aebbf085680aa9e705b154d342c(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_da6422bc9c19599ba573b92ec9557365(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_cdb241fb401b553bbe100425c2b71a75()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b24bc5e689ec5dbabf86e1e2c5cc8d41)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_21074012dfd355f9bdeba8bb9eef464a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_423bfbcfc6eb5ac4a2588295a7662bec)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_8dd9d4604d59588db03d2c166153bb8b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_ebdad95965de5ab2ad4d83f334d9c473)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b14d5040395a51ceb27a3df852e470c7)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_6d823ba83bfb556c907dc3a2663fb56b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_63e40aebbf085680aa9e705b154d342c)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_da6422bc9c19599ba573b92ec9557365)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_df0bac12aa9559d6850abe374113eaf1)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b2087e5d6bf55cca81a3e3e4533586d8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_980fb71b62555d729b8c230146a2c2be)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_d86e5290fd1f56dfb013e4a7e21e2bf5)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_007fe677cf6153528382de162b2cbd0a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > > > class_cdb241fb401b553bbe100425c2b71a75("_SVDBase_cdb241fb401b553bbe100425c2b71a75", "", boost::python::no_init);
    class_cdb241fb401b553bbe100425c2b71a75.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >  const & >(""));
    class_cdb241fb401b553bbe100425c2b71a75.def("derived", method_pointer_b24bc5e689ec5dbabf86e1e2c5cc8d41, boost::python::return_internal_reference<>(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("derived", autowig::method_decorator_b24bc5e689ec5dbabf86e1e2c5cc8d41);
    class_cdb241fb401b553bbe100425c2b71a75.def("derived", method_pointer_21074012dfd355f9bdeba8bb9eef464a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("matrix_u", method_pointer_423bfbcfc6eb5ac4a2588295a7662bec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("matrix_v", method_pointer_8dd9d4604d59588db03d2c166153bb8b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("singular_values", method_pointer_ebdad95965de5ab2ad4d83f334d9c473, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("nonzero_singular_values", method_pointer_b14d5040395a51ceb27a3df852e470c7, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("rank", method_pointer_6d823ba83bfb556c907dc3a2663fb56b, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("set_threshold", method_pointer_63e40aebbf085680aa9e705b154d342c, boost::python::return_internal_reference<>(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("set_threshold", autowig::method_decorator_63e40aebbf085680aa9e705b154d342c);
    class_cdb241fb401b553bbe100425c2b71a75.def("set_threshold", method_pointer_da6422bc9c19599ba573b92ec9557365, boost::python::return_internal_reference<>(), "");
    class_cdb241fb401b553bbe100425c2b71a75.def("set_threshold", autowig::method_decorator_da6422bc9c19599ba573b92ec9557365);
    class_cdb241fb401b553bbe100425c2b71a75.def("threshold", method_pointer_df0bac12aa9559d6850abe374113eaf1, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("compute_u", method_pointer_b2087e5d6bf55cca81a3e3e4533586d8, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("compute_v", method_pointer_980fb71b62555d729b8c230146a2c2be, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("rows", method_pointer_d86e5290fd1f56dfb013e4a7e21e2bf5, "");
    class_cdb241fb401b553bbe100425c2b71a75.def("cols", method_pointer_007fe677cf6153528382de162b2cbd0a, "");

}