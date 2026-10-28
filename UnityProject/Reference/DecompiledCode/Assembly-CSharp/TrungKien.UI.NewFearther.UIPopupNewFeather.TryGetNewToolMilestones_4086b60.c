// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$TryGetNewToolMilestones
// address: 0x4086b60
// body: available
// range: 0x4086b60-0x4086eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4086ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4086ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint TrungKien_UI_NewFearther_UIPopupNewFeather__TryGetNewToolMilestones
               (long param_1,int param_2,long param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long local_68;
  
  if ((DAT_09515cb0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f1d8);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515cb0 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  TrungKien_UI_NewFearther_UIPopupNewFeather__BuildNewToolDict();
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    uVar4 = FUN_06fd9fbc(lVar5,param_1,&local_68,DAT_0919f1d8);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(lVar5,DAT_091adc70);
    if (local_68 == 0) goto LAB_04086ee8;
    FUN_05797d74(&local_98,local_68,DAT_091adcc0);
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_70 = local_88;
    local_98 = 0;
    puStack_90 = &local_80;
LAB_04086d1c:
    uVar6 = FUN_071ad7a4(&local_80,DAT_091a34d8);
    uVar4 = local_70;
    if ((uVar6 & 1) != 0) {
      uVar2 = (uint)local_70;
      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = TrungKien_UI_NewFearther_UIPopupNewFeather__HasConfiguredNewFeature
                        (param_1,uVar4 & 0xffffffff,param_3);
      lVar8 = DAT_091adc88;
      if ((uVar6 & 1) != 0) {
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
            }
            else {
              FUN_057971a8(lVar5,uVar4 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_04086d1c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_04086d1c;
    }
    FUN_071ad7a0(&local_80,DAT_091a34d0);
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = TrungKien_UI_NewFearther_UIPopupNewFeather__GetRestaurantMilestone(param_1);
    if (-1 < iVar3) {
      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = TrungKien_UI_NewFearther_UIPopupNewFeather__GetNextMapId(param_1);
      if (param_3 == 0) goto LAB_04086ee8;
      lVar8 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindRestaurantConfig(param_3,uVar7);
      if (lVar8 != 0) {
        if (lVar5 == 0) goto LAB_04086ee8;
        FUN_039af86c(lVar5,iVar3,DAT_091adc88);
        goto LAB_04086e50;
      }
    }
    if (lVar5 != 0) {
LAB_04086e50:
      FUN_05797d74(&local_98,lVar5,DAT_091adcc0);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
      while (uVar4 = FUN_071ad7a4(&local_80,DAT_091a34d8), (uVar4 & 1) != 0) {
        if (param_2 < (int)(uint)local_70) {
          if (((int)*param_5 < 0) || ((int)(uint)local_70 < (int)*param_5)) {
            *param_5 = (uint)local_70;
          }
        }
        else {
          uVar1 = *param_4;
          if ((int)*param_4 <= (int)(uint)local_70) {
            uVar1 = (uint)local_70;
          }
          *param_4 = uVar1;
        }
      }
      FUN_071ad7a0(&local_80,DAT_091a34d0);
      return ~*param_5 >> 0x1f;
    }
  }
LAB_04086ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

