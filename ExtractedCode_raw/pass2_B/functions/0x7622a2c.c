// rea decompile_all
// name: System.Threading.ExecutionContext$$SetExecutionContext
// address: 0x7622a2c
// body: available
// range: 0x7622a2c-0x7622b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7622b7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ExecutionContext__SetExecutionContext
               (undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09522146 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    DAT_09522146 = 1;
  }
  local_58 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
  lVar2 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar2 != 0) {
    uVar3 = System_Threading_Thread__GetExecutionContextReader(lVar2,0);
    local_58 = uVar3;
    local_38 = lVar2;
    thunk_FUN_03f5d7b8(&local_38,lVar2);
    local_50 = uVar3;
    thunk_FUN_03f5d7b8(&local_50,0);
    uVar1 = System_Threading_Thread__get_ExecutionContextBelongsToCurrentScope(lVar2,0);
    uStack_48 = CONCAT71(uStack_48._1_7_,uVar1) & 0xffffffffffffff01;
    if ((param_3 & 1) == 0) {
      uVar3 = System_Threading_ExecutionContext_Reader__get_SynchronizationContextNoFlow
                        (&local_58,0);
      if (param_2 == 0) goto LAB_07622b7c;
    }
    else {
      uVar3 = System_Threading_ExecutionContext_Reader__get_SynchronizationContext();
      if (param_2 == 0) goto LAB_07622b7c;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Threading_ExecutionContext_Reader__get_SynchronizationContextNoFlow
                        (&local_58,0);
    }
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8();
    System_Threading_Thread__SetExecutionContext(lVar2,param_2,1,0);
    System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
    uVar3 = local_58;
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_ExecutionContext__OnAsyncLocalContextChanged(uVar3,param_2);
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = local_38;
    param_1[2] = uStack_40;
    return;
  }
LAB_07622b7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

