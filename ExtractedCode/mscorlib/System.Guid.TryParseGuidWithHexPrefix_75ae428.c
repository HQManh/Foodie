// rea decompile_all
// name: System.Guid$$TryParseGuidWithHexPrefix
// address: 0x75ae428
// body: available
// range: 0x75ae428-0x75ae67b inclusive
// range: 0x75ae680-0x75ae9db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ae5a4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ae608 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ae678 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ae9d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ae9d8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Guid__TryParseGuidWithHexPrefix(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_a0 [3];
  uint local_84;
  undefined1 local_80 [16];
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80._0_8_ = param_1;
  local_80._8_8_ = param_2;
  if ((DAT_09521c9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f40);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ff608);
    FUN_03f5c2a4(&DAT_091ff4e8);
    FUN_03f5c2a4(&DAT_09225f48);
    FUN_03f5c2a4(&DAT_09226030);
    FUN_03f5c2a4(&DAT_09226020);
    FUN_03f5c2a4(&DAT_09201e78);
    FUN_03f5c2a4(&DAT_09226028);
    FUN_03f5c2a4(&DAT_091ff4e0);
    FUN_03f5c2a4(&DAT_09201f08);
    FUN_03f5c2a4(&DAT_091fb550);
    FUN_03f5c2a4(&DAT_09212d60);
    DAT_09521c9d = 1;
  }
  local_84 = 0;
  local_80 = System_Guid__EatAllWhitespace(param_1,param_2);
  psVar6 = local_80._0_8_;
  uVar12 = local_80._8_4_;
  uVar9 = DAT_09201f08;
  if ((uVar12 == 0) || (*psVar6 != 0x7b)) goto LAB_075ae8d8;
  uVar7 = System_Guid__IsHexPrefix(psVar6,local_80._8_8_,1);
  if ((uVar7 & 1) == 0) {
    puVar11 = &DAT_09226030;
LAB_075ae934:
    uVar10 = *puVar11;
    uVar9 = DAT_09201e78;
LAB_075ae8e4:
    System_Guid_GuidResult__SetFailure(param_3,2,uVar9,uVar10,0,0);
LAB_075ae8f0:
    uVar8 = 0;
  }
  else {
    if (uVar12 < 3) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uVar3 = FUN_04501efc(psVar6 + 3,uVar12 - 3,0x2c,DAT_091d2f40);
    if ((int)uVar3 < 1) {
LAB_075ae948:
      puVar11 = &DAT_091ff4e8;
LAB_075ae950:
      uVar9 = *puVar11;
LAB_075ae8d8:
      uVar10 = 0;
      goto LAB_075ae8e4;
    }
    if ((uVar12 < 3) || (uVar12 - 3 < uVar3)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = local_70 & 0xffffffff;
    uVar7 = System_Guid__StringToInt
                      (psVar6 + 3,uVar3,(long)&local_70 + 4,0xffffffff,0x1000,param_3,param_3);
    uVar8 = 0;
    if ((uVar7 & 1) != 0) {
      uVar7 = System_Guid__IsHexPrefix(local_80._0_8_,local_80._8_8_,uVar3 + 4);
      uVar9 = local_80._0_8_;
      if ((uVar7 & 1) == 0) {
        puVar11 = &DAT_09226028;
        goto LAB_075ae934;
      }
      uVar2 = local_80._8_4_;
      uVar3 = uVar3 + 6;
      if ((uint)local_80._8_4_ < uVar3) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      iVar4 = FUN_04501efc(uVar9 + (long)(int)uVar3 * 2,uVar2 - uVar3,0x2c,DAT_091d2f40);
      if (iVar4 < 1) goto LAB_075ae948;
      auVar14 = FUN_03eb56e8(local_80,uVar3,iVar4,DAT_091b97e8);
      local_70 = 0;
      *(undefined2 *)(param_3 + 4) = 0;
      uVar7 = System_Guid__StringToInt
                        (auVar14._0_8_,auVar14._8_8_,&local_70,0xffffffff,0x1000,(long)&local_70 + 4
                         ,param_3);
      uVar8 = 0;
      *(short *)(param_3 + 4) = (short)(local_70 >> 0x20);
      if ((uVar7 & 1) == 0) goto LAB_075ae8f4;
      uVar7 = System_Guid__IsHexPrefix(local_80._0_8_,local_80._8_8_,iVar4 + uVar3 + 1);
      if ((uVar7 & 1) == 0) {
        puVar11 = &DAT_09226020;
        goto LAB_075ae934;
      }
      iVar4 = iVar4 + uVar3 + 3;
      auVar14 = FUN_03eb5750(local_80,iVar4,DAT_091b97e0);
      iVar5 = FUN_04501efc(auVar14._0_8_,auVar14._8_8_,0x2c,DAT_091d2f40);
      if (iVar5 < 1) goto LAB_075ae948;
      auVar14 = FUN_03eb56e8(local_80,iVar4,iVar5,DAT_091b97e8);
      local_70 = 0;
      *(undefined2 *)(param_3 + 6) = 0;
      uVar7 = System_Guid__StringToInt
                        (auVar14._0_8_,auVar14._8_8_,&local_70,0xffffffff,0x1000,(long)&local_70 + 4
                         ,param_3);
      uVar8 = 0;
      *(short *)(param_3 + 6) = (short)(local_70 >> 0x20);
      if ((uVar7 & 1) == 0) goto LAB_075ae8f4;
      iVar5 = iVar5 + 1;
      uVar12 = iVar5 + iVar4;
      uVar9 = DAT_09201f08;
      if ((int)uVar12 < (int)local_80._8_4_) {
        if ((uint)local_80._8_4_ <= uVar12) {
LAB_075ae9c4:
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar8);
          }
          goto LAB_075ae9d8;
        }
        if (*(short *)(local_80._0_8_ + (long)(int)uVar12 * 2) == 0x7b) {
          lVar13 = 0;
          local_a0[0] = 0;
          do {
            uVar7 = System_Guid__IsHexPrefix(local_80._0_8_,local_80._8_8_,iVar4 + iVar5 + 1);
            if ((uVar7 & 1) == 0) {
              puVar11 = &DAT_09225f48;
              goto LAB_075ae934;
            }
            iVar4 = iVar4 + iVar5 + 3;
            auVar14 = FUN_03eb5750(local_80,iVar4,DAT_091b97e0);
            if (lVar13 == 7) {
              iVar5 = FUN_04501efc(auVar14._0_8_,auVar14._8_8_,0x7d,DAT_091d2f40);
              if (iVar5 < 1) {
                puVar11 = &DAT_091ff4e0;
                goto LAB_075ae950;
              }
            }
            else {
              iVar5 = FUN_04501efc(auVar14._0_8_,auVar14._8_8_,0x2c,DAT_091d2f40);
              if (iVar5 < 1) goto LAB_075ae948;
            }
            auVar14 = FUN_03eb56e8(local_80,iVar4,iVar5,DAT_091b97e8);
            local_70 = local_70 & 0xffffffff;
            uVar8 = System_Guid__StringToInt
                              (auVar14._0_8_,auVar14._8_8_,(long)&local_70 + 4,0xffffffff,0x1000,
                               &local_84,param_3);
            if ((uVar8 & 1) == 0) goto LAB_075ae8f0;
            if (0xff < local_84) {
              puVar11 = &DAT_09212d60;
              goto LAB_075ae950;
            }
            *(char *)((long)local_a0 + lVar13) = (char)local_84;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 8);
          uVar12 = iVar4 + iVar5 + 1;
          *(undefined8 *)(param_3 + 8) = local_a0[0];
          if ((int)uVar12 < (int)local_80._8_4_) {
            if ((uint)local_80._8_4_ <= uVar12) goto LAB_075ae9c4;
            if (*(short *)(local_80._0_8_ + (long)(int)uVar12 * 2) == 0x7d) {
              if (iVar4 + iVar5 == local_80._8_4_ - 2) {
                uVar8 = 1;
                goto LAB_075ae8f4;
              }
              puVar11 = &DAT_091fb550;
              goto LAB_075ae950;
            }
          }
          puVar11 = &DAT_091ff608;
          goto LAB_075ae950;
        }
      }
      goto LAB_075ae8d8;
    }
  }
LAB_075ae8f4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_075ae9d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

