#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5a70e3e4311254fbbdb3a3af8dc7899d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_88875a3dc85c5953ab92c911ec732b01)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_ad687a826ad5554fadf02d103975cbf5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_7c8cd19daef05441acbfdbd1803b9fc4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_66b345091a8f5c64bf75768740c8f6c0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_a8624826fd48525291cfb72a192f8e2b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > > > class_5a70e3e4311254fbbdb3a3af8dc7899d("_DenseCoeffsBase_5a70e3e4311254fbbdb3a3af8dc7899d", "", boost::python::no_init);
    class_5a70e3e4311254fbbdb3a3af8dc7899d.def("inner_stride", method_pointer_88875a3dc85c5953ab92c911ec732b01, "");
    class_5a70e3e4311254fbbdb3a3af8dc7899d.def("outer_stride", method_pointer_ad687a826ad5554fadf02d103975cbf5, "");
    class_5a70e3e4311254fbbdb3a3af8dc7899d.def("stride", method_pointer_7c8cd19daef05441acbfdbd1803b9fc4, "");
    class_5a70e3e4311254fbbdb3a3af8dc7899d.def("row_stride", method_pointer_66b345091a8f5c64bf75768740c8f6c0, "");
    class_5a70e3e4311254fbbdb3a3af8dc7899d.def("col_stride", method_pointer_a8624826fd48525291cfb72a192f8e2b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > > >();
    }

}