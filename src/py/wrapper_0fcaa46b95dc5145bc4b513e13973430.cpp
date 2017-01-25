#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0fcaa46b95dc5145bc4b513e13973430()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_a1f662298e9956ffb63227e2449bdf17)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_3fb18ef12a3c5389b17e93f9fe49f562)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_f0f7e5793af95bbda2bf3f67d647328e)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_d7cbd8c9a2145b5db634522265b6101b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_ec5dc29bc8d65239861f6bd52ab0f301)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_4c7b28a909d956d1839cf871f403e31f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_e2007b1bf9705ed9b7bcaf27d3b6d59b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_a5fcb78f2aec59099ea85689dab2d2f3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_02a729a5ad8a55d3aaf580ca9ceb26be)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_74a4465fb3d65eb9b5c0c9c61d70d1e8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_83df01a78ad15fc6a2ffa075423c81fc)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_c5ba40b212215b47b9f3d6124416fde6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > > class_0fcaa46b95dc5145bc4b513e13973430("_DenseCoeffsBase_0fcaa46b95dc5145bc4b513e13973430", "", boost::python::no_init);
    class_0fcaa46b95dc5145bc4b513e13973430.def("row_index_by_outer_inner", method_pointer_a1f662298e9956ffb63227e2449bdf17, "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("col_index_by_outer_inner", method_pointer_3fb18ef12a3c5389b17e93f9fe49f562, "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("coeff", method_pointer_f0f7e5793af95bbda2bf3f67d647328e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("coeff_by_outer_inner", method_pointer_d7cbd8c9a2145b5db634522265b6101b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("__call__", method_pointer_ec5dc29bc8d65239861f6bd52ab0f301, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("coeff", method_pointer_4c7b28a909d956d1839cf871f403e31f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("__getitem__", method_pointer_e2007b1bf9705ed9b7bcaf27d3b6d59b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("__call__", method_pointer_a5fcb78f2aec59099ea85689dab2d2f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("x", method_pointer_02a729a5ad8a55d3aaf580ca9ceb26be, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("y", method_pointer_74a4465fb3d65eb9b5c0c9c61d70d1e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("z", method_pointer_83df01a78ad15fc6a2ffa075423c81fc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fcaa46b95dc5145bc4b513e13973430.def("w", method_pointer_c5ba40b212215b47b9f3d6124416fde6, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >();
    }

}