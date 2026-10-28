// rea decompile_all
// name: System.Convert$$TryFromBase64Chars
// address: 0x7529288
// body: available
// range: 0x7529288-0x752953f inclusive
// range: 0x7529544-0x75295a7 inclusive
// range: 0x75295ac-0x752979f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75293e8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7529418 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752953c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75295a4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7529644 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7529674 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7529798 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752979c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Convert__TryFromBase64Chars
               (ushort *param_1,ulong param_2,long param_3,ulong param_4,int *param_5)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ushort *puVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 local_d0 [3];
  long local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  ulong local_a0;
  long local_98;
  int *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  uVar9 = param_2 & 0xffffffff00000000;
  uVar13 = param_4 & 0xffffffff00000000;
  local_90 = param_5;
  local_88 = param_3;
  if ((DAT_0952182e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba9a0);
    DAT_0952182e = 1;
  }
  local_a8 = local_d0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_d0[0] = 0;
  param_2 = param_2 & 0xffffffff;
  *local_90 = 0;
  uVar8 = 4;
LAB_07529378:
  puVar14 = param_1;
  if ((int)param_2 != 0) {
    do {
      local_a0 = uVar8;
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_Convert__TryDecodeFromUtf16
                        (puVar14,uVar9 | param_2,local_88,uVar13 + (param_4 & 0xffffffff),
                         (long)&local_70 + 4,&local_70);
      uVar6 = (uint)local_70;
      lVar10 = (long)(int)(uint)local_70;
      *local_90 = (uint)local_70 + *local_90;
      if ((uVar9 & 1) != 0) break;
      uVar12 = local_70._4_4_;
      lVar15 = (long)(int)local_70._4_4_;
      uVar16 = (uint)param_2;
      if (uVar16 < local_70._4_4_) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if ((uint)param_4 < uVar6) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar7 = *(long *)(DAT_091ba910 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (uVar16 == uVar12) {
LAB_07529784:
        if (*(long *)(local_98 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_0752979c;
      }
      puVar1 = puVar14 + lVar15;
      uVar3 = *puVar1;
      lVar7 = DAT_09182b88;
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        lVar7 = FUN_03f5c424();
      }
      uVar16 = uVar16 - uVar12;
      uVar12 = (uint)param_4 - uVar6;
      param_4 = (ulong)uVar12;
      local_88 = local_88 + lVar10;
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_07529544;
      uVar12 = uVar16;
      if (uVar16 != 1) {
        uVar2 = uVar16;
        if (uVar16 < 2) {
          uVar2 = 1;
        }
        uVar11 = 1;
        do {
          if (uVar2 == uVar11) goto LAB_07529784;
          uVar3 = puVar1[(int)uVar11];
          lVar7 = DAT_09182b88;
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            lVar7 = FUN_03f5c424();
          }
          if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) {
            uVar12 = uVar11;
            if (uVar16 < uVar11) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar16 != uVar11);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar16 = uVar16 - uVar12;
      param_2 = (ulong)uVar16;
      if (0x55555554 < uVar6 * -0x55555555 + 0x2aaaaaaa) {
        if (uVar16 == 0) break;
        goto LAB_0752973c;
      }
      puVar14 = puVar1 + (int)uVar12;
      uVar9 = 0;
      uVar13 = 0;
      uVar8 = local_a0;
      if (uVar16 == 0) break;
    } while( true );
  }
  goto LAB_0752974c;
LAB_07529544:
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = local_a0;
  puVar4 = local_a8;
  System_Convert__CopyToTempBufferWithoutWhiteSpace
            (puVar1,uVar16,local_a8,local_a0,(long)&local_78 + 4,&local_78);
  local_b0 = local_78 & 0xffffffff;
  if ((local_78 & 3) != 0) goto LAB_0752973c;
  if ((uint)uVar9 < (uint)local_78) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  auVar17 = FUN_06109338(puVar4,local_b0,DAT_091ba9a0);
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = System_Convert__TryDecodeFromUtf16
                    (auVar17._0_8_,auVar17._8_8_,local_88,param_4,(long)&local_80 + 4,&local_80);
  lVar10 = DAT_091b97e0;
  if ((uVar9 & 1) == 0) goto LAB_0752973c;
  uVar6 = (uint)local_80;
  lVar7 = (long)(int)(uint)local_80;
  local_a0 = (ulong)(int)local_78._4_4_;
  *local_90 = (uint)local_80 + *local_90;
  if (uVar16 < local_78._4_4_) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  local_b8 = lVar7;
  if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  uVar5 = local_a0;
  uVar13 = 0;
  uVar9 = 0;
  uVar16 = uVar16 - (int)local_a0;
  param_2 = (ulong)uVar16;
  param_4 = (ulong)(uVar12 - (int)local_b8);
  local_88 = local_88 + local_b8;
  uVar8 = local_b0;
  param_1 = puVar1 + local_a0;
  if (0x55555554 < (int)local_b8 * -0x55555555 + 0x2aaaaaaaU) goto code_r0x075296dc;
  goto LAB_07529378;
LAB_0752973c:
  lVar7 = 0;
  *local_90 = 0;
  goto LAB_07529750;
code_r0x075296dc:
  if ((int)uVar16 < 1) {
LAB_0752974c:
    lVar7 = 1;
  }
  else {
    uVar9 = 0;
    do {
      uVar3 = puVar14[uVar5 + lVar15 + uVar9];
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_0752973c;
      uVar9 = uVar9 + 1;
      lVar7 = 1;
    } while (uVar9 < param_2);
  }
LAB_07529750:
  if (*(long *)(local_98 + 0x28) == local_68) {
    return;
  }
LAB_0752979c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}

