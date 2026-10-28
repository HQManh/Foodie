// rea decompile_all
// name: Datpt.Utilities$$CheckHold2D
// address: 0x41972cc
// body: available
// range: 0x41972cc-0x419775f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419775c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__CheckHold2D
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long param_5,
               long param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined4 local_114;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_095167e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd8b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189078);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095167e9 = 1;
  }
  local_80 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_3,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  lVar6 = UnityEngine_Camera__get_main(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    uVar7 = FUN_04b7c324(param_3,DAT_091cd8b8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    iVar3 = UnityEngine_Input__get_touchCount(0);
    if (iVar3 == 0) {
      return;
    }
    UnityEngine_Input__GetTouch(&local_134,0,0);
    memcpy(&local_c0,&local_134,0x44);
    uVar12 = UnityEngine_Touch__get_position(&local_c0,0);
    iVar3 = UnityEngine_Touch__get_phase(&local_c0,0);
    iVar4 = UnityEngine_Touch__get_phase(&local_c0,0);
    if (iVar4 == 1) {
      bVar1 = true;
    }
    else {
      iVar4 = UnityEngine_Touch__get_phase(&local_c0,0);
      bVar1 = iVar4 == 2;
    }
    iVar4 = UnityEngine_Touch__get_phase(&local_c0,0);
    if (iVar4 == 3) {
      bVar2 = true;
    }
    else {
      iVar4 = UnityEngine_Touch__get_phase(&local_c0,0);
      bVar2 = iVar4 == 4;
    }
    if (lVar6 != 0) {
      UnityEngine_Camera__ScreenPointToRay(&local_14c,uVar12,param_2,0,lVar6,0);
      if (*(int *)(DAT_09189078 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_160 = local_13c;
      uStack_168 = uStack_144;
      local_170 = local_14c;
      UnityEngine_Physics2D__GetRayIntersection(&local_134,&local_170,0);
      uStack_e8 = uStack_12c;
      local_f0 = local_134;
      uStack_d8 = uStack_11c;
      uStack_e0 = local_124;
      local_d0 = local_114;
      uVar8 = UnityEngine_RaycastHit2D__get_collider(&local_f0,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar8 = UnityEngine_RaycastHit2D__get_collider(&local_f0,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar7,0);
        uVar5 = uVar9 & 0xffffffff;
        if (((uVar9 & 1) != 0) && (iVar3 == 0)) {
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(DAT_0918c980 + 0xb8);
          uVar5 = 1;
          plVar10 = (long *)(lVar6 + 0x18);
          *plVar10 = param_3;
          *(undefined1 *)(lVar6 + 0x10) = 1;
          thunk_FUN_03f5d7b8(plVar10,param_3);
          if (param_5 != 0) {
            (**(code **)(param_5 + 0x18))
                      (*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28));
            uVar5 = 1;
          }
        }
      }
      if (bVar1) {
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(DAT_0918c980 + 0xb8);
        if (*(char *)(lVar6 + 0x10) != '\0') {
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = *(long *)(DAT_0918c980 + 0xb8);
          }
          uVar7 = *(undefined8 *)(lVar6 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar7,param_3,0);
          if ((uVar9 & 1) != 0) {
            if ((uVar5 & 1) == 0) {
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar6 = *(long *)(DAT_0918c980 + 0xb8);
              puVar11 = (undefined8 *)(lVar6 + 0x18);
              *puVar11 = 0;
              *(undefined1 *)(lVar6 + 0x10) = 0;
              thunk_FUN_03f5d7b8(puVar11,0);
              param_4 = param_6;
              if (param_6 == 0) goto LAB_04197694;
            }
            (**(code **)(param_4 + 0x18))
                      (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
          }
        }
      }
LAB_04197694:
      if (bVar2) {
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(DAT_0918c980 + 0xb8);
        if (*(char *)(lVar6 + 0x10) != '\0') {
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = *(long *)(DAT_0918c980 + 0xb8);
          }
          uVar7 = *(undefined8 *)(lVar6 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar7,param_3,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = *(long *)(DAT_0918c980 + 0xb8);
            puVar11 = (undefined8 *)(lVar6 + 0x18);
            *puVar11 = 0;
            *(undefined1 *)(lVar6 + 0x10) = 0;
            thunk_FUN_03f5d7b8(puVar11,0);
            if (param_6 != 0) {
              (**(code **)(param_6 + 0x18))
                        (*(undefined8 *)(param_6 + 0x40),*(undefined8 *)(param_6 + 0x28));
            }
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

