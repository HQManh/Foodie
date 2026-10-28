// rea decompile_all
// name: FUN_03fbd600
// address: 0x3fbd600
// body: available
// range: 0x3fbd600-0x3fbd78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbd69c to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fbd6d4 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fbd714 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fbd74c to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbd600(long *param_1,undefined8 param_2,ulong param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  
  if ((*(ushort *)((long)param_1 + 0x4c) >> 10 & 1) != 0) {
    FUN_03f92510(local_50,"Attempting to call abstract method \'%s\'",param_2);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = FUN_03fa6f18(pvVar1);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar3,0);
  }
  if (*param_1 == 0) {
    FUN_03f6321c(local_50,&DAT_01a45042);
    if ((((param_3 & 1) != 0) && ((*(ushort *)((long)param_1 + 0x4c) >> 6 & 1) != 0)) &&
       ((*(byte *)((long)param_1 + 0x53) >> 1 & 1) != 0)) {
      uVar2 = FUN_03f77a6c();
      FUN_03f92510(local_68,
                   "  Consider increasing the --generic-virtual-method-iterations=%d argument",uVar2
                  );
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      local_50[0] = local_68[0];
      local_40 = local_58;
    }
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    FUN_03f92510(local_68,
                 "Attempting to call method \'%s\' for which no ahead of time (AOT) code was generated.%s"
                 ,param_2,pvVar1);
    pvVar1 = (void *)((ulong)local_68 | 1);
    if ((local_68[0] & 1) != 0) {
      pvVar1 = local_58;
    }
    uVar3 = FUN_03fa70f0(pvVar1);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar3,0);
  }
  if ((*(byte *)((long)param_1 + 0x53) >> 4 & 1) == 0) {
    FUN_03f92510(local_50,"Invalid call to method \'%s\'",param_2);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = FUN_03fa70f0(pvVar1);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar3,0);
  }
  FUN_03f92510(local_50,
               "Cannot call a method marked with [UnmangedCallersOnly] from managed code: \'%s\'",
               param_2);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar3 = FUN_03fa70f0(pvVar1);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar3,0);
}

