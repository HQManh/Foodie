// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$ValidSelection
// address: 0x44203d8
// body: available
// range: 0x44203d8-0x4420b33 inclusive
// range: 0x4420b94-0x4421123 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4420b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44210ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44210f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44210f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44210f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421100 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442110c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421118 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421120 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0442111c) */
/* WARNING: Removing unreachable block (ram,0x044210fc) */
/* WARNING: Removing unreachable block (ram,0x04421114) */

uint CookingGraph_CompositeStructureTranslator__ValidSelection
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint extraout_w8;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_c0;
  long **pplStack_b8;
  ulong local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09517f36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9348);
    FUN_03f5c2a4(&DAT_091c9350);
    FUN_03f5c2a4(&DAT_091c98f0);
    FUN_03f5c2a4(&DAT_091ca9c8);
    FUN_03f5c2a4(&DAT_091ca7d0);
    FUN_03f5c2a4(&DAT_091ca7d8);
    FUN_03f5c2a4(&DAT_091a2600);
    FUN_03f5c2a4(&DAT_091a34b8);
    FUN_03f5c2a4(&DAT_091a34c0);
    FUN_03f5c2a4(&DAT_091a2608);
    FUN_03f5c2a4(&DAT_091a2610);
    FUN_03f5c2a4(&DAT_091a34c8);
    FUN_03f5c2a4(&DAT_091792e8);
    FUN_03f5c2a4(&DAT_09177fc0);
    FUN_03f5c2a4(&DAT_09177fb8);
    FUN_03f5c2a4(&DAT_09179b80);
    FUN_03f5c2a4(&DAT_09179b88);
    FUN_03f5c2a4(&DAT_091a82c8);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3b8);
    FUN_03f5c2a4(&DAT_0917aa60);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b3f8);
    FUN_03f5c2a4(&DAT_0917b590);
    FUN_03f5c2a4(&DAT_091abbf0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6758);
    FUN_03f5c2a4(&DAT_091e6760);
    FUN_03f5c2a4(&DAT_091e6768);
    FUN_03f5c2a4(&DAT_091e6770);
    FUN_03f5c2a4(&DAT_091e6778);
    FUN_03f5c2a4(&DAT_091e6780);
    FUN_03f5c2a4(&DAT_091e6798);
    FUN_03f5c2a4(&DAT_091e67a0);
    FUN_03f5c2a4(&DAT_0918ecd0);
    FUN_03f5c2a4(&DAT_091e67a8);
    FUN_03f5c2a4(&DAT_0918ecd8);
    FUN_03f5c2a4(&DAT_091e67b0);
    FUN_03f5c2a4(&DAT_091e67b8);
    FUN_03f5c2a4(&DAT_0918ece0);
    FUN_03f5c2a4(&DAT_0918ecb8);
    DAT_09517f36 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = (long *)0x0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918ecd0);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) goto LAB_04421110;
  *(undefined8 *)(lVar3 + 0x10) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_4);
  if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
  lVar13 = puVar9[4];
  if (lVar13 == 0) {
    if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
    }
    uVar14 = *puVar9;
    lVar13 = thunk_FUN_03f9944c(DAT_09179b80);
    FUN_05330e2c(lVar13,uVar14,DAT_091e6758,0);
    plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x20);
    *plVar4 = lVar13;
    thunk_FUN_03f5d7b8(plVar4,lVar13);
  }
  uVar14 = FUN_04af8368(param_2,lVar13,DAT_091ca7d0);
  uVar5 = thunk_FUN_03f9944c(DAT_09177fb8);
  FUN_05322d94(uVar5,lVar3,DAT_091e6798,0);
  uVar6 = FUN_04ab6f28(uVar14,uVar5,DAT_091c9348);
  if ((uVar6 & 1) != 0) {
    if (param_1 == 0) goto LAB_04421110;
    if (*(char *)(param_1 + 0x39) != '\0') {
      if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
      lVar13 = puVar9[5];
      if (lVar13 == 0) {
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        }
        uVar14 = *puVar9;
        lVar13 = thunk_FUN_03f9944c(DAT_09179b80);
        FUN_05330e2c(lVar13,uVar14,DAT_091e6760,0);
        plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x28);
        *plVar4 = lVar13;
        thunk_FUN_03f5d7b8(plVar4,lVar13);
      }
      uVar14 = FUN_04af8368(param_2,lVar13,DAT_091ca7d0);
      uVar5 = thunk_FUN_03f9944c(DAT_09177fb8);
      FUN_05322d94(uVar5,lVar3,DAT_091e67a0,0);
      uVar6 = FUN_04ab6f28(uVar14,uVar5,DAT_091c9348);
      if ((uVar6 & 1) == 0) goto LAB_044210bc;
    }
    lVar13 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6ef0(lVar13,param_3,DAT_091a82a0);
    if (lVar13 == 0) goto LAB_04421110;
    FUN_053d79cc(&local_c0,lVar13,DAT_091a82c8);
    puStack_78 = pplStack_b8;
    local_80 = local_c0;
    local_70 = local_b0;
    do {
      uVar7 = FUN_071ad430(&local_80,DAT_091a34c0);
      uVar6 = local_70;
      if ((uVar7 & 1) == 0) {
        iVar11 = 0xe;
        break;
      }
      iVar11 = (int)local_70;
      if ((int)local_70 < 0) {
LAB_04420b94:
        iVar11 = 10;
        break;
      }
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar13 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b3f8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04420920;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3f8,0);
LAB_04420920:
      iVar2 = (*(code *)*puVar9)(param_2,puVar9[1]);
      if (iVar2 <= iVar11) goto LAB_04420b94;
      lVar13 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b590) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04420988;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b590,0);
