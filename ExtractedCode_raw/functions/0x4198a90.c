// rea decompile_all
// name: Datpt.Utilities$$HandleDrag
// address: 0x4198a90
// body: available
// range: 0x4198a90-0x4198ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4198ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__HandleDrag
               (float param_1,float param_2,undefined4 param_3,long param_4,long param_5,
               long param_6,int param_7,undefined8 param_8,undefined8 param_9)

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
  undefined1 auStack_114 [68];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  if ((DAT_095167f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095167f1 = 1;
  }
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar2 = UnityEngine_Camera__get_main(0);
  if ((param_4 == 0) || (UnityEngine_Transform__get_position(param_4,0), lVar2 == 0))
  goto LAB_04198ecc;
  UnityEngine_Camera__WorldToScreenPoint(lVar2,0);
  uVar8 = param_3;
  if (param_7 == 0) {
    if ((param_5 == 0) ||
       (fVar9 = param_2, param_2 = (float)UnityEngine_Transform__get_position(param_5,0),
       param_6 == 0)) goto LAB_04198ecc;
    fVar4 = (float)UnityEngine_Transform__get_position(param_6,0);
  }
  else {
    if ((param_5 == 0) || (UnityEngine_Transform__get_position(param_5,0), param_6 == 0))
    goto LAB_04198ecc;
    fVar4 = param_2;
    UnityEngine_Transform__get_position(param_6,0);
    fVar9 = fVar4;
  }
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (0 < iVar1) {
    UnityEngine_Input__GetTouch(auStack_114,0,0);
    memcpy(&local_d0,auStack_114,0x44);
    iVar1 = UnityEngine_Touch__get_phase(&local_d0,0);
    if (iVar1 == 0) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      uVar7 = UnityEngine_Touch__get_position(&local_d0,0);
      lVar2 = DAT_0918c980;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x10) = uVar7;
        *(float *)(lVar3 + 0x14) = fVar9;
        lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
        uVar7 = UnityEngine_Transform__get_position(param_4,0);
        lVar2 = DAT_0918c980;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x18) = uVar7;
          *(float *)(lVar3 + 0x1c) = fVar9;
          *(undefined4 *)(lVar3 + 0x20) = uVar8;
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
          if (lVar2 != 0) {
            *(undefined1 *)(lVar2 + 0x26) = 0;
            *(undefined2 *)(lVar2 + 0x24) = 1;
            return;
          }
        }
      }
      goto LAB_04198ecc;
    }
    iVar1 = UnityEngine_Touch__get_phase(&local_d0,0);
    if (iVar1 == 1) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      if (lVar2 == 0) goto LAB_04198ecc;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        fVar5 = (float)UnityEngine_Touch__get_position(&local_d0,0);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
        if (lVar2 != 0) {
          if (param_7 == 0) {
            fVar9 = *(float *)(lVar2 + 0x10);
            lVar2 = UnityEngine_Camera__get_main(0);
            if (lVar2 != 0) {
              fVar9 = (float)UnityEngine_Camera__ScreenToWorldPoint
                                       ((fVar5 - fVar9) * param_1,0,param_3,lVar2,0);
              lVar2 = UnityEngine_Camera__get_main(0);
              if (lVar2 != 0) {
                fVar5 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,0,param_3,lVar2,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
                if (lVar2 != 0) {
                  fVar5 = (fVar9 - fVar5) + *(float *)(lVar2 + 0x18);
                  fVar9 = fVar4;
                  if (fVar5 <= fVar4) {
                    fVar9 = fVar5;
                  }
                  fVar6 = param_2;
                  if (param_2 <= fVar5) {
                    fVar6 = fVar9;
                  }
                  UnityEngine_Transform__get_position(param_4,0);
                  UnityEngine_Transform__get_position(param_4,0);
                  fVar5 = fVar6;
                  goto LAB_04198e84;
                }
              }
            }
          }
          else {
            fVar5 = *(float *)(lVar2 + 0x14);
            lVar2 = UnityEngine_Camera__get_main(0);
            if (lVar2 != 0) {
              param_1 = (fVar9 - fVar5) * param_1;
              UnityEngine_Camera__ScreenToWorldPoint(0,param_1,param_3,lVar2,0);
              lVar2 = UnityEngine_Camera__get_main(0);
              if (lVar2 != 0) {
                fVar9 = 0.0;
                UnityEngine_Camera__ScreenToWorldPoint(0,0,param_3,lVar2,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
                if (lVar2 != 0) {
                  fVar6 = (param_1 - fVar9) + *(float *)(lVar2 + 0x1c);
                  fVar5 = fVar4;
                  if (fVar6 <= fVar4) {
                    fVar5 = fVar6;
                  }
                  fVar9 = param_2;
                  if (param_2 <= fVar6) {
                    fVar9 = fVar5;
                  }
                  fVar6 = (float)UnityEngine_Transform__get_position(param_4,0);
                  UnityEngine_Transform__get_position(param_4,0);
                  fVar5 = fVar9;
LAB_04198e84:
                  UnityEngine_Transform__set_position(fVar6,fVar9,param_4,0);
                  Datpt_Utilities__HandleLimitCallback(fVar5,param_2,fVar4,param_8,param_9);
                  return;
                }
              }
            }
          }
        }
        goto LAB_04198ecc;
      }
    }
    iVar1 = UnityEngine_Touch__get_phase(&local_d0,0);
    if ((iVar1 == 3) || (iVar1 = UnityEngine_Touch__get_phase(&local_d0,0), iVar1 == 4)) {
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      if (lVar2 == 0) {
LAB_04198ecc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar2 + 0x24) = 0;
    }
  }
  return;
}

