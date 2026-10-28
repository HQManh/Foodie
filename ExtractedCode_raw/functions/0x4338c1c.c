// rea decompile_all
// name: CakeOrder.Home.UIPetAssistantDetails.<LoadUsesConfig>d__54$$MoveNext
// address: 0x4338c1c
// body: available
// range: 0x4338c1c-0x4339127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4339118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433911c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4339120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4339124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPetAssistantDetails_<LoadUsesConfig>d__54__MoveNext(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long *local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09517706 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf630);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_091c1e10);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091cd9a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_09517706 = 1;
  }
  lVar12 = *(long *)(param_1 + 6);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0x16);
    uStack_78 = *(undefined8 *)(param_1 + 0x14);
    local_80 = *(long **)(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar12 + 0x144) = 0;
    uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar4 & 1) != 0) goto LAB_04339064;
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b71104(&local_60,0,DAT_091bf630);
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    local_c0 = local_50;
    *(undefined8 *)(param_1 + 0xe) = uStack_58;
    *(long **)(param_1 + 0xc) = local_60;
    *(ulong *)(param_1 + 0x10) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    uStack_58 = *(undefined8 *)(param_1 + 0xe);
    local_60 = *(long **)(param_1 + 0xc);
    local_50 = *(ulong *)(param_1 + 0x10);
    FUN_04b722fc(&local_e8,&local_60,0,8,0,0,0,DAT_091bf6e8);
    uStack_58 = 0;
    local_50 = 0;
    uStack_98 = uStack_e0;
    local_a0 = local_e8;
    local_90 = local_d8;
    local_60 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_58 = uStack_98;
    local_60 = local_a0;
    local_50 = local_90;
    thunk_FUN_03f5d7b8(&local_60,0);
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    uVar4 = FUN_041e5390(&local_80,DAT_0919a5d8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = uStack_78;
      *(long **)(param_1 + 0x12) = local_80;
      *(ulong *)(param_1 + 0x16) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_0434197c(param_1 + 2,&local_80,param_1,DAT_091c1e10);
      return;
    }
  }
  plVar11 = local_80;
  if (local_80 != (long *)0x0) {
    uVar4 = local_70 & 0xffff;
    lVar5 = *(long *)(DAT_0919a5d0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04338f1c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar11,lVar5,0);
LAB_04338f1c:
    (*(code *)*puVar6)(plVar11,uVar4,puVar6[1]);
  }
  iVar3 = FUN_0640f818(param_1 + 0xc,DAT_09197808);
  if (iVar3 == 1) {
    uVar7 = FUN_0640f7ac(param_1 + 0xc,DAT_09197800);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_0640f7ac(param_1 + 0xc,DAT_09197800);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = FUN_04b7c324(lVar5,DAT_091cd9a8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = CakeOrder_MapPetAssistantConfig__GetConfig(lVar5,*(undefined8 *)(param_1 + 10),0);
        if (lVar5 != 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar12 + 0x138) = *(undefined8 *)(lVar5 + 0x18);
          uVar1 = *(undefined4 *)(lVar5 + 0x20);
          *(undefined1 *)(lVar12 + 0x144) = 1;
          *(undefined4 *)(lVar12 + 0x140) = uVar1;
        }
      }
    }
  }
  uVar4 = FUN_0640f598(param_1 + 0xc,DAT_091977b8);
  if ((uVar4 & 1) != 0) {
    uStack_c8 = *(undefined8 *)(param_1 + 0xe);
    local_d0 = *(long **)(param_1 + 0xc);
    local_c0 = *(ulong *)(param_1 + 0x10);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_58 = uStack_c8;
    local_60 = local_d0;
    local_50 = local_c0;
    FUN_04b71ee0(&local_60,DAT_091bf690);
  }
LAB_04339064:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = -2;
  cVar2 = DAT_095162d8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_043390f4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_043390f4:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  return;
}

