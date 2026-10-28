// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$CreateClientProxyForContextBound
// address: 0x7489864
// body: available
// range: 0x7489864-0x74899d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74899cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74899d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_RemotingServices__CreateClientProxyForContextBound
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0952129d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09172878);
    FUN_03f5c2a4(&DAT_091897d8);
    FUN_03f5c2a4(&DAT_09189ed0);
    DAT_0952129d = 1;
  }
  if (param_1 != 0) {
    uVar1 = System_Type__get_IsContextful(param_1,0);
    uVar2 = DAT_09172878;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      plVar3 = (long *)System_Attribute__GetCustomAttribute(param_1,uVar2,1,0);
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        if ((*(byte *)(DAT_091897d8 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_091897d8 + 0x130) * 8 + -8) ==
            DAT_091897d8)) {
                    /* WARNING: Could not recover jumptable at 0x07489960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x1c8))(plVar3,param_1,*(undefined8 *)(lVar4 + 0x1d0));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
    }
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = *(undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 0x18);
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09189ed0);
    System_Runtime_Remoting_Proxies_RemotingProxy___ctor(plVar3,param_1,uVar2,param_2);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074899c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

