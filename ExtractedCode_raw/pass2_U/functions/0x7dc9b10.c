// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.ContinuationQueue$$RunCore
// address: 0x7dc9b10
// body: available
// range: 0x7dc9b10-0x7dc9b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dc9a4c) */
/* WARNING: Removing unreachable block (ram,0x07dc9a50) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_Internal_ContinuationQueue__RunCore(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char acStack_58 [4];
  char acStack_54 [4];
  
  if ((DAT_09526199 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_09526199 = 1;
  }
  acStack_54[0] = '\0';
  acStack_58[0] = '\0';
  if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_SpinLock__Enter(param_1 + 0x14,acStack_54,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (acStack_54[0] != '\0') {
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Exit(param_1 + 0x14,0,0);
  }
  if ((uVar3 | 4) == 4) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar5 = 0;
      lVar6 = 0x20;
      do {
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar1 + lVar6);
        *(undefined8 *)(lVar1 + lVar6) = 0;
        thunk_FUN_03f5d7b8(lVar1 + lVar6,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1c));
    }
    acStack_58[0] = '\0';
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Enter(param_1 + 0x14,acStack_58,0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
    if (acStack_58[0] != '\0') {
      if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinLock__Exit(param_1 + 0x14,0,0);
    }
  }
  return;
}

