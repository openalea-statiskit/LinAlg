#include "_ieigen.h"


namespace autowig
{
}


void wrapper_35e56cf550ae5549b5210b05dd89926a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_693b734f58925304af1dde7c626e434e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_648f74a628775516ace9b62192618e7c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_2b673f19dbe75621b835fc1f615635d4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_1488fac8de835f1f84c70deb9eada9ac)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_6abece5ba9ce5efcb7af580de22bb4cf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > > > class_35e56cf550ae5549b5210b05dd89926a("_DenseCoeffsBase_35e56cf550ae5549b5210b05dd89926a", "", boost::python::no_init);
    class_35e56cf550ae5549b5210b05dd89926a.def("inner_stride", method_pointer_693b734f58925304af1dde7c626e434e, "");
    class_35e56cf550ae5549b5210b05dd89926a.def("outer_stride", method_pointer_648f74a628775516ace9b62192618e7c, "");
    class_35e56cf550ae5549b5210b05dd89926a.def("stride", method_pointer_2b673f19dbe75621b835fc1f615635d4, "");
    class_35e56cf550ae5549b5210b05dd89926a.def("row_stride", method_pointer_1488fac8de835f1f84c70deb9eada9ac, "");
    class_35e56cf550ae5549b5210b05dd89926a.def("col_stride", method_pointer_6abece5ba9ce5efcb7af580de22bb4cf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > > >();
    }

}