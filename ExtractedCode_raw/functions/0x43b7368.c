// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$LateUpdate
// address: 0x43b7368
// body: available
// range: 0x43b7368-0x43b751f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b73fc to 0x43b7520 ChocDino.UIFX.TrailEffectTMP$$ModifyGeometry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b74d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b74e4 to 0x43b7668 ChocDino.UIFX.TrailEffectTMP$$PrepareTrail (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b751c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__LateUpdate(long param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  uVar2 = ChocDino_UIFX_TrailEffectBase__CanApply(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_043b7448:
      if (*(int *)(param_1 + 0x20) < 1) {
        ChocDino_UIFX_TrailEffectTMP__PrepareTrail(param_1);
        return;
      }
      return;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      TMPro_TMP_Text__set_renderMode(*(long *)(param_1 + 0x80),0xff,0);
      ChocDino_UIFX_TrailEffectTMP__ForceMeshBackToOriginal(param_1);
      plVar4 = *(long **)(param_1 + 0x80);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x7d8))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x7e0));
        *(undefined1 *)(param_1 + 0xa0) = 0;
        goto LAB_043b7448;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x80);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x3b0) == '\0') {
        if (*(long *)(param_1 + 0x90) != 0) {
          uVar2 = 0;
          iVar6 = 0;
          lVar7 = 0x28;
          while (lVar3 = TMPro_TMP_Text__get_textInfo(lVar3,0), lVar3 != 0) {
            if ((long)*(int *)(lVar3 + 0x34) <= (long)uVar2) {
              if ((*(long *)(param_1 + 0x90) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar3 != 0)) {
                if ((*(int *)(param_1 + 0x20) + (*(byte *)(param_1 + 0x54) ^ 1)) * iVar6 ==
                    *(int *)(lVar3 + 0x18)) goto LAB_043b739c;
                goto LAB_043b7394;
              }
              break;
            }
            if (((*(long *)(param_1 + 0x80) == 0) ||
                (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x80),0), lVar3 == 0)) ||
               (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            piVar1 = (int *)(lVar3 + lVar7);
            lVar3 = *(long *)(param_1 + 0x80);
            lVar7 = lVar7 + 0x50;
            uVar2 = uVar2 + 1;
            iVar6 = *piVar1 + iVar6;
            if (lVar3 == 0) break;
          }
          goto LAB_043b74d0;
        }
      }
      else {
LAB_043b7394:
        ChocDino_UIFX_TrailEffectTMP__ForceMeshBackToOriginal(param_1);
      }
LAB_043b739c:
      lVar3 = *(long *)(param_1 + 0x80);
      if (*(int *)(param_1 + 0xa4) == 0) {
        if (lVar3 == 0) goto LAB_043b74d0;
        TMPro_TMP_Text__set_renderMode(lVar3,0,0);
        plVar4 = *(long **)(param_1 + 0x80);
        if (plVar4 == (long *)0x0) goto LAB_043b74d0;
        (**(code **)(*plVar4 + 0x7d8))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x7e0));
        lVar3 = *(long *)(param_1 + 0x80);
      }
      if (lVar3 != 0) {
        uVar5 = TMPro_TMP_Text__get_textInfo(lVar3,0);
        ChocDino_UIFX_TrailEffectTMP__ModifyGeometry(param_1,uVar5);
        return;
      }
    }
  }
LAB_043b74d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

