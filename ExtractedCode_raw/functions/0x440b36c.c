// rea decompile_all
// name: CookingGraph.CookingBotFailureKnowledge$$MergeFailedCustomers
// address: 0x440b36c
// body: available
// range: 0x440b36c-0x440ba07 inclusive
// range: 0x440ba0c-0x440ba0f inclusive
// range: 0x440ba54-0x440bd33 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440ba04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440ba0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd18 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bd28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0440bd14) */
/* WARNING: Removing unreachable block (ram,0x0440bad4) */

void CookingGraph_CookingBotFailureKnowledge__MergeFailedCustomers(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_09517ed7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cd8);
    FUN_03f5c2a4(&DAT_091c9998);
    FUN_03f5c2a4(&DAT_091c9c68);
    FUN_03f5c2a4(&DAT_091ca138);
    FUN_03f5c2a4(&DAT_091cabb8);
    FUN_03f5c2a4(&DAT_091cac30);
    FUN_03f5c2a4(&DAT_091cb148);
    FUN_03f5c2a4(&DAT_091cb430);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09178648);
    FUN_03f5c2a4(&DAT_09178640);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a410);
    FUN_03f5c2a4(&DAT_0917aab8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abee0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091abed8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917bf10);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e6a60);
    FUN_03f5c2a4(&DAT_091e6a68);
    FUN_03f5c2a4(&DAT_091e6a70);
    FUN_03f5c2a4(&DAT_091e6a78);
    FUN_03f5c2a4(&DAT_0918ee88);
    FUN_03f5c2a4(&DAT_0918ee80);
    DAT_09517ed7 = 1;
  }
  plVar14 = (long *)(param_1 + 0x48);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lVar5 = DAT_091c9998;
  if (*plVar14 == 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917bf10);
    FUN_057e0400(lVar5,DAT_091abed8);
    *plVar14 = lVar5;
    thunk_FUN_03f5d7b8(plVar14,lVar5);
    lVar5 = DAT_091c9998;
  }
  DAT_091c9998 = lVar5;
  if (param_2 == (long *)0x0) {
    lVar10 = *(long *)(lVar5 + 0x38);
    if (lVar10 == 0) {
      FUN_03f95ac8(lVar5);
      lVar10 = *(long *)(lVar5 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    param_2 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar5 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_0917a410) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0440b62c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a410,0);
LAB_0440b62c:
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  local_88 = &local_68;
  local_90 = 0;
  do {
    local_68 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185b10) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0440b6c8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0440b6c8:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = *local_88;
      if (plVar7 == (long *)0x0) goto LAB_0440bac4;
      lVar5 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 == 0) goto LAB_0440ba9c;
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = thunk_FUN_03f9944c(DAT_0918ee88);
    System_Object___ctor(lVar5,0);
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *local_68;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917aab8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0440b740;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aab8,0);
LAB_0440b740:
    lVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar15 = (long *)(lVar5 + 0x10);
    *plVar15 = lVar10;
    thunk_FUN_03f5d7b8(plVar15);
    plVar7 = local_68;
    if (*plVar15 != 0) {
      lVar10 = *plVar14;
      uVar8 = thunk_FUN_03f9944c(DAT_09178640);
      FUN_05322d94(uVar8,lVar5,DAT_091e6a78,0);
      lVar5 = FUN_04ae5fd0(lVar10,uVar8,DAT_091c9c68);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_09182cd8);
        CookingGraph_CookingBotCustomerFailureMemory___ctor();
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(*plVar15 + 0x10);
        lVar10 = DAT_091abee0;
        lVar9 = *plVar14;
        if (lVar9 == 0) {
LAB_0440bd1c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0440bd1c;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          plVar7 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
          *plVar7 = lVar5;
          thunk_FUN_03f5d7b8(plVar7,lVar5);
        }
        else {
          FUN_057e0c68(lVar9,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(*plVar15 + 0x14);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar4 = System_Math__Max(1,uVar2,0);
      plVar7 = (long *)(lVar5 + 0x18);
      *(int *)(lVar5 + 0x14) = iVar4 + iVar1;
      if (*plVar7 == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar5,DAT_091b0558);
        *plVar7 = lVar5;
        thunk_FUN_03f5d7b8(plVar7,lVar5);
      }
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(*plVar15 + 0x18);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar5,DAT_091b0558);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      FUN_057e185c(&local_a8,lVar5,DAT_091b05a8);
      local_70 = local_98;
      puStack_78 = puStack_a0;
      local_80 = local_a8;
      local_a8 = 0;
      puStack_a0 = &local_80;
LAB_0440b938:
      uVar12 = FUN_071bd28c(&local_80,DAT_091a45a0);
      uVar8 = local_70;
      if ((uVar12 & 1) != 0) {
        uVar12 = System_String__IsNullOrEmpty(local_70,0);
        if ((uVar12 & 1) == 0) {
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar12 = FUN_057e1004(*plVar7,uVar8,DAT_091b0590);
          lVar5 = DAT_091b0570;
          if ((uVar12 & 1) == 0) {
            lVar10 = *plVar7;
            if (lVar10 != 0) {
              lVar9 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar3 = *(uint *)(lVar10 + 0x18);
                if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                  puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar6 = uVar8;
                  thunk_FUN_03f5d7b8(puVar6,uVar8);
                }
                else {
                  FUN_057e0c68(lVar10,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0440b938;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        goto LAB_0440b938;
      }
      FUN_071bd288(&local_80,DAT_091a4598);
      plVar7 = local_68;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0440bab8;
    }
  }
LAB_0440ba9c:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0440bab8:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_0440bac4:
  if (local_90 == 0) {
    lVar5 = *plVar14;
    if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
    lVar10 = puVar6[1];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar10 = thunk_FUN_03f9944c(DAT_09178640);
      FUN_05322d94(lVar10,uVar8,DAT_091e6a60,0);
      plVar7 = (long *)(*(long *)(DAT_0918ee80 + 0xb8) + 8);
      *plVar7 = lVar10;
      thunk_FUN_03f5d7b8(plVar7,lVar10);
    }
    uVar8 = FUN_04b0cafc(lVar5,lVar10,DAT_091cb430);
    if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ee80);
    }
    puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
    lVar5 = puVar6[2];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ee80);
        puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
      }
      uVar16 = *puVar6;
      lVar5 = thunk_FUN_03f9944c(DAT_09178648);
      FUN_053239c8(lVar5,uVar16,DAT_091e6a68,0);
      plVar7 = (long *)(*(long *)(DAT_0918ee80 + 0xb8) + 0x10);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
    }
    uVar8 = FUN_04aeb234(uVar8,lVar5,DAT_091ca138);
    if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ee80);
    }
    puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
    lVar5 = puVar6[3];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918ee80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ee80);
        puVar6 = *(undefined8 **)(DAT_0918ee80 + 0xb8);
      }
      uVar16 = *puVar6;
      lVar5 = thunk_FUN_03f9944c(DAT_09178648);
      FUN_053239c8(lVar5,uVar16,DAT_091e6a70,0);
      plVar7 = (long *)(*(long *)(DAT_0918ee80 + 0xb8) + 0x18);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
    }
    uVar8 = FUN_04b038e4(uVar8,lVar5,DAT_091cac30);
    uVar8 = FUN_04b02940(uVar8,0x20,DAT_091cabb8);
    lVar5 = FUN_04b08b78(uVar8,DAT_091cb148);
    *plVar14 = lVar5;
    thunk_FUN_03f5d7b8(plVar14,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

