// rea decompile_all
// name: UniRx.StableCompositeDisposable.NAry$$Dispose
// address: 0x409c004
// body: available
// range: 0x409c004-0x409c157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409c150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409c154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_StableCompositeDisposable_NAry__Dispose(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  long *local_28;
  
  if ((DAT_09515da2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2f18);
    FUN_03f5c2a4(&DAT_091a2f20);
    FUN_03f5c2a4(&DAT_091a2f28);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091ad1c8);
    DAT_09515da2 = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (long *)0x0;
  iVar2 = System_Threading_Interlocked__Increment(param_1 + 0x10,0);
  if (iVar2 == 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    thunk_FUN_03f6a5cc();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_38,lVar6,DAT_091ad1c8);
    while (uVar3 = FUN_071bd28c(&local_38,DAT_091a2f20), plVar1 = local_28, (uVar3 & 1) != 0) {
      if (local_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_28;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0409c11c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_28,DAT_09185a58,0);
LAB_0409c11c:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
    FUN_071bd288(&local_38,DAT_091a2f18);
  }
  return;
}

