// rea decompile_all
// name: AnhPD.FoodOrder.FTimer$$GetEmotionByRate
// address: 0x421edcc
// body: available
// range: 0x421edcc-0x421ef27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421ef20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421ef24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AnhPD_FoodOrder_FTimer__GetEmotionByRate(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09516d11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184488);
    DAT_09516d11 = 1;
  }
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 != 0) {
    if (*(int *)(DAT_09184488 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = **(long **)(DAT_09184488 + 0xb8);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar1) {
        uVar1 = *(uint *)(lVar2 + 0x18);
      }
      if (0 < (int)uVar1) {
        lVar5 = *(long *)(param_2 + 0x48);
        if (lVar5 == 0) goto LAB_0421ef24;
        lVar4 = 0;
        lVar6 = 0x20;
        do {
          if (-lVar4 == (ulong)*(uint *)(lVar5 + 0x18)) goto LAB_0421ef20;
          if ((1.0 - param_1) * 100.0 <= (float)*(int *)(lVar5 + lVar6)) {
            if (*(int *)(DAT_09184488 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar2 = **(long **)(DAT_09184488 + 0xb8);
            }
            if (lVar2 == 0) goto LAB_0421ef24;
            if (*(uint *)(lVar2 + 0x18) <= (uint)-(int)lVar4) goto LAB_0421ef20;
            puVar3 = (undefined4 *)(lVar2 + lVar6);
            goto LAB_0421ef08;
          }
          lVar4 = lVar4 + -1;
          lVar6 = lVar6 + 4;
        } while (-(ulong)uVar1 != lVar4);
      }
      if (*(int *)(DAT_09184488 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = **(long **)(DAT_09184488 + 0xb8);
      }
      if (lVar2 != 0) {
        if (uVar1 - 1 < *(uint *)(lVar2 + 0x18)) {
          puVar3 = (undefined4 *)(lVar2 + (long)(int)(uVar1 - 1) * 4 + 0x20);
LAB_0421ef08:
          return *puVar3;
        }
LAB_0421ef20:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_0421ef24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

