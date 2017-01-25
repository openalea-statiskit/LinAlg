#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d80f683edc405c1aa43d33643c61c468()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_3f39e1344de55696a0c2ab9007c6dc70)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_236b8168b52a5e13bf82c693d835172c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_3f359c649240583b8c2b0dad2e92518d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_560988c2ea69501eac41fce663b53f8b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_24aab875345b59feb551aec709031e38)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_44360fd631cd56eb8c7aae71c2024723)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_637543b1d0585dbebd62e686f306b0af)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_b9536fae62475288ab7c0e713a336320)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_63be0b593e3155b5b334e6526f22b382)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_3092b3add7c550a8acfa95b3263ad4c4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_2b26b38a41d654af8ba840ecd94b0e32)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_7b2b865702cb5e3189b9c2999ef1b333)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > > class_d80f683edc405c1aa43d33643c61c468("_DenseCoeffsBase_d80f683edc405c1aa43d33643c61c468", "", boost::python::no_init);
    class_d80f683edc405c1aa43d33643c61c468.def("row_index_by_outer_inner", method_pointer_3f39e1344de55696a0c2ab9007c6dc70, "");
    class_d80f683edc405c1aa43d33643c61c468.def("col_index_by_outer_inner", method_pointer_236b8168b52a5e13bf82c693d835172c, "");
    class_d80f683edc405c1aa43d33643c61c468.def("coeff", method_pointer_3f359c649240583b8c2b0dad2e92518d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("coeff_by_outer_inner", method_pointer_560988c2ea69501eac41fce663b53f8b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("__call__", method_pointer_24aab875345b59feb551aec709031e38, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("coeff", method_pointer_44360fd631cd56eb8c7aae71c2024723, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("__getitem__", method_pointer_637543b1d0585dbebd62e686f306b0af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("__call__", method_pointer_b9536fae62475288ab7c0e713a336320, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("x", method_pointer_63be0b593e3155b5b334e6526f22b382, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("y", method_pointer_3092b3add7c550a8acfa95b3263ad4c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("z", method_pointer_2b26b38a41d654af8ba840ecd94b0e32, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d80f683edc405c1aa43d33643c61c468.def("w", method_pointer_7b2b865702cb5e3189b9c2999ef1b333, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >();
    }

}