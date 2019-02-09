#include "_linalg.h"

::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_ac202bbbc598528484bb584e8d1f7dd0)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::innerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_d821348bbe2a5ff1abe7ff8e91020222)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::outerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_179333e9c7c35e49a7a4b214a93283b0)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::stride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_866e5bcf42ab5c8e817fd5cbd83f14d5)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::rowStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_e166fc990b045a0fa4425ab35785a1c5)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::colStride;

namespace autowig {
}

void wrapper_fa561dcf99ae51d9a4938dd504893c40(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > > class_fa561dcf99ae51d9a4938dd504893c40(module, "_DenseCoeffsBase_fa561dcf99ae51d9a4938dd504893c40", "");
    class_fa561dcf99ae51d9a4938dd504893c40.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > const & >());
    class_fa561dcf99ae51d9a4938dd504893c40.def(pybind11::init<  >());
    class_fa561dcf99ae51d9a4938dd504893c40.def("inner_stride", method_pointer_ac202bbbc598528484bb584e8d1f7dd0, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("outer_stride", method_pointer_d821348bbe2a5ff1abe7ff8e91020222, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("stride", method_pointer_179333e9c7c35e49a7a4b214a93283b0, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("row_stride", method_pointer_866e5bcf42ab5c8e817fd5cbd83f14d5, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("col_stride", method_pointer_e166fc990b045a0fa4425ab35785a1c5, "");

}