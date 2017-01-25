#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0c00f1aea1d25ea99ac5971ad08ba38f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c0029236cf4459a6a215d254ca0de799)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_a4ca6bf5a32053069f90cdcffa4a9d3e)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_f21d05b285e856a69714f3083c4470ca)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_3960f8226ae85408a506b9b084b6e62b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_36688d21f26056d9a62fcc717cf06098)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_b2645ba7498059e2881ebf641b4216a9)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_a8463c4d16af528f8bd6b0d09a0e988a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_71a3895925dc5675b5c43a65cb76e053)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_a66a53b8d2a2568ab7371cfe4a3b10cc)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c60a30bdbbcc57ddaffca1ac42384128)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_9ffe8bcc8c20519f85cbe2d63947e092)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_417c285504ad54d58da78ad89723bedf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > > class_0c00f1aea1d25ea99ac5971ad08ba38f("_DenseCoeffsBase_0c00f1aea1d25ea99ac5971ad08ba38f", "", boost::python::no_init);
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("row_index_by_outer_inner", method_pointer_c0029236cf4459a6a215d254ca0de799, "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("col_index_by_outer_inner", method_pointer_a4ca6bf5a32053069f90cdcffa4a9d3e, "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("coeff", method_pointer_f21d05b285e856a69714f3083c4470ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("coeff_by_outer_inner", method_pointer_3960f8226ae85408a506b9b084b6e62b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("__call__", method_pointer_36688d21f26056d9a62fcc717cf06098, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("coeff", method_pointer_b2645ba7498059e2881ebf641b4216a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("__getitem__", method_pointer_a8463c4d16af528f8bd6b0d09a0e988a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("__call__", method_pointer_71a3895925dc5675b5c43a65cb76e053, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("x", method_pointer_a66a53b8d2a2568ab7371cfe4a3b10cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("y", method_pointer_c60a30bdbbcc57ddaffca1ac42384128, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("z", method_pointer_9ffe8bcc8c20519f85cbe2d63947e092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0c00f1aea1d25ea99ac5971ad08ba38f.def("w", method_pointer_417c285504ad54d58da78ad89723bedf, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >();
    }

}