// rea decompile_all
// name: DG.Tweening.DOTweenPath$$GetFullWps
// address: 0x455cba0
// body: available
// range: 0x455cba0-0x455ccf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455ccf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455ccf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_DOTweenPath__GetFullWps
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  if ((DAT_09518808 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091b1a70);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518808 = 1;
  }
  if (*(long *)(param_4 + 0xf0) != 0) {
    uVar1 = *(uint *)(*(long *)(param_4 + 0xf0) + 0x18);
    iVar4 = 1;
    if (*(char *)(param_4 + 0xbc) != '\0') {
      iVar4 = 2;
    }
    lVar2 = FUN_03f5c394(DAT_091807f8,iVar4 + uVar1);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if ((lVar3 != 0) && (uVar8 = UnityEngine_Transform__get_position(lVar3,0), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined4 *)(lVar2 + 0x20) = uVar8;
        *(undefined4 *)(lVar2 + 0x24) = param_2;
        *(undefined4 *)(lVar2 + 0x28) = param_3;
        if (0 < (int)uVar1) {
          uVar6 = 0;
          puVar7 = (undefined4 *)(lVar2 + 0x34);
          do {
            if (*(long *)(param_4 + 0xf0) == 0) goto LAB_0455ccf0;
            uVar8 = FUN_058b15e4(*(long *)(param_4 + 0xf0),uVar6 & 0xffffffff,DAT_091b1a70);
            uVar6 = uVar6 + 1;
            if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_0455ccf4;
            puVar7[-2] = uVar8;
            puVar7[-1] = param_2;
            *puVar7 = param_3;
            puVar7 = puVar7 + 3;
          } while (uVar1 != uVar6);
        }
        if (*(char *)(param_4 + 0xbc) == '\0') {
          return lVar2;
        }
        if ((*(uint *)(lVar2 + 0x18) != 0) &&
           (uVar1 = (iVar4 + uVar1) - 1, uVar1 < *(uint *)(lVar2 + 0x18))) {
          puVar5 = (undefined8 *)(lVar2 + 0x20 + (long)(int)uVar1 * 0xc);
          uVar8 = *(undefined4 *)(lVar2 + 0x28);
          *puVar5 = *(undefined8 *)(lVar2 + 0x20);
          *(undefined4 *)(puVar5 + 1) = uVar8;
          return lVar2;
        }
      }
LAB_0455ccf4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0455ccf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

