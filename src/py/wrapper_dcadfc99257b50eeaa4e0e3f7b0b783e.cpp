#include "_ieigen.h"


namespace autowig
{
}


void wrapper_dcadfc99257b50eeaa4e0e3f7b0b783e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_90d86e60a7fc5697bc250f91ef417cac)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::setZero;
    class ::Eigen::Transpositions< 2, 2, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_ce78b20be10755c28846c65dd1dc95cf)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8c43e213be3258dbb26855ae9168ff50)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8a5ed7e38a7d53b2922fa716d2374cb1)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_32e86609c656570e808e0ef39bc8cd26)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_fb4ef994062a5db3b57a390d7fd4147e)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_4821e6eeb6ad53c2a1eff6a11c7362fc)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f14b148b300c533fa93fb15d8695d2db)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_745140f1d0a7500097b318f478d98291)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d778a9ea47b4583e86d93d6b194cce94)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_440a09748c3f59b68e700a83e11853df)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > > > class_dcadfc99257b50eeaa4e0e3f7b0b783e("_LDLT_dcadfc99257b50eeaa4e0e3f7b0b783e", "", boost::python::no_init);
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("set_zero", method_pointer_90d86e60a7fc5697bc250f91ef417cac, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("transpositions_p", method_pointer_ce78b20be10755c28846c65dd1dc95cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("is_positive", method_pointer_8c43e213be3258dbb26855ae9168ff50, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("is_negative", method_pointer_8a5ed7e38a7d53b2922fa716d2374cb1, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("rcond", method_pointer_32e86609c656570e808e0ef39bc8cd26, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("matrix_ldlt", method_pointer_fb4ef994062a5db3b57a390d7fd4147e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("reconstructed_matrix", method_pointer_4821e6eeb6ad53c2a1eff6a11c7362fc, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("adjoint", method_pointer_f14b148b300c533fa93fb15d8695d2db, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("rows", method_pointer_745140f1d0a7500097b318f478d98291, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("cols", method_pointer_d778a9ea47b4583e86d93d6b194cce94, "");
    class_dcadfc99257b50eeaa4e0e3f7b0b783e.def("info", method_pointer_440a09748c3f59b68e700a83e11853df, "");

}