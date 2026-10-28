// rea decompile_all
// name: Datpt.Utilities$$HandleDrag
// address: 0x41985f4
// body: available
// range: 0x41985f4-0x4198a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4198a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__HandleDrag
               (float param_1,float param_2,undefined4 param_3,long param_4,long param_5,
               long param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_124 [68];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  
  if ((DAT_095167f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095167f0 = 1;
  }
  local_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar2 = UnityEngine_Camera__get_main(0);
  if ((param_4 == 0) || (UnityEngine_Transform__get_position(param_4,0), lVar2 == 0))
  goto LAB_04198a8c;
  UnityEngine_Camera__WorldToScreenPoint(lVar2,0);
  uVar8 = param_3;
  if (param_7 == 0) {
    if ((param_5 == 0) ||
       (fVar9 = param_2, param_2 = (float)UnityEngine_Transform__get_position(param_5,0),
       param_6 == 0)) goto LAB_04198a8c;
    fVar4 = (float)UnityEngine_Transform__get_position(param_6,0);
  }
  else {
    if ((param_5 == 0) || (UnityEngine_Transform__get_position(param_5,0), param_6 == 0))
    goto LAB_04198a8c;
    fVar4 = param_2;
    UnityEngine_Transform__get_position(param_6,0);
    fVar9 = fVar4;
  }
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (iVar1 < 1) {
    return;
  }
  UnityEngine_Input__GetTouch(auStack_124,0,0);
  memcpy(&local_e0,auStack_124,0x44);
  iVar1 = UnityEngine_Touch__get_phase(&local_e0,0);
  if (iVar1 == 0) {
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
    uVar6 = UnityEngine_Touch__get_position(&local_e0,0);
    lVar2 = DAT_0918c980;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x10) = uVar6;
      *(float *)(lVar3 + 0x14) = fVar9;
      lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
      uVar6 = UnityEngine_Transform__get_position(param_4,0);
      lVar2 = DAT_0918c980;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x18) = uVar6;
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
    goto LAB_04198a8c;
  }
  iVar1 = UnityEngine_Touch__get_phase(&local_e0,0);
  if (iVar1 == 1) {
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
    if (lVar2 == 0) goto LAB_04198a8c;
    if (*(char *)(lVar2 + 0x24) != '\0') {
      fVar5 = (float)UnityEngine_Touch__get_position(&local_e0,0);
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
      if (lVar2 == 0) goto LAB_04198a8c;
      fVar5 = fVar5 - *(float *)(lVar2 + 0x10);
      fVar9 = fVar9 - *(float *)(lVar2 + 0x14);
      if (param_8 == 2) {
        if (param_7 != 0) {
          if ((param_7 == 1) && (0.0 < fVar9)) {
            return;
          }
          goto LAB_041988d0;
        }
        if (0.0 < fVar5) {
          return;
        }
      }
      else if (param_8 == 1) {
        if (param_7 != 0) {
          if ((param_7 == 1) && (fVar9 < 0.0)) {
            return;
          }
LAB_041988d0:
          lVar2 = UnityEngine_Camera__get_main(0);
          if (lVar2 == 0) goto LAB_04198a8c;
          fVar9 = fVar9 * param_1;
          UnityEngine_Camera__ScreenToWorldPoint(0,fVar9,param_3,lVar2,0);
          lVar2 = UnityEngine_Camera__get_main(0);
          if (lVar2 == 0) goto LAB_04198a8c;
          fVar5 = 0.0;
          UnityEngine_Camera__ScreenToWorldPoint(0,0,param_3,lVar2,0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
          if (lVar2 == 0) goto LAB_04198a8c;
          fVar5 = (fVar9 - fVar5) + *(float *)(lVar2 + 0x1c);
          fVar9 = fVar4;
          if (fVar5 <= fVar4) {
            fVar9 = fVar5;
          }
          fVar7 = param_2;
          if (param_2 <= fVar5) {
            fVar7 = fVar9;
          }
          fVar9 = (float)UnityEngine_Transform__get_position(param_4,0);
          UnityEngine_Transform__get_position(param_4,0);
          fVar5 = fVar7;
          goto LAB_04198a40;
        }
        if (fVar5 < 0.0) {
          return;
        }
      }
      else if (param_7 != 0) goto LAB_041988d0;
      lVar2 = UnityEngine_Camera__get_main(0);
      if (lVar2 != 0) {
        fVar9 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar5 * param_1,0,param_3,lVar2,0);
        lVar2 = UnityEngine_Camera__get_main(0);
        if (lVar2 != 0) {
          fVar5 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,0,param_3,lVar2,0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
          if (lVar2 != 0) {
            fVar5 = (fVar9 - fVar5) + *(float *)(lVar2 + 0x18);
            fVar7 = fVar4;
            if (fVar5 <= fVar4) {
              fVar7 = fVar5;
            }
            fVar9 = param_2;
            if (param_2 <= fVar5) {
              fVar9 = fVar7;
            }
            UnityEngine_Transform__get_position(param_4,0);
            UnityEngine_Transform__get_position(param_4,0);
            fVar5 = fVar9;
LAB_04198a40:
            UnityEngine_Transform__set_position(fVar9,fVar7,param_4,0);
            Datpt_Utilities__HandleLimitCallback(fVar5,param_2,fVar4,param_9,param_10);
            return;
          }
        }
      }
      goto LAB_04198a8c;
    }
  }
  iVar1 = UnityEngine_Touch__get_phase(&local_e0,0);
  if ((iVar1 != 3) && (iVar1 = UnityEngine_Touch__get_phase(&local_e0,0), iVar1 != 4)) {
    return;
  }
  if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x24) = 0;
    return;
  }
LAB_04198a8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

