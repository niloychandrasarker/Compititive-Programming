import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

class User {
    private String name;
    private String email;
    private String address;
    private String accountType;
    private double balance;
    private String accountNumber;
    private List<String> transactionHistory;
    private static int loanCount = 0; // Static variable for total loan count
    private static boolean loanEnabled = true;

    public User(String name, String email, String address, String accountType) {
        this.name = name;
        this.email = email;
        this.address = address;
        this.accountType = accountType;
        this.balance = 0;
        this.accountNumber = generateAccountNumber();
        this.transactionHistory = new ArrayList<>();
    }

    private String generateAccountNumber() {
        Random rand = new Random();
        return String.format("%04d", rand.nextInt(10000));
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
        transactionHistory.add("Deposited: $" + amount);
    }

    public boolean withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactionHistory.add("Withdrawn: $" + amount);
            return true;
        } else {
            System.out.println("Error: Withdrawal amount exceeded!");
            return false;
        }
    }

    public void checkBalance() {
        System.out.println("Available Balance: $" + balance);
    }

    public void checkTransactionHistory() {
        System.out.println("Transaction History:");
        for (String transaction : transactionHistory) {
            System.out.println(transaction);
        }
    }

    public boolean takeLoan() {
        if (loanEnabled && loanCount < 2) {
            balance += 1000; // Assuming a fixed loan amount of $1000
            loanCount++;
            transactionHistory.add("Loan Taken: $1000");
            System.out.println("Loan successfully taken.");
            return true;
        } else {
            System.out.println("Error: Unable to take a loan.");
            return false;
        }
    }

    public boolean transferAmount(User receiver, double amount) {
        if (amount <= balance) {
            balance -= amount;
            receiver.deposit(amount);
            transactionHistory.add("Transferred: $" + amount + " to Account " + receiver.getAccountNumber());
            System.out.println("Amount successfully transferred.");
            return true;
        } else {
            System.out.println("Error: Insufficient funds for transfer.");
            return false;
        }
    }

    public static boolean isLoanEnabled() {
        return loanEnabled;
    }

    public static void setLoanEnabled(boolean enabled) {
        loanEnabled = enabled;
    }

    public static int getLoanCount() {
        return loanCount;
    }

    public static boolean canTakeLoan() {
        return loanCount < 2;
    }
}

class Admin {
    private List<User> userList;

    public Admin() {
        this.userList = new ArrayList<>();
    }

    public void createUser(String name, String email, String address, String accountType) {
        User newUser = new User(name, email, address, accountType);
        userList.add(newUser);
        System.out.println("User account created. Account Number: " + newUser.getAccountNumber());
    }

    public void deleteUser(String accountNumber) {
        for (User user : userList) {
            if (user.getAccountNumber().equals(accountNumber)) {
                userList.remove(user);
                System.out.println("User account deleted.");
                return;
            }
        }
        System.out.println("Error: User account not found.");
    }

    public void viewAllUserAccounts() {
        System.out.println("List of User Accounts:");
        for (User user : userList) {
            System.out.println("Account Number: " + user.getAccountNumber() + ", Name: " + user.getName());
        }
    }

    public void checkTotalAvailableBalance() {
        double totalBalance = 0;
        for (User user : userList) {
            totalBalance += user.getBalance();
        }
        System.out.println("Total Available Balance: $" + totalBalance);
    }

    public void checkTotalLoanAmount() {
        int totalLoanCount = 0;
        for (User user : userList) {
            totalLoanCount += User.getLoanCount();
        }
        System.out.println("Total Loan Amount: $" + (totalLoanCount * 1000)); // Assuming a fixed loan amount of $1000
    }

    public void toggleLoanFeature(boolean isEnabled) {
        User.setLoanEnabled(isEnabled);
        System.out.println("Loan feature is now " + (isEnabled ? "enabled." : "disabled."));
    }
}

public class BankingSystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Admin admin = new Admin();

        while (true) {
            System.out.println("\n1. User\n2. Admin\n3. Exit");
            System.out.print("Select Role: ");
            int choice = scanner.nextInt();

            if (choice == 1) { // User
                System.out.println("\n1. Create Account\n2. Login\n3. Exit");
                System.out.print("Select Option: ");
                int userOption = scanner.nextInt();

                if (userOption == 1) {
                    System.out.print("Enter Name: ");
                    String name = scanner.next();
                    System.out.print("Enter Email: ");
                    String email = scanner.next();
                    System.out.print("Enter Address: ");
                    String address = scanner.next();
                    System.out.print("Enter Account Type (Savings/Current): ");
                    String accountType = scanner.next().toLowerCase();

                    User newUser = new User(name, email, address, accountType);
                    System.out.println("Account Created Successfully. Your Account Number is: " + newUser.getAccountNumber());
                } else if (userOption == 2) {
                    System.out.print("Enter Account Number: ");
                    String accountNumber = scanner.next();
                    User currentUser = findUserByAccountNumber(accountNumber);
                    if (currentUser != null) {
                        // Implement user operations here
                        // Example: Deposit, Withdraw, Check Balance, Loan, Transfer, etc.
                    } else {
                        System.out.println("Error: User account not found.");
                    }
                } else if (userOption == 3) {
                    break;
                } else {
                    System.out.println("Invalid Option. Please try again.");
                }
            } else if (choice == 2) { // Admin
                System.out.print("Enter Admin Password: "); // Simple password verification for demo
                String adminPassword = scanner.next();
                if (adminPassword.equals("admin123")) {
                    System.out.println("\n1. Create User\n2. Delete User\n3. View All User Accounts\n4. Check Total Available Balance\n5. Check Total Loan Amount\n6. Toggle Loan Feature\n7. Exit");
                    System.out.print("Select Option: ");
                    int adminOption = scanner.nextInt();

                    if (adminOption == 1) {
                        System.out.print("Enter User Name: ");
                        String name = scanner.next();
                        System.out.print("Enter User Email: ");
                        String email = scanner.next();
                        System.out.print("Enter User Address: ");
                        String address = scanner.next();
                        System.out.print("Enter User Account Type (Savings/Current): ");
                        String accountType = scanner.next().toLowerCase();

                        admin.createUser(name, email, address, accountType);
                    } else if (adminOption == 2) {
                        System.out.print("Enter User Account Number to Delete: ");
                        String accountNumber = scanner.next();
                        admin.deleteUser(accountNumber);
                    } else if (adminOption == 3) {
                        admin.viewAllUserAccounts();
                    } else if (adminOption == 4) {
                        admin.checkTotalAvailableBalance();
                    } else if (adminOption == 5) {
                        admin.checkTotalLoanAmount();
                    } else if (adminOption == 6) {
                        System.out.print("Do you want to enable (1) or disable (0) the loan feature? ");
                        boolean isEnabled = scanner.nextInt() == 1;
                        admin.toggleLoanFeature(isEnabled);
                    } else if (adminOption == 7) {
                        break;
                    } else {
                        System.out.println("Invalid Option. Please try again.");
                    }
                } else {
                    System.out.println("Incorrect Admin Password.");
                }
            } else if (choice == 3) {
                break;
            } else {
                System.out.println("Invalid Option. Please try again.");
            }
        }

        scanner.close();
    }

    private static User findUserByAccountNumber(String accountNumber) {
        for (User user : admin.userList) {
            if (user.getAccountNumber().equals(accountNumber)) {
                return user;
            }
        }
        return null;
    }
}
