# list-wam-accounts
Proof of concept BOF to interact with the WinRT WebAuthenticationCoreManager via COM and enumerate Azure AD/Entra ID accounts added to the current user's profile.

Similar proof of concepts using C++/WinRT and .NET can be found in the `examples/` folder.

## BOF Usage
The BOF does not take any args.
```
beacon> inline-execute /opt/list-wam-accounts/dist/listwamaccounts.x64.o

[+] Received Output [343 bytes]:
[*] Listing WAM accounts for the current user profile
[*] Got Web Account Provider interface!
 |-> Provider Id: https://login.microsoft.com
 |-> Provider Display Name: Work or school account

[*] FindAllAccountsWithClientIdAsync returned 2 accounts!
 |-> admin-mattc@my-tenant.onmicrosoft.com
 |-> MattC@my-tenant.onmicrosoft.com

[*] Done!
```

## Compile the BOF
For beacon object files
```
make bof
```

For executables
```
make test
```

### References
- [https://github.com/trustedsec/CS-Situational-Awareness-BOF](https://github.com/trustedsec/CS-Situational-Awareness-BOF)
- [https://github.com/MicrosoftDocs/windows-dev-docs/blob/docs/uwp/security/web-account-manager.md](https://github.com/MicrosoftDocs/windows-dev-docs/blob/docs/uwp/security/web-account-manager.md#build-the-account-settings-pane)
- [https://blog.xojo.com/2019/07/02/accessing-windows-runtime-winrt/](https://blog.xojo.com/2019/07/02/accessing-windows-runtime-winrt/)