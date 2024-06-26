#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("President Request Form", 25, 5), _target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src), _target(src._target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        // This will trigger base class assignment operator
        // This ensures that all base class properties are correctly copied from rhs to this
        // This maintain the integrity of the object's state.
    }
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > getGradeToExecute()) {
        throw GradeTooLowException();
    }
    else if (!isSigned()) {
        throw NotSignedException();
    } else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}
