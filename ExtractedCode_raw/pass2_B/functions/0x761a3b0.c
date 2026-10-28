// rea decompile_all
// name: System.Threading.CancellationToken$$Register
// address: 0x761a3b0
// body: available
// range: 0x761a3b0-0x761a4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761a4dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_CancellationToken__Register
               (undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5,
               ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095220de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    DAT_095220de = 1;
  }
  if (param_3 != 0) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      if ((param_5 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = System_Threading_SynchronizationContext__get_Current(0);
      }
      if ((param_6 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (*(int *)(DAT_09184350 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Threading_ExecutionContext__Capture();
      }
      System_Threading_CancellationTokenSource__InternalRegister
                (&local_58,lVar3,param_3,param_4,uVar1,uVar2);
      param_1[1] = uStack_50;
      *param_1 = local_58;
      param_1[2] = local_48;
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar1 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_092187d0);
  System_ArgumentNullException___ctor(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c4870);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

