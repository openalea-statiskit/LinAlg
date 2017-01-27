#include "_ieigen.h"


namespace autowig
{
}


void wrapper_74bb4a744f1b5436a81959535d921888()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_aa41e7706ab055fa8a33a4f2101bcd12)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_326b231bde865e3d9d8dd1b2c1b7ac7a)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_386cce2445a1536cbe9d6a60c24710a4)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rcond;
    struct ::std::complex< float >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ffe139a485a3543c8ba5d05fb1c4fc58)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_72f11d2c581053c688e66ee329ade2f6)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9ac82d36a65d57aca13520aee7a8c6fc)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f119607757465d609ef054a4d860a067)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > > class_74bb4a744f1b5436a81959535d921888("_PartialPivLU_74bb4a744f1b5436a81959535d921888", "", boost::python::no_init);
    class_74bb4a744f1b5436a81959535d921888.def(boost::python::init<  >(""));
    class_74bb4a744f1b5436a81959535d921888.def(boost::python::init< long int  >(""));
    class_74bb4a744f1b5436a81959535d921888.def("matrix_lu", method_pointer_aa41e7706ab055fa8a33a4f2101bcd12, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_74bb4a744f1b5436a81959535d921888.def("permutation_p", method_pointer_326b231bde865e3d9d8dd1b2c1b7ac7a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_74bb4a744f1b5436a81959535d921888.def("rcond", method_pointer_386cce2445a1536cbe9d6a60c24710a4, "");
    class_74bb4a744f1b5436a81959535d921888.def("determinant", method_pointer_ffe139a485a3543c8ba5d05fb1c4fc58, "");
    class_74bb4a744f1b5436a81959535d921888.def("reconstructed_matrix", method_pointer_72f11d2c581053c688e66ee329ade2f6, "");
    class_74bb4a744f1b5436a81959535d921888.def("rows", method_pointer_9ac82d36a65d57aca13520aee7a8c6fc, "");
    class_74bb4a744f1b5436a81959535d921888.def("cols", method_pointer_f119607757465d609ef054a4d860a067, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > >();
    }

}