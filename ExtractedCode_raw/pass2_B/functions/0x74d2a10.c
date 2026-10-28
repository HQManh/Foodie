// rea decompile_all
// name: System.Runtime.CompilerServices.AsyncMethodBuilderCore.MoveNextRunner$$Run
// address: 0x74d2a10
// body: available
// range: 0x74d2a10-0x74d2bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d2bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d2bd0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d2b48) */
/* WARNING: Removing unreachable block (ram,0x074d2bcc) */

void System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner__Run(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09521541 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b10);
    FUN_03f5c2a4(&DAT_09184350);
    FUN_03f5c2a4(&DAT_09185618);
    FUN_03f5c2a4(&DAT_091e5b20);
    FUN_03f5c2a4(&DAT_0918e5b0);
    DAT_09521541 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == DAT_09185618) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_074d2ba8;
          }
          uVar2 = uVar2 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185618,0);
LAB_074d2ba8:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      return;
    }
  }
  else {
    lVar6 = **(long **)(DAT_0918e5b0 + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_09182b10);
      System_Threading_ContextCallback___ctor(lVar6,0,DAT_091e5b20,0);
      **(long **)(DAT_0918e5b0 + 0xb8) = lVar6;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918e5b0 + 0xb8),lVar6);
      lVar7 = *(long *)(param_1 + 0x10);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_ExecutionContext__Run(lVar7,lVar6,uVar4,1,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Threading_ExecutionContext__Dispose(*(long *)(param_1 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

