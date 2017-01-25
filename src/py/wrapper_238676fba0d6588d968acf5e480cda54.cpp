#include "_ieigen.h"


namespace autowig
{
}


void wrapper_238676fba0d6588d968acf5e480cda54()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_084f4a0a44c05a53989d2473e149bb1f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_4333677d5c8756c3ad01ad2e32a247cf)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_491774bde9265b4b81a3ebde77913cb1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_b5d79c2b69d055098742b9968a115c23)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_1884e669b28058d1a90619cbf7636a97)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_c629549a61e950aa84528108ccc8bdc9)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_9ae37413ed0e5df2adb39515ac015b62)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_7e4fb12237865bcdb4ba48ec4c4b7cdd)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_0c87533e8b265a8599fc61ebedcf7241)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_284c80b07bb25619ad2045751b02c06c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_061654e330ed59e39b74b29ec3a52dca)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_79a17e8463c55878bd2aae377c40274d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > > class_238676fba0d6588d968acf5e480cda54("_DenseCoeffsBase_238676fba0d6588d968acf5e480cda54", "", boost::python::no_init);
    class_238676fba0d6588d968acf5e480cda54.def("row_index_by_outer_inner", method_pointer_084f4a0a44c05a53989d2473e149bb1f, "");
    class_238676fba0d6588d968acf5e480cda54.def("col_index_by_outer_inner", method_pointer_4333677d5c8756c3ad01ad2e32a247cf, "");
    class_238676fba0d6588d968acf5e480cda54.def("coeff", method_pointer_491774bde9265b4b81a3ebde77913cb1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("coeff_by_outer_inner", method_pointer_b5d79c2b69d055098742b9968a115c23, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("__call__", method_pointer_1884e669b28058d1a90619cbf7636a97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("coeff", method_pointer_c629549a61e950aa84528108ccc8bdc9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("__getitem__", method_pointer_9ae37413ed0e5df2adb39515ac015b62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("__call__", method_pointer_7e4fb12237865bcdb4ba48ec4c4b7cdd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("x", method_pointer_0c87533e8b265a8599fc61ebedcf7241, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("y", method_pointer_284c80b07bb25619ad2045751b02c06c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("z", method_pointer_061654e330ed59e39b74b29ec3a52dca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_238676fba0d6588d968acf5e480cda54.def("w", method_pointer_79a17e8463c55878bd2aae377c40274d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >();
    }

}