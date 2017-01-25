#include "_ieigen.h"


namespace autowig
{
}


void wrapper_4b33dce4e8875e47ac8c75a6df2bfefc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_23d1de57644553d9a02ace2aeaa49e35)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_870c1ed48f5a5cf38e17ce94ad9a37d2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_7e92990a4d895d5198d1b2eb5c97ca15)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_ec1c065c18f551efb946c9ecc9bcae4b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_397d676dd1275b6fb2b6d4dfc9802599)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > > > class_4b33dce4e8875e47ac8c75a6df2bfefc("_DenseCoeffsBase_4b33dce4e8875e47ac8c75a6df2bfefc", "", boost::python::no_init);
    class_4b33dce4e8875e47ac8c75a6df2bfefc.def("inner_stride", method_pointer_23d1de57644553d9a02ace2aeaa49e35, "");
    class_4b33dce4e8875e47ac8c75a6df2bfefc.def("outer_stride", method_pointer_870c1ed48f5a5cf38e17ce94ad9a37d2, "");
    class_4b33dce4e8875e47ac8c75a6df2bfefc.def("stride", method_pointer_7e92990a4d895d5198d1b2eb5c97ca15, "");
    class_4b33dce4e8875e47ac8c75a6df2bfefc.def("row_stride", method_pointer_ec1c065c18f551efb946c9ecc9bcae4b, "");
    class_4b33dce4e8875e47ac8c75a6df2bfefc.def("col_stride", method_pointer_397d676dd1275b6fb2b6d4dfc9802599, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > > >();
    }

}