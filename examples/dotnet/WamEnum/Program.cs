using System;
using System.Linq;
using System.Threading.Tasks;
using Windows.Security.Authentication.Web.Core;
using Windows.Security.Credentials;

class Program
{
    static async Task Main()
    {
        await ListWamAccountsAsync();
    }

    static async Task ListWamAccountsAsync()
    {
        try
        {
            // Get the WebAccountProvider for Microsoft Entra ID (Azure AD)
            WebAccountProvider provider = await WebAuthenticationCoreManager.FindAccountProviderAsync("https://login.microsoft.com", "organizations");
            Console.WriteLine("Found provider:");
            Console.WriteLine("Provider ID: " + provider.Id.ToString());
            Console.WriteLine("Provider Display Name: " + provider.DisplayName);
            if (provider == null)
            {
                Console.WriteLine("No Web Account Provider found.");
                return;
            }

            // Retrieve all WAM accounts associated with the provider
            FindAllAccountsResult result = await WebAuthenticationCoreManager.FindAllAccountsAsync(provider, "00000000-0000-0000-0000-000000000000");

            if (result == null || result.Status != FindAllWebAccountsStatus.Success)
            {
                Console.WriteLine($"Failed to retrieve WAM accounts. Status: {result?.Status}");
                return;
            }

            var accounts = result.Accounts;

            if (!accounts.Any())  // Check if the list is empty
            {
                Console.WriteLine("No WAM accounts found.");
            }
            else
            {
                Console.WriteLine($"Found {accounts.Count()} WAM Account(s):");
                foreach (WebAccount account in accounts)
                {
                    Console.WriteLine($" - {account.UserName}");
                }
            }
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Error: {ex.Message}");
        }
    }
}
