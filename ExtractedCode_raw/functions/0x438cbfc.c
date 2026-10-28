// rea decompile_all
// name: CakeOrder.InGame.CustomerQueueControl$$IterateQueue
// address: 0x438cbfc
// body: available
// range: 0x438cbfc-0x438cfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438cfac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438cfb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438cfb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438cfb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_CustomerQueueControl__IterateQueue(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_095179f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c8e8);
    FUN_03f5c2a4(&DAT_0919c8f0);
    FUN_03f5c2a4(&DAT_091a2870);
    FUN_03f5c2a4(&DAT_091a2878);
    FUN_03f5c2a4(&DAT_091a2880);
    FUN_03f5c2a4(&DAT_091b8b90);
    FUN_03f5c2a4(&DAT_091b8b98);
    FUN_03f5c2a4(&DAT_091b8ba0);
    FUN_03f5c2a4(&DAT_091b8ba8);
    DAT_095179f7 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  plVar4 = (long *)(param_1 + 0x58);
  lVar6 = *plVar4;
  local_50 = 0;
  if (lVar6 == 0) {
LAB_0438cd54:
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) goto LAB_0438cfb8;
    if (*(int *)(lVar6 + 0x20) < 1) {
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 == 0) goto LAB_0438cfb8;
      if (0 < *(int *)(lVar6 + 0x20)) {
        uVar2 = FUN_05e2d168(lVar6,DAT_091b8b90);
        *(undefined8 *)(param_1 + 0x58) = uVar2;
        thunk_FUN_03f5d7b8(plVar4,uVar2);
        uVar2 = CakeOrder_InGame_CustomerQueueControl__SpawnCustomer
                          (param_1,*(undefined8 *)(param_1 + 0x58),0);
        *(undefined8 *)(param_1 + 0x60) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar2);
      }
    }
    else {
      FUN_05e2d090(&local_78,lVar6,DAT_091b8ba0);
      puStack_58 = puStack_70;
      local_60 = local_78;
      puStack_70 = &local_60;
      iVar5 = 0;
      local_50 = local_68;
      local_78 = 0;
      while (uVar3 = FUN_071bddb4(&local_60,DAT_091a2878), (uVar3 & 1) != 0) {
        uVar2 = FUN_071bdea4(&local_60,DAT_091a2880);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar2,uVar2);
        }
        iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
        if (iVar1 < 1) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = (float)iVar5 / (float)iVar1;
        }
        if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(0,uVar2);
        }
        lVar6 = FUN_06fd83d4(*(long *)(param_1 + 0x70),uVar2,DAT_0919c8f0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_InGame_CustomerVisual__Move(fVar7);
        iVar5 = iVar5 + 1;
      }
      FUN_071bdda4(&local_60,DAT_091a2870);
      if (*(long *)(param_1 + 0x68) == 0) {
LAB_0438cfb8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_05e2d168(*(long *)(param_1 + 0x68),DAT_091b8b90);
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      thunk_FUN_03f5d7b8(plVar4,uVar2);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_0438cfb8;
      uVar2 = FUN_06fd83d4(*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x58),DAT_0919c8f0);
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar2);
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 == 0) goto LAB_0438cfb8;
      if (0 < *(int *)(lVar6 + 0x20)) {
        uVar2 = FUN_05e2d168(lVar6,DAT_091b8b90);
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0438cfb8;
        FUN_05e2cfd8(*(long *)(param_1 + 0x68),uVar2,DAT_091b8b98);
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0438cfb8;
        CakeOrder_InGame_CustomerQueueControl__SpawnCustomer
                  (param_1,uVar2,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x20));
      }
    }
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0438cfb8;
    iVar5 = *(int *)(*(long *)(param_1 + 0x60) + 0x60);
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_0438cfb8;
        FUN_06fd9970(*(long *)(param_1 + 0x70),lVar6,DAT_0919c8e8);
        *(undefined8 *)(param_1 + 0x58) = 0;
        thunk_FUN_03f5d7b8(plVar4,0);
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0438cfb8;
        CakeOrder_InGame_CustomerVisual__Disappear();
        lVar6 = *plVar4;
        if (lVar6 == 0) goto LAB_0438cfb8;
      }
      if (*(char *)(lVar6 + 0x30) == '\0') {
        UnityEngine_Time__get_time(0);
        uVar3 = CakeOrder_Model_CustomerDataGeneral__IsTimeout(lVar6,0);
        lVar6 = *plVar4;
        if ((uVar3 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0438cfb8;
          uVar2 = 2;
LAB_0438cf98:
          CakeOrder_Model_CustomerDataGeneral__SetServeResult(lVar6,uVar2,0);
          lVar6 = *(long *)(param_1 + 0x80);
          goto joined_r0x0438cfa4;
        }
        if (lVar6 == 0) goto LAB_0438cfb8;
        uVar3 = CakeOrder_Model_CustomerDataGeneral__IsExceededFailAllowed(lVar6,0);
        if ((uVar3 & 1) != 0) {
          lVar6 = *plVar4;
          if (lVar6 == 0) goto LAB_0438cfb8;
          uVar2 = 3;
          goto LAB_0438cf98;
        }
      }
      else {
        CakeOrder_Model_CustomerDataGeneral__SetServeResult(lVar6,1,0);
        lVar6 = *(long *)(param_1 + 0x78);
joined_r0x0438cfa4:
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),*plVar4,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0438cfb8;
      }
      if (*plVar4 == 0) goto LAB_0438cd54;
    }
    uVar2 = 0;
  }
  return uVar2;
}