LAB_04420988:
      lVar13 = (*(code *)*puVar9)(param_2,uVar6 & 0xffffffff,puVar9[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_c0,*(long *)(lVar13 + 0x38),DAT_091abbf0);
      local_90 = local_b0;
      puStack_98 = pplStack_b8;
      local_a0 = local_c0;
      local_c0 = 0;
      pplStack_b8 = (long **)&local_a0;
      do {
        uVar6 = FUN_071bd28c(&local_a0,DAT_091a2608);
        if ((uVar6 & 1) == 0) {
          iVar11 = 6;
          goto LAB_04420b08;
        }
        lVar13 = thunk_FUN_03f9944c(DAT_0918ecd8);
        System_Object___ctor(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(lVar13 + 0x18) = lVar3;
        thunk_FUN_03f5d7b8((long *)(lVar13 + 0x18),lVar3);
        *(ulong *)(lVar13 + 0x10) = local_90;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        lVar12 = puVar9[6];
        if (lVar12 == 0) {
          if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
          }
          uVar14 = *puVar9;
          lVar12 = thunk_FUN_03f9944c(DAT_09179b88);
          FUN_05330e2c(lVar12,uVar14,DAT_091e6768,0);
          plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x30);
          *plVar4 = lVar12;
          thunk_FUN_03f5d7b8(plVar4,lVar12);
        }
        uVar14 = FUN_04af8368(param_2,lVar12,DAT_091ca7d8);
        uVar5 = thunk_FUN_03f9944c(DAT_09177fc0);
        FUN_05322d94(uVar5,lVar13,DAT_091e67a8,0);
        uVar6 = FUN_04ab6f28(uVar14,uVar5,DAT_091c9350);
      } while ((uVar6 & 1) != 0);
      iVar11 = 10;
