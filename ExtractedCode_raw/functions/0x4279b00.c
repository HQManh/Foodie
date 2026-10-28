// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSaveSync$$GetPrefKeys
// address: 0x4279b00
// body: available
// range: 0x4279b00-0x427aa47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4279ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a5f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a9f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a9f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427a9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427aa00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427aa04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427aa08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427aa0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0427a684) */
/* WARNING: Removing unreachable block (ram,0x0427a1c0) */
/* WARNING: Removing unreachable block (ram,0x0427a414) */
/* WARNING: Removing unreachable block (ram,0x0427aa3c) */

long CakeOrder_SaveProfile_CookOrderSaveSync__GetPrefKeys(long param_1)

{
  undefined4 uVar1;
  long **pplVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  int local_cc;
  long local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  long **pplStack_a8;
  long **local_a0;
  int local_94;
  undefined8 local_90;
  long **pplStack_88;
  long **local_80;
  long *local_70;
  long *local_68;
  
  if ((DAT_0951708b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091719a0);
    FUN_03f5c2a4(&DAT_09184ed8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_091a86a0);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09171a88);
    FUN_03f5c2a4(&DAT_09185158);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09171ea8);
    FUN_03f5c2a4(&DAT_09186c38);
    FUN_03f5c2a4(&DAT_091b36b8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09173a58);
    FUN_03f5c2a4(&DAT_09191650);
    FUN_03f5c2a4(&DAT_0921ccb0);
    FUN_03f5c2a4(&DAT_09205100);
    FUN_03f5c2a4(&DAT_092050e0);
    FUN_03f5c2a4(&DAT_092110e8);
    FUN_03f5c2a4(&DAT_0920a910);
    FUN_03f5c2a4(&DAT_0921cca8);
    FUN_03f5c2a4(&DAT_09218d00);
    FUN_03f5c2a4(&DAT_092189b8);
    DAT_0951708b = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_90 = 0;
  pplStack_88 = (long **)0x0;
  local_80 = (long **)0x0;
  local_94 = 0;
  if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = **(undefined8 **)(DAT_09182c50 + 0xb8);
  lVar5 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb620(lVar5,uVar15,DAT_091a86a0);
  uVar15 = DAT_09171ea8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = System_Type__GetTypeFromHandle(uVar15,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar6 = System_Enum__GetValues(uVar15,0);
  if (lVar6 != 0) {
    plVar7 = (long *)System_Array__GetEnumerator(lVar6,0);
    pplStack_a8 = &local_68;
    local_b0 = 0;
    local_a0 = &local_70;
    do {
      local_68 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04279e1c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_04279e1c:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_68;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
        local_70 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_04279f78;
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_04279f50;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04279f38;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_04279e84;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_04279e84:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_09186c38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar9 = (undefined4 *)thunk_FUN_03f99594();
      local_c8 = CONCAT44(local_c8._4_4_,*puVar9);
      uVar15 = FUN_03f5c42c(DAT_09186c38,&local_c8);
      uVar15 = System_String__Format(DAT_09205100,uVar15,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar15,uVar15);
      }
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      plVar7 = local_68;
    } while( true );
  }
  goto LAB_0427aa30;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04279f38:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04279f6c;
    }
  }
LAB_04279f50:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_04279f6c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_04279f78:
  uVar15 = DAT_091719a0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = System_Type__GetTypeFromHandle(uVar15,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar6 = System_Enum__GetValues(uVar15,0);
  if (lVar6 != 0) {
    plVar7 = (long *)System_Array__GetEnumerator(lVar6,0);
    pplStack_a8 = &local_68;
    local_b0 = 0;
    local_a0 = &local_70;
    do {
      local_68 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0427a05c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0427a05c:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_68;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
        local_70 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_0427a1b4;
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_0427a18c;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0427a174;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0427a0c4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_0427a0c4:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_09184ed8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar9 = (undefined4 *)thunk_FUN_03f99594();
      local_c8 = CONCAT44(local_c8._4_4_,*puVar9);
      uVar15 = FUN_03f5c42c(DAT_09184ed8,&local_c8);
      uVar15 = System_String__Format(DAT_092050e0,uVar15,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar15,uVar15);
      }
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      plVar7 = local_68;
    } while( true );
  }
  goto LAB_0427aa30;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0427a174:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0427a1a8;
    }
  }
LAB_0427a18c:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0427a1a8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0427a1b4:
  uVar15 = DAT_09171a88;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = System_Type__GetTypeFromHandle(uVar15,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar6 = System_Enum__GetValues(uVar15,0);
  if (lVar6 != 0) {
    plVar7 = (long *)System_Array__GetEnumerator(lVar6,0);
    pplStack_a8 = &local_68;
    local_b0 = 0;
    local_a0 = &local_70;
    do {
      local_68 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0427a2a8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0427a2a8:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_68;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
        local_70 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_0427a408;
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_0427a3e0;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0427a3c8;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0427a310;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_0427a310:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_09185158 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar9 = (undefined4 *)thunk_FUN_03f99594();
      local_c8 = DAT_09185158;
      local_b8 = *puVar9;
      uStack_c0 = 0xffffffffffffffff;
      uVar15 = System_Enum__ToString(&local_c8,0);
      uVar15 = System_String__Concat(DAT_0920a910,uVar15,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar15,uVar15);
      }
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      plVar7 = local_68;
    } while( true );
  }
  goto LAB_0427aa30;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0427a3c8:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0427a3fc;
    }
  }
