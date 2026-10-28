// rea decompile_all
// name: Datpt.Utilities$$HandleHorizontalDrag
// address: 0x4198ed0
// body: available
// range: 0x4198ed0-0x41991d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41991d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__HandleHorizontalDrag
               (float param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
               long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_f4 [68];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_095167f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095167f3 = 1;
  }
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar2 = UnityEngine_Camera__get_main(0);
  if ((((param_4 == 0) || (UnityEngine_Transform__get_position(param_4,0), lVar2 == 0)) ||
      (UnityEngine_Camera__WorldToScreenPoint(lVar2,0), param_5 == 0)) ||
     (uVar8 = param_3, fVar4 = (float)UnityEngine_Transform__get_position(param_5,0), param_6 == 0))
  goto LAB_041991d0;
  fVar5 = (float)UnityEngine_Transform__get_position(param_6,0);
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (0 < iVar1) {
    UnityEngine_Input__GetTouch(auStack_f4,0,0);
    memcpy(&local_b0,auStack_f4,0x44);
    iVar1 = UnityEngine_Touch__get_phase(&local_b0,0);
    if (iVar1 == 0) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      uVar7 = UnityEngine_Touch__get_position(&local_b0,0);
      lVar2 = DAT_0918c980;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x10) = uVar7;
        *(undefined4 *)(lVar3 + 0x14) = param_2;
        lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
        uVar7 = UnityEngine_Transform__get_position(param_4,0);
        lVar2 = DAT_0918c980;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x18) = uVar7;
          *(undefined4 *)(lVar3 + 0x1c) = param_2;
          *(undefined4 *)(lVar3 + 0x20) = uVar8;
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
          if (lVar2 != 0) {
            *(undefined1 *)(lVar2 + 0x24) = 1;
            return;
          }
        }
      }
      goto LAB_041991d0;
    }
    iVar1 = UnityEngine_Touch__get_phase(&local_b0,0);
    if (iVar1 == 1) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      if (lVar2 == 0) goto LAB_041991d0;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        fVar6 = (float)UnityEngine_Touch__get_position(&local_b0,0);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
        if (lVar2 != 0) {
          fVar9 = *(float *)(lVar2 + 0x10);
          lVar2 = UnityEngine_Camera__get_main(0);
          if (lVar2 != 0) {
            fVar6 = (float)UnityEngine_Camera__ScreenToWorldPoint
                                     ((fVar6 - fVar9) * param_1,0,param_3,lVar2,0);
            lVar2 = UnityEngine_Camera__get_main(0);
            if (lVar2 != 0) {
              fVar9 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,0,param_3,lVar2,0);
              lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
              if (lVar2 != 0) {
                fVar6 = (fVar6 - fVar9) + *(float *)(lVar2 + 0x18);
                if (fVar6 <= fVar5) {
                  fVar5 = fVar6;
                }
                if (fVar4 <= fVar6) {
                  fVar4 = fVar5;
                }
                UnityEngine_Transform__get_position(param_4,0);
                UnityEngine_Transform__get_position(param_4,0);
                UnityEngine_Transform__set_position(fVar4,fVar5,param_4,0);
                return;
              }
            }
          }
        }
        goto LAB_041991d0;
      }
    }
    iVar1 = UnityEngine_Touch__get_phase(&local_b0,0);
    if ((iVar1 == 3) || (iVar1 = UnityEngine_Touch__get_phase(&local_b0,0), iVar1 == 4)) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      if (lVar2 == 0) {
LAB_041991d0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar2 + 0x24) = 0;
    }
  }
  return;
}

