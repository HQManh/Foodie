// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$AlignGlowToIcon
// address: 0x42ed454
// body: available
// range: 0x42ed454-0x42ed743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ed73c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ed740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__AlignGlowToIcon(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  undefined8 local_48;
  
  if ((DAT_09517494 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3290);
    FUN_03f5c2a4(&DAT_091a3298);
    FUN_03f5c2a4(&DAT_091a32a0);
    FUN_03f5c2a4(&DAT_091ad890);
    FUN_03f5c2a4(&DAT_091ad8a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09517494 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_68 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
LAB_042ed740:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar2 = (long *)UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x58),0);
      if ((plVar2 != (long *)0x0) && (*plVar2 == DAT_09189c98)) {
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        lVar3 = *(long *)(param_1 + 0xa8);
        if (lVar3 == 0) goto LAB_042ed740;
        if (*(int *)(lVar3 + 0x18) == 0) {
          uVar6 = UnityEngine_Transform__GetParent(plVar2,0);
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_042ed740;
          uVar4 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_1 + 0x38),0);
          uVar1 = CakeOrder_LiveOpsImplement_UIItemLoginDayReward__TryGetOffsetUnder
                            (uVar6,uVar4,&local_48);
          if ((uVar1 & 1) == 0) {
            return;
          }
          fVar8 = 1.0;
          uVar6 = local_48;
        }
        else {
          uVar6 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
          FUN_057e185c(&local_80,lVar3,DAT_091ad890);
          iVar7 = 0;
          puStack_58 = puStack_78;
          local_60 = local_80;
          local_50 = local_70;
          local_80 = 0;
          puStack_78 = &local_60;
          while (uVar1 = FUN_071bd28c(&local_60,DAT_091a3298), lVar3 = local_50, (uVar1 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = UnityEngine_Object__op_Equality(lVar3,0,0);
            if ((uVar1 & 1) == 0) {
              uVar4 = UnityEngine_Transform__GetParent(plVar2,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = UnityEngine_UI_Graphic__get_rectTransform(lVar3,0);
              uVar1 = CakeOrder_LiveOpsImplement_UIItemLoginDayReward__TryGetOffsetUnder
                                (uVar4,uVar5,&local_68);
              if ((uVar1 & 1) != 0) {
                iVar7 = iVar7 + 1;
                uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)local_68 >> 0x20),
                                 (float)uVar6 + (float)local_68);
              }
            }
          }
          FUN_071bd288(&local_60,DAT_091a3290);
          if (iVar7 == 0) {
            return;
          }
          fVar8 = (float)iVar7;
        }
        UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar2,0);
        UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar2,0);
        UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar2,0);
        fVar9 = (float)((ulong)uVar6 >> 0x20) / fVar8;
        UnityEngine_RectTransform__set_anchoredPosition
                  (CONCAT44(fVar9,(float)uVar6 / fVar8),fVar9,plVar2,0);
      }
    }
  }
  return;
}

