#include "_ieigen.h"


namespace autowig
{
}


void wrapper_76f2a4ac6c3b5458a158795a2edd34d9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_0c5cd5cd6f705469bc37bc2113d6dda1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_389e308f2052595e843021292297a1e8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_20092fac4329553894fc68c57be65c19)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_b0db98c12596557abd82d84dd8035d84)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_2a78e0b6123a55e786b725d78b9d012c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_6b3b52a7a3fc51448cdf41a76e7c4099)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_14b26173596851cd8332dc7475ea59f3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_36b381f7c5265d268d34146ad93b557c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_bf06ed5c887354fab13eae66fe9ee0b3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_7026780fd566557182f8ff73259da65f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_a343e05c56aa5cf7846446d9363d4416)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >::z;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > > class_76f2a4ac6c3b5458a158795a2edd34d9("_DenseCoeffsBase_76f2a4ac6c3b5458a158795a2edd34d9", "", boost::python::no_init);
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("row_index_by_outer_inner", method_pointer_0c5cd5cd6f705469bc37bc2113d6dda1, "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("col_index_by_outer_inner", method_pointer_389e308f2052595e843021292297a1e8, "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("coeff", method_pointer_20092fac4329553894fc68c57be65c19, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("coeff_by_outer_inner", method_pointer_b0db98c12596557abd82d84dd8035d84, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("__call__", method_pointer_2a78e0b6123a55e786b725d78b9d012c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("coeff", method_pointer_6b3b52a7a3fc51448cdf41a76e7c4099, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("__getitem__", method_pointer_14b26173596851cd8332dc7475ea59f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("__call__", method_pointer_36b381f7c5265d268d34146ad93b557c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("x", method_pointer_bf06ed5c887354fab13eae66fe9ee0b3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("y", method_pointer_7026780fd566557182f8ff73259da65f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76f2a4ac6c3b5458a158795a2edd34d9.def("z", method_pointer_a343e05c56aa5cf7846446d9363d4416, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >();
    }

}