// rea decompile_all
// name: MessagePack.MessagePackSerializer$$ToLZ4BinaryCore
// address: 0x7392468
// body: available
// range: 0x7392468-0x7392ba3 inclusive
// range: 0x7392bb0-0x7392c4b inclusive
// range: 0x7392c98-0x7392d13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73925f0 to 0x739f7c8 MessagePack.MessagePackWriter$$WriteRaw (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73927e4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392b10 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392ba0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392c1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392c34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392c48 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392d10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer__ToLZ4BinaryCore
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_108;
  long *plStack_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09520ae3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091a2470);
    FUN_03f5c2a4(&DAT_091a2478);
    FUN_03f5c2a4(&DAT_09187588);
    FUN_03f5c2a4(&DAT_091d2f08);
    FUN_03f5c2a4(&DAT_091d3648);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091b9648);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b96e8);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba918);
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520ae3 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = FUN_05fdc318(param_1,DAT_091b9720);
  if (lVar5 < param_4) {
    MessagePack_MessagePackWriter__WriteRaw(param_2,param_1,0);
    return;
  }
  if (param_3 == 2) {
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_05fdde6c(&local_108,param_1,DAT_091b96e8);
    uStack_90 = CONCAT44(uStack_f4,local_f8);
    uStack_98 = plStack_100;
    local_a0 = local_108;
    uStack_88 = uStack_f0;
    uStack_78 = uStack_e0;
    local_80 = local_e8;
    local_70 = local_d8;
    uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
    if ((uVar6 & 1) == 0) {
      iVar4 = 0;
      uVar6 = 0x62;
    }
    else {
      iVar4 = 0;
      uVar2 = 0;
      do {
        uStack_a8 = local_70;
        local_b0 = uStack_78;
        if (iVar4 == -0x7fffffff) goto LAB_07392c0c;
        uVar3 = FUN_05fd6900(&local_b0,DAT_091b9648);
        if (*(int *)(DAT_09188188 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188188);
        }
        if (uVar3 < 0x80) {
          uVar6 = 1;
        }
        else if (uVar3 < 0x100) {
          uVar6 = 2;
        }
        else {
          uVar11 = 3;
          if (0xffff < uVar3) {
            uVar11 = 5;
          }
          uVar6 = (ulong)uVar11;
        }
        if (0x7fffffff < (long)(uVar6 + (long)(int)uVar2)) goto LAB_07392c0c;
        uVar2 = (int)uVar6 + uVar2;
        uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
        iVar4 = iVar4 + -1;
      } while ((uVar6 & 1) != 0);
      if (iVar4 == -0x7fffffff) goto LAB_07392c0c;
      uVar6 = (ulong)uVar2 << 0x20 | 0x62;
      iVar4 = -iVar4;
    }
    MessagePack_MessagePackWriter__WriteArrayHeader(param_2,iVar4 + 1,0);
    if ((DAT_09520a18 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc008);
      DAT_09520a18 = 1;
    }
    MessagePack_MessagePackWriter__WriteExtensionFormatHeader(param_2,uVar6,0);
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_05fdde6c(&local_108,param_1,DAT_091b96e8);
    uStack_98 = plStack_100;
    local_a0 = local_108;
    uStack_88 = uStack_f0;
    uStack_78 = uStack_e0;
    local_80 = local_e8;
    local_70 = local_d8;
    uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
    uVar9 = local_c0;
    uVar10 = uStack_b8;
    local_c0 = uStack_78;
    uStack_b8 = local_70;
    while (uStack_78 = local_c0, local_70 = uStack_b8, (uVar6 & 1) != 0) {
      uVar1 = FUN_05fd6900(&local_c0,DAT_091b9648);
      FUN_04264ed8(param_2,uVar1,0);
      uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
      uVar9 = local_c0;
      uVar10 = uStack_b8;
      local_c0 = uStack_78;
      uStack_b8 = local_70;
    }
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      local_c0 = uVar9;
      uStack_b8 = uVar10;
      FUN_03f5c424();
      uVar9 = local_c0;
      uVar10 = uStack_b8;
    }
    uStack_b8 = uVar10;
    local_c0 = uVar9;
    FUN_05fdde6c(&local_108,param_1,DAT_091b96e8);
    uStack_90 = CONCAT44(uStack_f4,local_f8);
    uStack_98 = plStack_100;
    local_a0 = local_108;
    uStack_88 = uStack_f0;
    uStack_78 = uStack_e0;
    local_80 = local_e8;
    local_70 = local_d8;
    uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
    local_d0 = uStack_78;
    uStack_c8 = local_70;
    while ((uVar6 & 1) != 0) {
      uStack_78 = local_d0;
      local_70 = uStack_c8;
      uVar1 = FUN_05fd6900(&local_d0,DAT_091b9648);
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187588);
      }
      iVar4 = MessagePack_LZ4_LZ4Codec__MaximumOutputLength(uVar1,0);
      if (0x7ffffffa < iVar4) goto LAB_07392c0c;
      auVar12 = MessagePack_MessagePackWriter__GetSpan(param_2,iVar4 + 5,0);
      auVar13 = FUN_04a6d544(&local_d0,DAT_091b9650);
      if ((int)auVar12._8_4_ < -0x7ffffffb) goto LAB_07392c0c;
      if (auVar12._8_4_ < 5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      iVar4 = MessagePack_LZ4_LZ4Codec__Encode
                        (auVar13._0_8_,auVar13._8_8_,auVar12._0_8_ + 5,
                         auVar12._8_8_ + 0xfffffffbU & 0xffffffff,0);
      if (*(int *)(DAT_09188188 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188188);
      }
      MessagePack_MessagePackSerializer__WriteBin32Header(iVar4,auVar12._0_8_,auVar12._8_8_);
      if (0x7ffffffa < iVar4) goto LAB_07392c0c;
      MessagePack_MessagePackWriter__Advance(param_2,iVar4 + 5,0);
      uVar6 = FUN_07195480(&local_a0,DAT_091a2470);
      local_d0 = uStack_78;
      uStack_c8 = local_70;
    }
  }
  else {
    if (param_3 != 1) {
      local_108 = thunk_FUN_03fc39d4(&DAT_09188150);
      plStack_100 = (long *)0xffffffffffffffff;
      local_f8 = param_3;
      uVar9 = System_Enum__ToString(&local_108,0);
      uVar10 = thunk_FUN_03fc39d4(&DAT_092052a8);
      uVar9 = System_String__Concat(uVar10,uVar9,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar10 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar10,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091d3648);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar9);
    }
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = FUN_05fdc318(param_1,DAT_091b9720);
    if (0x7fffffff < (long)uVar6) {
LAB_07392c0c:
      uVar9 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,DAT_091d3648);
    }
    if (*(int *)(DAT_09187588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = MessagePack_LZ4_LZ4Codec__MaximumOutputLength(uVar6 & 0xffffffff,0);
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09175020);
    }
    lVar5 = DAT_09197190;
    lVar7 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    plVar8 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_68 = (**(code **)(*plVar8 + 0x178))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x180));
    plStack_100 = &local_68;
    local_108 = 0;
    auVar12 = FUN_0610892c(local_68,DAT_091ba938);
    if (*(int *)(DAT_09188188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = MessagePack_MessagePackSerializer__LZ4Operation
                      (param_1,auVar12._0_8_,auVar12._8_8_,
                       *(undefined8 *)(*(long *)(DAT_09188188 + 0xb8) + 8));
    if (0xfffffffa < uVar2) {
      uVar9 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,DAT_091d3648);
    }
    MessagePack_MessagePackWriter__WriteExtensionFormatHeader
              (param_2,(ulong)(uVar2 + 5) << 0x20 | 99,0);
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = FUN_05fdc318(param_1,DAT_091b9720);
    if (0x7fffffff < lVar5) {
      uVar9 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,DAT_091d3648);
    }
    MessagePack_MessagePackWriter__WriteInt32(param_2,lVar5,0);
    lVar5 = local_68;
    if (*(long *)(DAT_091d2f08 + 0x38) == 0) {
      FUN_03f95ac8();
    }
    if (lVar5 == 0) {
      if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar5 = 0;
      uVar2 = 0;
    }
    else {
      if (*(uint *)(lVar5 + 0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar5 = lVar5 + 0x20;
    }
    auVar12 = FUN_06108530(lVar5,uVar2,DAT_091ba930);
    MessagePack_MessagePackWriter__WriteRaw(param_2,auVar12._0_8_,auVar12._8_8_,0);
    FUN_03eab060(&local_108);
  }
  return;
}

