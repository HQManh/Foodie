// rea decompile_all
// name: System.Threading.ExecutionContext$$RunInternal
// address: 0x76226f0
// body: available
// range: 0x76226f0-0x762288b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7622880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7622884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7622888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ExecutionContext__RunInternal
               (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_09522144 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    DAT_09522144 = 1;
  }
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(uint *)(param_1 + 0x30) >> 2 & 1) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffa;
  }
  lVar1 = System_Threading_Thread__get_CurrentThread(0);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
  puStack_68 = &local_60;
  local_70 = 0;
  if (lVar1 != 0) {
    local_38 = System_Threading_Thread__GetExecutionContextReader(lVar1,0);
    uVar2 = System_Threading_ExecutionContext_Reader__get_IsNull(&local_38,0);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = System_Threading_ExecutionContext_Reader__IsDefaultFTContext
                            (&local_38,param_4 & 1,0), (uVar2 & 1) == 0)) ||
        (uVar2 = System_Threading_ExecutionContext__IsDefaultFTContext(param_1,param_4 & 1),
        (uVar2 & 1) == 0)) ||
       (uVar2 = System_Threading_ExecutionContext_Reader__HasSameLocalValues(&local_38,param_1,0),
       (uVar2 & 1) == 0)) {
      if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
        param_1 = thunk_FUN_03f9944c(DAT_09184350);
        System_Object___ctor(param_1,0);
      }
      if (*(int *)(DAT_09184350 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_ExecutionContext__SetExecutionContext(&local_90,param_1,param_4 & 1);
      uStack_58 = uStack_88;
      local_60 = local_90;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
    }
    else {
      if (*(int *)(DAT_09184350 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_ExecutionContext__EstablishCopyOnWriteScope(lVar1,0,&local_60);
    }
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
      System_Threading_ExecutionContextSwitcher__Undo(&local_60);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

