// rea decompile_all
// name: MessagePack.Internal.AutomataKeyGen$$GetKey
// address: 0x73b1540
// body: available
// range: 0x73b1540-0x73b15fb inclusive
// range: 0x73b1600-0x73b164b inclusive
// range: 0x73b1650-0x73b16ef inclusive
// range: 0x73b16f4-0x73b1773 inclusive
// range: 0x73b1778-0x73b17bb inclusive
// range: 0x73b17c0-0x73b180b inclusive
// range: 0x73b1810-0x73b1887 inclusive
// range: 0x73b188c-0x73b18d7 inclusive
// range: 0x73b18dc-0x73b191f inclusive
// range: 0x73b1924-0x73b1993 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b15f8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1648 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b16ec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1770 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b17b8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1808 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1884 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b18d4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b191c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1990 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


ulong MessagePack_Internal_AutomataKeyGen__GetKey(long *param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  
  if ((DAT_09520bf5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520bf5 = 1;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 8) {
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        pbVar9 = (byte *)*param_1;
        uVar3 = (ulong)*pbVar9;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar7 = 0;
        pbVar9 = pbVar9 + 1;
      }
      else if (iVar1 == 2) {
        uVar3 = MessagePack_SafeBitConverter__ToUInt16(*param_1,param_1[1]);
        uVar7 = *(uint *)(param_1 + 1);
        if (uVar7 < 2) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar8 = *param_1;
        uVar3 = uVar3 & 0xffff;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar7 = uVar7 - 2;
        pbVar9 = (byte *)(lVar8 + 2);
      }
      else {
        if (iVar1 != 3) goto LAB_073b194c;
        pbVar9 = (byte *)*param_1;
        bVar2 = *pbVar9;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar3 = MessagePack_SafeBitConverter__ToUInt16(pbVar9 + 1,2);
        uVar7 = *(uint *)(param_1 + 1);
        if (uVar7 < 3) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        uVar3 = (ulong)bVar2 | (uVar3 & 0xffff) << 8;
        lVar8 = *param_1;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar7 = uVar7 - 3;
        pbVar9 = (byte *)(lVar8 + 3);
      }
    }
    else if (iVar1 < 6) {
      if (iVar1 == 4) {
        uVar3 = MessagePack_SafeBitConverter__ToUInt32(*param_1,param_1[1]);
        uVar7 = *(uint *)(param_1 + 1);
        uVar3 = uVar3 & 0xffffffff;
        if (uVar7 < 4) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar8 = *param_1;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar7 = uVar7 - 4;
        pbVar9 = (byte *)(lVar8 + 4);
      }
      else {
        if (iVar1 != 5) {
LAB_073b194c:
          thunk_FUN_03fc39d4(&DAT_09188180);
          uVar5 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_09208e98);
          MessagePack_MessagePackSerializationException___ctor(uVar5,uVar6,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091c3438);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar6);
        }
        pbVar9 = (byte *)*param_1;
        bVar2 = *pbVar9;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar3 = MessagePack_SafeBitConverter__ToUInt32(pbVar9 + 1,4);
        uVar7 = *(uint *)(param_1 + 1);
        if (uVar7 < 5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        uVar3 = (ulong)bVar2 | (uVar3 & 0xffffffff) << 8;
        lVar8 = *param_1;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uVar7 = uVar7 - 5;
        pbVar9 = (byte *)(lVar8 + 5);
      }
    }
    else if (iVar1 == 6) {
      uVar3 = MessagePack_SafeBitConverter__ToUInt16(*param_1,param_1[1]);
      uVar7 = *(uint *)(param_1 + 1);
      if (uVar7 < 2) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar8 = *param_1;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar4 = MessagePack_SafeBitConverter__ToUInt32(lVar8 + 2,uVar7 - 2);
      uVar7 = *(uint *)(param_1 + 1);
      if (uVar7 < 6) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      uVar3 = uVar3 & 0xffff | (uVar4 & 0xffffffff) << 0x10;
      lVar8 = *param_1;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar7 = uVar7 - 6;
      pbVar9 = (byte *)(lVar8 + 6);
    }
    else {
      if (iVar1 != 7) goto LAB_073b194c;
      pbVar9 = (byte *)*param_1;
      bVar2 = *pbVar9;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar3 = MessagePack_SafeBitConverter__ToUInt16(pbVar9 + 1,6);
      uVar7 = *(uint *)(param_1 + 1);
      if (uVar7 < 3) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar8 = *param_1;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar4 = MessagePack_SafeBitConverter__ToUInt32(lVar8 + 3,uVar7 - 3);
      uVar7 = *(uint *)(param_1 + 1);
      if (uVar7 < 7) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      uVar3 = (ulong)bVar2 | (uVar3 & 0xffff) << 8 | (uVar4 & 0xffffffff) << 0x18;
      lVar8 = *param_1;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar7 = uVar7 - 7;
      pbVar9 = (byte *)(lVar8 + 7);
    }
  }
  else {
    uVar3 = MessagePack_SafeBitConverter__ToInt64(*param_1,param_1[1]);
    uVar7 = *(uint *)(param_1 + 1);
    if (uVar7 < 8) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar8 = *param_1;
    if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uVar7 = uVar7 - 8;
    pbVar9 = (byte *)(lVar8 + 8);
  }
  *param_1 = (long)pbVar9;
  param_1[1] = (ulong)uVar7;
  return uVar3;
}

