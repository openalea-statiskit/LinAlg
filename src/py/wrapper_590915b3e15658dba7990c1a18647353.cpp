#include "_ieigen.h"


namespace autowig
{
}


void wrapper_590915b3e15658dba7990c1a18647353()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_35d3685defd154109f8ed347acddec1a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_8e80ebb77ed15656aea7e4856175b44d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_83d3360d8cad5543a681377fddcffdfa)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_265f8696428c510cb2f133432fcc45a6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b6fa7004e817554eae12f09cfefa138b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > > > class_590915b3e15658dba7990c1a18647353("_DenseCoeffsBase_590915b3e15658dba7990c1a18647353", "", boost::python::no_init);
    class_590915b3e15658dba7990c1a18647353.def("inner_stride", method_pointer_35d3685defd154109f8ed347acddec1a, "");
    class_590915b3e15658dba7990c1a18647353.def("outer_stride", method_pointer_8e80ebb77ed15656aea7e4856175b44d, "");
    class_590915b3e15658dba7990c1a18647353.def("stride", method_pointer_83d3360d8cad5543a681377fddcffdfa, "");
    class_590915b3e15658dba7990c1a18647353.def("row_stride", method_pointer_265f8696428c510cb2f133432fcc45a6, "");
    class_590915b3e15658dba7990c1a18647353.def("col_stride", method_pointer_b6fa7004e817554eae12f09cfefa138b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > > >();
    }

}