LAB_04420b08:
      FUN_071bd288(&local_a0,DAT_091a2600);
    } while ((iVar11 == 6) || (iVar11 == 0));
    FUN_071ad42c(&local_80,DAT_091a34b8);
    if (iVar11 != 0xe) {
      if (iVar11 == 10) goto LAB_044210bc;
      uVar8 = extraout_w8;
      if (iVar11 != 0) goto LAB_044210c0;
    }
    if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
    lVar13 = puVar9[7];
    if (lVar13 == 0) {
      if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
      }
      uVar14 = *puVar9;
      lVar13 = thunk_FUN_03f9944c(DAT_091792e8);
      FUN_05324070(lVar13,uVar14,DAT_091e6770,0);
      plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x38);
      *plVar4 = lVar13;
      thunk_FUN_03f5d7b8(plVar4,lVar13);
    }
    uVar14 = FUN_04afac50(param_2,lVar13,DAT_091ca9c8);
    plVar4 = (long *)FUN_04add4b8(uVar14,DAT_091c98f0);
    if (plVar4 == (long *)0x0) {
LAB_04421110:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a3b8) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04420cd4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a3b8,0);
LAB_04420cd4:
    local_a8 = (long *)(*(code *)*puVar9)(plVar4,puVar9[1]);
    pplStack_b8 = &local_a8;
    local_c0 = 0;
    do {
      do {
        do {
          do {
            plVar4 = local_a8;
            if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar13 = *local_a8;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04420d70;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,0);
LAB_04420d70:
            uVar6 = (*(code *)*puVar9)(plVar4,puVar9[1]);
            if ((uVar6 & 1) == 0) {
              bVar1 = false;
              goto LAB_04421048;
            }
            lVar13 = thunk_FUN_03f9944c(DAT_0918ece0);
            System_Object___ctor(lVar13,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(long *)(lVar13 + 0x18) = lVar3;
            thunk_FUN_03f5d7b8((long *)(lVar13 + 0x18),lVar3);
            plVar4 = local_a8;
            if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *local_a8;
            uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917aa60) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04420dfc;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917aa60,0);
LAB_04420dfc:
            lVar12 = (*(code *)*puVar9)(plVar4,puVar9[1]);
            plVar4 = (long *)(lVar13 + 0x10);
            *plVar4 = lVar12;
            thunk_FUN_03f5d7b8(plVar4);
            lVar12 = *plVar4;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar12,0,0);
          } while ((uVar6 & 1) != 0);
          if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while (*(char *)(*plVar4 + 0x39) == '\0');
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        lVar12 = puVar9[8];
        if (lVar12 == 0) {
          if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
          }
          uVar14 = *puVar9;
          lVar12 = thunk_FUN_03f9944c(DAT_09179b80);
          FUN_05330e2c(lVar12,uVar14,DAT_091e6778,0);
          plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x40);
          *plVar4 = lVar12;
          thunk_FUN_03f5d7b8(plVar4,lVar12);
        }
        uVar14 = FUN_04af8368(param_2,lVar12,DAT_091ca7d0);
        uVar5 = thunk_FUN_03f9944c(DAT_09177fb8);
        FUN_05322d94(uVar5,lVar13,DAT_091e67b8,0);
        uVar6 = FUN_04ab6f28(uVar14,uVar5,DAT_091c9348);
      } while ((uVar6 & 1) == 0);
      if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
      lVar12 = puVar9[9];
      if (lVar12 == 0) {
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar9 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        }
        uVar14 = *puVar9;
        lVar12 = thunk_FUN_03f9944c(DAT_09179b80);
        FUN_05330e2c(lVar12,uVar14,DAT_091e6780,0);
        plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x48);
        *plVar4 = lVar12;
        thunk_FUN_03f5d7b8(plVar4,lVar12);
      }
      uVar14 = FUN_04af8368(param_2,lVar12,DAT_091ca7d0);
      uVar5 = thunk_FUN_03f9944c(DAT_09177fb8);
      FUN_05322d94(uVar5,lVar13,DAT_091e67b0,0);
      uVar6 = FUN_04ab6f28(uVar14,uVar5,DAT_091c9348);
    } while ((uVar6 & 1) != 0);
    bVar1 = true;
LAB_04421048:
    plVar4 = local_a8;
    if (local_a8 != (long *)0x0) {
      lVar3 = *local_a8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185a58) {
            puVar9 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044210a8;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_044210a8:
      (*(code *)*puVar9)(plVar4,puVar9[1]);
    }
    if (!bVar1) {
      uVar8 = 1;
      goto LAB_044210c0;
    }
  }
LAB_044210bc:
  uVar8 = 0;
LAB_044210c0:
  return uVar8 & 1;
}

