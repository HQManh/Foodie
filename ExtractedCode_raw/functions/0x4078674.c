// rea decompile_all
// name: FUN_04078674
// address: 0x4078674
// body: available
// range: 0x4078674-0x40787b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40787b4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04078780) */
/* WARNING: Removing unreachable block (ram,0x040787b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_04078674(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  char local_3c [4];
  long local_38;
  
  local_38 = param_1;
  if (DAT_09515c28 == '\0') {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_09515c28 = '\x01';
  }
  local_3c[0] = '\0';
  if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_SpinLock__Enter(param_1 + 0x10,local_3c,0);
  if (param_2 != 0) {
    uVar3 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(param_2,0);
    *(undefined8 *)(local_38 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  plVar4 = (long *)(local_38 + 0x30);
  lVar5 = *plVar4;
  uVar1 = *(undefined4 *)(local_38 + 0x2c);
  *(undefined1 *)(local_38 + 0x28) = 1;
  *plVar4 = 0;
  thunk_FUN_03f5d7b8(plVar4,0);
  lVar2 = local_38;
  if (local_3c[0] != '\0') {
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Exit(lVar2 + 0x10,0);
  }
  if (lVar5 != 0) {
    UnityEngine_Awaitable__RunOrScheduleContinuation(local_38,uVar1,lVar5,0);
  }
  return;
}

