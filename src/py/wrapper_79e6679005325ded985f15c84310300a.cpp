#include "_ieigen.h"


namespace autowig
{
}


void wrapper_79e6679005325ded985f15c84310300a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_aeb5e9d92bd3563799c0fec599c0a3a8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_22dc0c02f5cc5fce8b0e7bd496913f0f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_71067414a26f5909a04fbdafaf3ec445)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_112a1dc7f75250589ee5a78373f7d021)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_639515a3af7f5a4ca23c9dac5aa656e0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_6a4c793b975e59c98978a8e3dfb91f4a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_15a8b3e77d35582ba56e626e99dd5c81)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_41ef8b2c9b0b500f8866e7572596ca4c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_92d61c42b39b57b0a593d3c65d78b3a0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_404b48ca7eff5454b8330577f9bf9288)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_1f90ad6342b45c1290838d607d2a8c28)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >::z;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > > class_79e6679005325ded985f15c84310300a("_DenseCoeffsBase_79e6679005325ded985f15c84310300a", "", boost::python::no_init);
    class_79e6679005325ded985f15c84310300a.def("row_index_by_outer_inner", method_pointer_aeb5e9d92bd3563799c0fec599c0a3a8, "");
    class_79e6679005325ded985f15c84310300a.def("col_index_by_outer_inner", method_pointer_22dc0c02f5cc5fce8b0e7bd496913f0f, "");
    class_79e6679005325ded985f15c84310300a.def("coeff", method_pointer_71067414a26f5909a04fbdafaf3ec445, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("coeff_by_outer_inner", method_pointer_112a1dc7f75250589ee5a78373f7d021, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("__call__", method_pointer_639515a3af7f5a4ca23c9dac5aa656e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("coeff", method_pointer_6a4c793b975e59c98978a8e3dfb91f4a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("__getitem__", method_pointer_15a8b3e77d35582ba56e626e99dd5c81, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("__call__", method_pointer_41ef8b2c9b0b500f8866e7572596ca4c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("x", method_pointer_92d61c42b39b57b0a593d3c65d78b3a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("y", method_pointer_404b48ca7eff5454b8330577f9bf9288, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_79e6679005325ded985f15c84310300a.def("z", method_pointer_1f90ad6342b45c1290838d607d2a8c28, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >();
    }

}