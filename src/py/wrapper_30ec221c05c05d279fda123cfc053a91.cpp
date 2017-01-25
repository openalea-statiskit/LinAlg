#include "_ieigen.h"


namespace autowig
{
}


void wrapper_30ec221c05c05d279fda123cfc053a91()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_6e722e6cef57576a8c01594ad0f83f56)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_1b73ae03c4215cb7babc53f45f745b09)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_37a4e688eb3d592dbfc5faaa080a59c0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_4f662e478aa35251bf80f672e4fd56f4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_75209ea955cf53e5b7d92da4223e8fc4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_8f037ceed78a56b490c14485c9c00409)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_6be080040a34528d9d53bed16ba64d4f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c6e7bf2b253250b89e5b4b72439553bf)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_00e64ac0f2bd589c8a2c904675b30d03)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_84edc18c026d58049077e73cb70150bb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_07c7eccbe55356189496e1bd206f4c28)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_44222139559e5d1a8dd5c4158844df77)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > > class_30ec221c05c05d279fda123cfc053a91("_DenseCoeffsBase_30ec221c05c05d279fda123cfc053a91", "", boost::python::no_init);
    class_30ec221c05c05d279fda123cfc053a91.def("row_index_by_outer_inner", method_pointer_6e722e6cef57576a8c01594ad0f83f56, "");
    class_30ec221c05c05d279fda123cfc053a91.def("col_index_by_outer_inner", method_pointer_1b73ae03c4215cb7babc53f45f745b09, "");
    class_30ec221c05c05d279fda123cfc053a91.def("coeff", method_pointer_37a4e688eb3d592dbfc5faaa080a59c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("coeff_by_outer_inner", method_pointer_4f662e478aa35251bf80f672e4fd56f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("__call__", method_pointer_75209ea955cf53e5b7d92da4223e8fc4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("coeff", method_pointer_8f037ceed78a56b490c14485c9c00409, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("__getitem__", method_pointer_6be080040a34528d9d53bed16ba64d4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("__call__", method_pointer_c6e7bf2b253250b89e5b4b72439553bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("x", method_pointer_00e64ac0f2bd589c8a2c904675b30d03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("y", method_pointer_84edc18c026d58049077e73cb70150bb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("z", method_pointer_07c7eccbe55356189496e1bd206f4c28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30ec221c05c05d279fda123cfc053a91.def("w", method_pointer_44222139559e5d1a8dd5c4158844df77, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >();
    }

}