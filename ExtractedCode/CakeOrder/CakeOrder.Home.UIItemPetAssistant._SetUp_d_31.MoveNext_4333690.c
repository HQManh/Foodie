// rea decompile_all
// name: CakeOrder.Home.UIItemPetAssistant.<SetUp>d__31$$MoveNext
// address: 0x4333690
// body: available
// range: 0x4333690-0x4333e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4333de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4333e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemPetAssistant_<SetUp>d__31__MoveNext(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long *local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_60 [16];
  ulong local_50;
  
  if ((DAT_095176e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e08);
    FUN_03f5c2a4(&DAT_09174f60);
    FUN_03f5c2a4(&DAT_091bf710);
    FUN_03f5c2a4(&DAT_091bf650);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197950);
    FUN_03f5c2a4(&DAT_091c1e78);
    FUN_03f5c2a4(&DAT_091c21e0);
    FUN_03f5c2a4(&DAT_0919a6c0);
    FUN_03f5c2a4(&DAT_0919a6c8);
    FUN_03f5c2a4(&DAT_091dccb8);
    FUN_03f5c2a4(&DAT_091dccc0);
    FUN_03f5c2a4(&DAT_091dccc8);
    FUN_03f5c2a4(&DAT_091bdee0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095176e8 = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_b8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0x12);
    uStack_78 = *(undefined8 *)(param_1 + 0x10);
    local_80 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_b0 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_04333c30;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(local_60,uVar5,DAT_091bf650);
    local_d0 = local_50;
    uStack_d8 = local_60._8_8_;
    local_e0 = (long *)local_60._0_8_;
    *(undefined8 *)(lVar11 + 200) = local_60._8_8_;
    *(undefined8 *)(lVar11 + 0xc0) = local_60._0_8_;
    *(ulong *)(lVar11 + 0xd0) = local_50;
    thunk_FUN_03f5d7b8(lVar11 + 0xc0,0);
    local_60._8_8_ = *(undefined8 *)(lVar11 + 200);
    local_60._0_8_ = *(undefined8 *)(lVar11 + 0xc0);
    local_50 = *(undefined8 *)(lVar11 + 0xd0);
    FUN_04b722fc(&local_f8,local_60,0,8,0,0,0,DAT_091bf710);
    local_60._8_8_ = 0;
    local_50 = 0;
    uStack_98 = uStack_f0;
    local_a0 = local_f8;
    local_90 = local_e8;
    local_60._0_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdee0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_60._8_8_ = uStack_98;
    local_60._0_8_ = local_a0;
    local_50 = local_90;
    thunk_FUN_03f5d7b8(local_60,0);
    uStack_78 = local_60._8_8_;
    local_80 = (long *)local_60._0_8_;
    local_70 = local_50;
    uVar8 = FUN_041e5390(&local_80,DAT_0919a6c8);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      *(long **)(param_1 + 0xe) = local_80;
      *(ulong *)(param_1 + 0x12) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_04340f04(param_1 + 2,&local_80,param_1,DAT_091c1e78);
      return;
    }
  }
  plVar10 = local_80;
  if (local_80 != (long *)0x0) {
    uVar8 = local_70 & 0xffff;
    lVar7 = *(long *)(DAT_0919a6c0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar6 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_043339ec;
        }
        uVar13 = uVar13 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar7,0);
LAB_043339ec:
    (*(code *)*puVar4)(plVar10,uVar8,puVar4[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = FUN_0640f7ac(lVar11 + 0xc0,DAT_09197950);
  plVar10 = (long *)(lVar11 + 0x50);
  *plVar10 = lVar7;
  thunk_FUN_03f5d7b8(plVar10);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar4 = (undefined8 *)(lVar11 + 0x48);
  *puVar4 = *(undefined8 *)(*plVar10 + 0x18);
  thunk_FUN_03f5d7b8(puVar4);
  if (*(long *)(lVar11 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar2 = CakeOrder_SaveProfile_PetAssistantDataAccess__IsOwnedPet
                    (*(long *)(lVar11 + 0x98),*puVar4,0);
  lVar7 = *(long *)(lVar11 + 0x98);
  *(byte *)(lVar11 + 0xb0) = bVar2 & 1;
  uVar5 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar5,lVar11,DAT_091dccc0,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_SaveProfile_PetAssistantDataAccess__add_onOwnPet(lVar7,uVar5,0);
  lVar7 = *(long *)(lVar11 + 0x98);
  uVar5 = thunk_FUN_03f9944c(DAT_09174f60);
  FUN_071cfb6c(uVar5,lVar11,DAT_091dccc8,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_SaveProfile_PetAssistantDataAccess__add_onUpgradePetSkill(lVar7,uVar5,0);
  lVar7 = *(long *)(lVar11 + 0x98);
  uVar5 = thunk_FUN_03f9944c(DAT_09174e08);
  FUN_071cd244(uVar5,lVar11,DAT_091dccb8,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_SaveProfile_PetAssistantDataAccess__add_onAssignPet(lVar7,uVar5,0);
  auVar14 = CakeOrder_Home_UIItemPetAssistant__SpawnAvatar(lVar11);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_60 = auVar14;
  thunk_FUN_03f5d7b8(local_60,0);
  uVar12 = local_60._8_8_;
  uVar5 = local_60._0_8_;
  local_b0 = local_60;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  if ((long *)uVar5 != (long *)0x0) {
    lVar7 = *(long *)uVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04333c1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(uVar5,DAT_091868c0,0);
LAB_04333c1c:
    iVar3 = (*(code *)*puVar4)(uVar5,uVar12 & 0xffffffff,puVar4[1]);
    if (iVar3 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_b0;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      FUN_04341010(param_1 + 2,local_b0,param_1,DAT_091c21e0);
      return;
    }
  }
LAB_04333c30:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_b0._0_8_;
  if ((long *)local_b0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_b0._0_8_;
    uVar13 = local_b0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04333cb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,2);
LAB_04333cb4:
    (*(code *)*puVar4)(uVar5,uVar13,puVar4[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Home_UIItemPetAssistant__ApplyOwnedVisual(lVar11);
  if (*(long *)(lVar11 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar12 = *(undefined8 *)(lVar11 + 0x48);
  uVar5 = CakeOrder_SaveProfile_PetAssistantDataAccess__GetPetAssignData
                    (*(long *)(lVar11 + 0x98),uVar12,0);
  CakeOrder_Home_UIItemPetAssistant__OnAssignPet(lVar11,uVar12,uVar5);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04333d80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_04333d80:
    (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  return;
}

