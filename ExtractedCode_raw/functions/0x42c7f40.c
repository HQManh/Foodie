// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$FitScrollContentToCardList
// address: 0x42c7f40
// body: available
// range: 0x42c7f40-0x42c7f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__FitScrollContentToCardList
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09517357 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517357 = 1;
  }
  uVar2 = *(undefined8 *)(param_5 + 0x90);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  lVar3 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_5 + 0x90) == 0) goto LAB_042c817c;
    lVar3 = *(long *)(*(long *)(param_5 + 0x90) + 0x20);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_5 + 0x70);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_5 + 0x70) != 0) {
        UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x70),0);
        fVar6 = (float)param_2;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(param_5 + 0x70);
        while( true ) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Inequality(lVar4,0,0);
          fVar5 = (float)param_2;
          if ((uVar1 & 1) == 0) break;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Inequality(lVar4,lVar3,0);
          fVar5 = (float)param_2;
          if ((uVar1 & 1) == 0) break;
          if (lVar4 == 0) goto LAB_042c817c;
          UnityEngine_Transform__get_localPosition(lVar4,0);
          fVar5 = (float)param_2;
          UnityEngine_Transform__get_localScale(lVar4,0);
          fVar6 = fVar5 + fVar6 * (float)param_2;
          lVar4 = UnityEngine_Transform__GetParent(lVar4,0);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(lVar4,0,0);
        if ((uVar1 & 1) != 0) {
          return;
        }
        if (lVar3 != 0) {
          UnityEngine_RectTransform__get_rect(lVar3,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar6 = ((param_4 + fVar5) - fVar6) + *(float *)(param_5 + 0x98);
          if (0xfe < ((uint)fVar6 >> 0x17 & 0xff)) {
            return;
          }
          fVar5 = 0.0;
          if (0.0 <= fVar6) {
            fVar5 = fVar6;
          }
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar5,lVar3,1,0);
          return;
        }
      }
LAB_042c817c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

