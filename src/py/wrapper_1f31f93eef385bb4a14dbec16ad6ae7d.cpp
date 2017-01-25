#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1f31f93eef385bb4a14dbec16ad6ae7d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_b12b5616e9fb53ddba711881b65a4668)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_6556d8d4d6e35966a1fc1ae1228e74d1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_5e21295d95e35ca4953e277419244e6d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_40af19008adc5307bbc18a5e0f2f2054)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_9d49ea0344d957f8a5a583211b359675)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > > > class_1f31f93eef385bb4a14dbec16ad6ae7d("_DenseCoeffsBase_1f31f93eef385bb4a14dbec16ad6ae7d", "", boost::python::no_init);
    class_1f31f93eef385bb4a14dbec16ad6ae7d.def("inner_stride", method_pointer_b12b5616e9fb53ddba711881b65a4668, "");
    class_1f31f93eef385bb4a14dbec16ad6ae7d.def("outer_stride", method_pointer_6556d8d4d6e35966a1fc1ae1228e74d1, "");
    class_1f31f93eef385bb4a14dbec16ad6ae7d.def("stride", method_pointer_5e21295d95e35ca4953e277419244e6d, "");
    class_1f31f93eef385bb4a14dbec16ad6ae7d.def("row_stride", method_pointer_40af19008adc5307bbc18a5e0f2f2054, "");
    class_1f31f93eef385bb4a14dbec16ad6ae7d.def("col_stride", method_pointer_9d49ea0344d957f8a5a583211b359675, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > > >();
    }

}