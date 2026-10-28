// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterSection$$GetLevelWorldY
// address: 0x435d3f8
// body: available
// range: 0x435d3f8-0x435d62f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435d620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d624 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d62c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CakeOrder_Home_Journey_UIJourneyChapterSection__GetLevelWorldY
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09517817 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c428);
    DAT_09517817 = 1;
  }
  if (*(char *)(param_5 + 0x78) != '\0') {
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_5 + 0x28) != 0) {
        plVar3 = (long *)UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0);
        if (*(int *)(DAT_0918c428 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918c428);
        }
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar3);
          }
          UnityEngine_RectTransform__GetWorldCorners
                    (plVar3,**(undefined8 **)(DAT_0918c428 + 0xb8),0);
          iVar1 = *(int *)(param_5 + 0x6c) - *(int *)(param_5 + 0x68);
          if (iVar1 < 1) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = (float)*(int *)(param_5 + 0x6c);
            fVar8 = (float)*(int *)(param_5 + 0x68);
            if (param_1 <= fVar6) {
              fVar6 = param_1;
            }
            fVar7 = fVar8;
            if (fVar8 <= param_1) {
              fVar7 = fVar6;
            }
            fVar6 = (fVar7 - fVar8) / (float)iVar1;
          }
          if (*(int *)(DAT_0918c428 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = **(long **)(DAT_0918c428 + 0xb8);
          if (lVar4 != 0) {
            if ((*(int *)(lVar4 + 0x18) != 1) && (*(int *)(lVar4 + 0x18) != 0)) {
              fVar8 = 1.0;
              if (fVar6 <= 1.0) {
                fVar8 = fVar6;
              }
              fVar7 = 0.0;
              if (0.0 <= fVar6) {
                fVar7 = fVar8;
              }
              return *(float *)(lVar4 + 0x24) +
                     fVar7 * (*(float *)(lVar4 + 0x30) - *(float *)(lVar4 + 0x24));
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
      goto LAB_0435d620;
    }
  }
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = CakeOrder_Home_Journey_UIJourneyChapterSection__get_RectTransform(param_5);
  }
  else {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0435d620;
    lVar4 = CakeOrder_Home_Journey_UIJourneyChapterCard__get_RectBody();
  }
  if (lVar4 != 0) {
    UnityEngine_RectTransform__get_rect(lVar4,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_4 = param_4 + param_2;
    UnityEngine_Transform__TransformPoint(0,param_4,0,lVar4,0);
    return param_4;
  }
LAB_0435d620:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

