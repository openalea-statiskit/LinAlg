#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0b6470ffd0ca5500b273bd340d21a16b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8d8fb2bb4de455fda92b887f88632586)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_24e0973d77cb5382aae4079d54a2a1eb)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_31a6895c8fb7540d8a544e3ebfe69039)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rcond;
    struct ::std::complex< float >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_24186eab2fb0500fbb1f42d219d44941)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c3d130393b525c5391701023a69c9193)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_af2bdaf962b45c21908027e5b89e02ec)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_641c96cefe735ab6b4103cc5094a72fa)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > > class_0b6470ffd0ca5500b273bd340d21a16b("_PartialPivLU_0b6470ffd0ca5500b273bd340d21a16b", "", boost::python::no_init);
    class_0b6470ffd0ca5500b273bd340d21a16b.def(boost::python::init<  >(""));
    class_0b6470ffd0ca5500b273bd340d21a16b.def(boost::python::init< long int  >(""));
    class_0b6470ffd0ca5500b273bd340d21a16b.def("matrix_lu", method_pointer_8d8fb2bb4de455fda92b887f88632586, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("permutation_p", method_pointer_24e0973d77cb5382aae4079d54a2a1eb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("rcond", method_pointer_31a6895c8fb7540d8a544e3ebfe69039, "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("determinant", method_pointer_24186eab2fb0500fbb1f42d219d44941, "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("reconstructed_matrix", method_pointer_c3d130393b525c5391701023a69c9193, "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("rows", method_pointer_af2bdaf962b45c21908027e5b89e02ec, "");
    class_0b6470ffd0ca5500b273bd340d21a16b.def("cols", method_pointer_641c96cefe735ab6b4103cc5094a72fa, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > >();
    }

}