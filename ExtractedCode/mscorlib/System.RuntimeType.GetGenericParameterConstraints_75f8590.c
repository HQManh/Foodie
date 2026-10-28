// rea decompile_all
// name: System.RuntimeType$$GetGenericParameterConstraints
// address: 0x75f8590
// body: available
// range: 0x75f8590-0x75f8683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f8680 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__GetGenericParameterConstraints(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
  if ((DAT_09521f63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177320);
    DAT_09521f63 = 1;
  }
  local_18 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar1 & 1) != 0) {
    uVar2 = thunk_FUN_03f6f8bc(param_1,0);
    Mono_RuntimeGenericParamInfoHandle___ctor(&local_18,uVar2,0);
    lVar3 = Mono_RuntimeGenericParamInfoHandle__GetConstraints(&local_18,0);
    if (lVar3 == 0) {
      if (*(int *)(DAT_09177320 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = **(long **)(DAT_09177320 + 0xb8);
    }
    return lVar3;
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_09207cf8);
  uVar2 = System_Environment__GetResourceString(uVar2,0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar4 = thunk_FUN_03f9944c();
  System_InvalidOperationException___ctor(uVar4,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d8280);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar2);
}

