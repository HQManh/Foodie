// rea decompile_all
// name: DG.Tweening.Sequence$$Setup
// address: 0x45390ec
// body: available
// range: 0x45390ec-0x45391bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45391bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Sequence__Setup(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09518702 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    DAT_09518702 = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = DAT_09183190;
  if (param_1 != 0) {
    lVar5 = *(long *)(DAT_09183190 + 0xb8);
    iVar3 = *(int *)(lVar5 + 0x44);
    uVar1 = *(undefined1 *)(lVar5 + 0x50);
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(lVar5 + 0x48);
    *(undefined1 *)(param_1 + 0x9a) = uVar1;
    if (iVar3 == 3) {
      bVar2 = true;
    }
    else {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
        iVar3 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x44);
        lVar4 = DAT_09183190;
      }
      bVar2 = iVar3 == 1;
    }
    iVar3 = *(int *)(lVar4 + 0xe4);
    *(bool *)(param_1 + 0x110) = bVar2;
    if (iVar3 == 0) {
      FUN_03f5c424();
      lVar4 = DAT_09183190;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    *(undefined4 *)(param_1 + 0xb4) = 1;
    uVar6 = *(undefined8 *)(lVar4 + 0x58);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar4 + 0x4c);
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

