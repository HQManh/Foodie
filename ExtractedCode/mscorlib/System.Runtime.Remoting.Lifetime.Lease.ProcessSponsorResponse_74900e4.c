// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.Lease$$ProcessSponsorResponse
// address: 0x74900e4
// body: available
// range: 0x74900e4-0x74901eb inclusive
// range: 0x749023c-0x74902a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7490164 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74901e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7490280 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74902a0 to 0x748fe84 System.Runtime.Remoting.Lifetime.Lease$$CheckNextSponsor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74902a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Lifetime_Lease__ProcessSponsorResponse
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_095212ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185610);
    FUN_03f5c2a4(&DAT_09186688);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095212ee = 1;
  }
  uVar2 = DAT_09185610;
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_03f99350(param_2,DAT_09185610);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2,uVar2);
      }
    }
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0,lVar1);
    }
    uVar2 = System_Runtime_Remoting_Lifetime_Lease_RenewalDelegate__EndInvoke
                      (*(long *)(param_1 + 0x50),lVar1,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeSpan__op_Inequality(uVar2,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((uVar3 & 1) != 0) {
      System_Runtime_Remoting_Lifetime_Lease__Renew(param_1,uVar2);
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x20) = 2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
  uVar2 = DAT_09186688;
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_03f99350(lVar1,DAT_09186688);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar1,uVar2);
    }
  }
  System_Runtime_Remoting_Lifetime_Lease__Unregister(param_1,lVar5);
  System_Runtime_Remoting_Lifetime_Lease__CheckNextSponsor(param_1);
  return;
}

