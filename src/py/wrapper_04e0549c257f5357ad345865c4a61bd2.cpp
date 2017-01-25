#include "_ieigen.h"


namespace autowig
{
}


void wrapper_04e0549c257f5357ad345865c4a61bd2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_5419cb6b210a594fb8aa7de50a20b57f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_1435d5571e51594cbfbb3479be8306fa)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_b7b784bb0da1530eb73be97678b3004a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_6c9b845b4a9a5334bc40f7f96fe62c37)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_b3277695185553ceae987905214412ee)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > > > class_04e0549c257f5357ad345865c4a61bd2("_DenseCoeffsBase_04e0549c257f5357ad345865c4a61bd2", "", boost::python::no_init);
    class_04e0549c257f5357ad345865c4a61bd2.def("inner_stride", method_pointer_5419cb6b210a594fb8aa7de50a20b57f, "");
    class_04e0549c257f5357ad345865c4a61bd2.def("outer_stride", method_pointer_1435d5571e51594cbfbb3479be8306fa, "");
    class_04e0549c257f5357ad345865c4a61bd2.def("stride", method_pointer_b7b784bb0da1530eb73be97678b3004a, "");
    class_04e0549c257f5357ad345865c4a61bd2.def("row_stride", method_pointer_6c9b845b4a9a5334bc40f7f96fe62c37, "");
    class_04e0549c257f5357ad345865c4a61bd2.def("col_stride", method_pointer_b3277695185553ceae987905214412ee, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > > >();
    }

}