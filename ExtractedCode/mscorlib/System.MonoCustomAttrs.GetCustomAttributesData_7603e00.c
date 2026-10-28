// rea decompile_all
// name: System.MonoCustomAttrs$$GetCustomAttributesData
// address: 0x7603e00
// body: available
// range: 0x7603e00-0x7603f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7603ea8 to 0x76040e8 System.MonoCustomAttrs$$GetCustomAttributesData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7603ed8 to 0x7603f24 System.MonoCustomAttrs$$GetCustomAttributesDataBase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7603f20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_MonoCustomAttrs__GetCustomAttributesData(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_09521feb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172498);
    FUN_03f5c2a4(&DAT_09188378);
    DAT_09521feb = 1;
  }
  uVar1 = DAT_09172498;
  if (param_1 != 0) {
    if ((param_2 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
      if (*(int *)(DAT_09188378 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188378);
      }
      System_MonoCustomAttrs__GetCustomAttributesData(param_1,uVar1,1);
      return;
    }
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_MonoCustomAttrs__GetCustomAttributesDataBase(param_1,0,0);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar1 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_092201e0);
  System_ArgumentNullException___ctor(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d3c38);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