LAB_0427a3e0:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0427a3fc:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0427a408:
  uVar15 = DAT_09173a58;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = System_Type__GetTypeFromHandle(uVar15,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar6 = System_Enum__GetValues(uVar15,0);
  if (lVar6 != 0) {
    plVar7 = (long *)System_Array__GetEnumerator(lVar6,0);
    pplStack_a8 = &local_68;
    local_b0 = 0;
    local_a0 = &local_70;
    do {
      local_68 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0427a4f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0427a4f8:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_68;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
        local_70 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_0427a678;
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_0427a650;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0427a638;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0427a560;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_0427a560:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_09191650 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar9 = (undefined4 *)thunk_FUN_03f99594();
      uVar16 = *puVar9;
      iVar3 = 0;
      do {
        local_c8 = CONCAT44(local_c8._4_4_,uVar16);
        uVar15 = FUN_03f5c42c(DAT_09191650,&local_c8);
        local_cc = iVar3;
        uVar10 = FUN_03f5c42c(DAT_09535420,&local_cc);
        uVar15 = System_String__Format(DAT_092110e8,uVar15,uVar10,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar15,uVar15);
        }
        FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
        iVar3 = iVar3 + 1;
        plVar7 = local_68;
      } while (iVar3 != 10);
    } while( true );
  }
  goto LAB_0427aa30;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0427a638:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0427a66c;
    }
  }
LAB_0427a650:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0427a66c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0427a678:
  lVar6 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(lVar6,DAT_091a8698);
  uVar13 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar13 & 1) != 0) {
    lVar11 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) goto LAB_0427aa30;
    iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar11,0);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar15 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar11,iVar3,0);
        if (lVar6 == 0) goto LAB_0427aa30;
        FUN_053ec72c(lVar6,uVar15,DAT_091a86b8);
        iVar3 = iVar3 + 1;
        iVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar11,0);
      } while (iVar3 < iVar4);
    }
  }
  lVar11 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar11,DAT_0919f978);
  if (((param_1 != 0) && (lVar18 = *(long *)(param_1 + 0x10), lVar18 != 0)) &&
     (0 < (int)*(ulong *)(lVar18 + 0x18))) {
    uVar13 = 0;
    uVar12 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar17 = *(long *)(lVar18 + 0x20 + uVar13 * 8);
      if ((lVar17 != 0) &&
         (uVar12 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar17 + 0x10),0), (uVar12 & 1) == 0
         )) {
        if (lVar6 == 0) goto LAB_0427aa30;
        FUN_053ec72c(lVar6,*(undefined8 *)(lVar17 + 0x10),DAT_091a86b8);
        if (*(long *)(lVar17 + 0x20) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)(*(long *)(lVar17 + 0x20) + 0x18);
        }
        uVar15 = *(undefined8 *)(lVar17 + 0x10);
        uVar1 = *(undefined4 *)(lVar17 + 0x38);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = System_Math__Max(uVar1,uVar16,0);
        if (lVar11 == 0) goto LAB_0427aa30;
        FUN_06fca434(lVar11,uVar15,iVar3 + 2,DAT_0919f9f0);
      }
      uVar12 = (ulong)*(uint *)(lVar18 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar18 + 0x18));
  }
  if (lVar6 != 0) {
    FUN_053ec0b0(&local_b0,lVar6,DAT_091a86d0);
    pplStack_88 = pplStack_a8;
    local_90 = local_b0;
    local_80 = local_a0;
    pplStack_a8 = (long **)&local_90;
    local_b0 = 0;
    while( true ) {
      do {
        uVar13 = FUN_071bb7b4(&local_90,DAT_091a4588);
        pplVar2 = local_80;
        if ((uVar13 & 1) == 0) {
          FUN_071bb7b0(&local_90,DAT_091a4580);
          return lVar5;
        }
        uVar13 = System_String__IsNullOrEmpty(local_80,0);
      } while ((uVar13 & 1) != 0);
      uVar15 = System_String__Concat(DAT_0921ccb0,pplVar2,0);
      if (lVar5 == 0) break;
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      uVar15 = System_String__Concat(DAT_0921cca8,pplVar2,0);
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      uVar15 = System_String__Concat(DAT_092189b8,pplVar2,0);
      FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fcbf70(lVar11,pplVar2,&local_94,DAT_0919f9c8);
      if (-1 < local_94) {
        iVar3 = 0;
        do {
          local_c8 = CONCAT44(local_c8._4_4_,iVar3);
          uVar15 = FUN_03f5c42c(DAT_09535420,&local_c8);
          uVar15 = System_String__Format(DAT_09218d00,pplVar2,uVar15,0);
          FUN_053ec72c(lVar5,uVar15,DAT_091a86b8);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_94);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar15,uVar15);
  }
LAB_0427aa30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

