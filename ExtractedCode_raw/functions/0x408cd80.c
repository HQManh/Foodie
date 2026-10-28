// rea decompile_all
// name: TrungKienPack.SimpleSinFade$$Awake
// address: 0x408cd80
// body: available
// range: 0x408cd80-0x408ce63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408ce4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ce60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_SimpleSinFade__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_09515cd0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce0);
    DAT_09515cd0 = 1;
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    lVar1 = FUN_03f5c394(DAT_0917fce0,*(undefined4 *)(*(long *)(param_5 + 0x20) + 0x18));
    plVar2 = (long *)(param_5 + 0x40);
    *plVar2 = lVar1;
    thunk_FUN_03f5d7b8(plVar2,lVar1);
    lVar1 = *(long *)(param_5 + 0x20);
    if (lVar1 != 0) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) {
          return;
        }
        if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) {
LAB_0408ce60:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
        if (lVar1 == 0) break;
        lVar5 = *plVar2;
        uVar6 = UnityEngine_SpriteRenderer__get_color(lVar1,0);
        if (lVar5 == 0) break;
        lVar3 = lVar3 + 1;
        if (*(uint *)(lVar5 + 0x18) <= (int)lVar3 - 1U) goto LAB_0408ce60;
        lVar5 = lVar5 + lVar4;
        lVar4 = lVar4 + 0x10;
        *(undefined4 *)(lVar5 + 0x20) = uVar6;
        *(undefined4 *)(lVar5 + 0x24) = param_2;
        *(undefined4 *)(lVar5 + 0x28) = param_3;
        *(undefined4 *)(lVar5 + 0x2c) = param_4;
        lVar1 = *(long *)(param_5 + 0x20);
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

