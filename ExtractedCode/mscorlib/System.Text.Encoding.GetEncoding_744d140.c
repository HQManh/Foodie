// rea decompile_all
// name: System.Text.Encoding$$GetEncoding
// address: 0x744d140
// body: available
// range: 0x744d140-0x744d897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744d554 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d710 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d718 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d71c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d75c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d820 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744d894 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0744d714) */

long System_Text_Encoding__GetEncoding(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 *local_50;
  uint local_48;
  char local_44 [4];
  undefined8 local_40;
  long local_38;
  
  if ((DAT_095210c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d778);
    FUN_03f5c2a4(&DAT_0919d780);
    FUN_03f5c2a4(&DAT_0919d770);
    FUN_03f5c2a4(&DAT_09176440);
    FUN_03f5c2a4(&DAT_09183fc0);
    FUN_03f5c2a4(&DAT_09183fc8);
    FUN_03f5c2a4(&DAT_09183fd0);
    FUN_03f5c2a4(&DAT_09183fb8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918c548);
    FUN_03f5c2a4(&DAT_09203510);
    DAT_095210c8 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_44[0] = '\0';
  if (*(int *)(DAT_09183fc8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_38 = System_Text_EncodingProvider__GetEncodingFromProvider(param_1,0);
  if (local_38 != 0) {
    return local_38;
  }
  if (0xffff < param_1) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar2 = FUN_03f5c394(uVar2,2);
    local_60 = (ulong)local_60._4_4_ << 0x20;
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_60);
    FUN_039b1d98(uVar2);
    FUN_039b0da0(uVar2,uVar5);
    FUN_039af17c(uVar2,0,uVar5);
    local_48 = 0xffff;
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_48);
    FUN_039b0da0(uVar2,uVar5);
    FUN_039af17c(uVar2,1,uVar5);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar2 = System_Environment__GetResourceString(uVar5,uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09218ea0);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091c8c90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
  local_40 = System_Text_Encoding__get_InternalSyncObject();
  pcStack_58 = local_44;
  local_44[0] = '\0';
  local_60 = 0;
  local_50 = &local_40;
  System_Threading_Monitor__Enter(local_40,local_44,0);
  lVar7 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
  thunk_FUN_03f6a5cc();
  if (lVar7 != 0) {
    lVar7 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
    thunk_FUN_03f6a5cc();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06ef1fe8(lVar7,param_1,&local_38,DAT_0919d780);
  }
  if (local_38 == 0) {
    lVar7 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
    thunk_FUN_03f6a5cc();
    if (lVar7 == 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09176440);
      FUN_06eef750(uVar2,DAT_0919d770);
      thunk_FUN_03f6a5cc();
      puVar3 = (undefined8 *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    lVar7 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
    thunk_FUN_03f6a5cc();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_06ef1fe8(lVar7,param_1,&local_38,DAT_0919d780);
    if ((uVar4 & 1) != 0) {
      iVar8 = 0xb;
      lVar7 = local_38;
      goto LAB_0744d5d8;
    }
    if (param_1 < 0x4b2) {
      if (param_1 < 4) {
        if (param_1 != 0) {
LAB_0744d728:
          uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
          lVar7 = FUN_03f5c394(uVar2,1);
          local_48 = param_1;
          uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
          if (lVar7 != 0) {
            FUN_039b0da0(lVar7,uVar2);
            FUN_039af17c(lVar7,0,uVar2);
            uVar2 = thunk_FUN_03fc39d4(&DAT_092262b0);
            uVar2 = System_Environment__GetResourceString(uVar2,lVar7,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar5 = thunk_FUN_03f9944c();
            uVar6 = thunk_FUN_03fc39d4(&DAT_09218ea0);
            System_ArgumentException___ctor(uVar5,uVar2,uVar6,0);
            uVar2 = thunk_FUN_03fc39d4(&DAT_091c8c90);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_38 = System_Text_Encoding__get_Default();
      }
      else if (param_1 == 0x4b0) {
        local_38 = System_Text_Encoding__get_Unicode();
      }
      else {
        if (param_1 != 0x4b1) {
          if (param_1 == 0x2a) goto LAB_0744d728;
          goto LAB_0744d3dc;
        }
        local_38 = System_Text_Encoding__get_BigEndianUnicode();
      }
    }
    else if (param_1 >> 5 < 0x275) {
      if (param_1 == 12000) {
        local_38 = System_Text_Encoding__get_UTF32();
      }
      else if (param_1 == 0x2ee1) {
        lVar7 = thunk_FUN_03f9944c(DAT_0918c548);
        System_Text_UTF32Encoding___ctor(lVar7,1,1,0);
        local_38 = lVar7;
      }
      else if (param_1 == 0x4e9f) {
        local_38 = System_Text_Encoding__get_ASCII();
      }
      else {
LAB_0744d3dc:
        if (*(int *)(DAT_09183fd0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = System_Globalization_EncodingTable__GetCodePageDataItem(param_1,0);
        if (lVar7 == 0) {
          uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
          lVar7 = FUN_03f5c394(uVar2,1);
          local_48 = param_1;
          uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
          if (lVar7 != 0) {
            FUN_039b0da0(lVar7,uVar2);
            FUN_039af17c(lVar7,0,uVar2);
            uVar2 = thunk_FUN_03fc39d4(&DAT_09208a68);
            uVar2 = System_Environment__GetResourceString(uVar2,lVar7,0);
            thunk_FUN_03fc39d4(&DAT_09188920);
            uVar5 = thunk_FUN_03f9944c();
            System_NotSupportedException___ctor(uVar5,uVar2,0);
            uVar2 = thunk_FUN_03fc39d4(&DAT_091c8c90);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((param_1 & 0xffff) == 12000) {
          local_38 = System_Text_Encoding__get_UTF32();
        }
        else if ((param_1 & 0xffff) == 0x2ee1) {
          lVar7 = thunk_FUN_03f9944c(DAT_0918c548);
          System_Text_UTF32Encoding___ctor(lVar7,1,1,0);
          local_38 = lVar7;
        }
        else {
          lVar7 = FUN_03f5c394(DAT_09180318,1);
          local_48 = param_1;
          uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_039b0da0(lVar7,uVar2);
          FUN_039af17c(lVar7,0,uVar2);
          if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Text_EncodingHelper__InvokeI18N(DAT_09203510,lVar7);
          local_38 = FUN_039bb5f0(uVar2,DAT_09183fb8);
          if (local_38 == 0) {
            local_48 = param_1;
            uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
            uVar5 = thunk_FUN_03fc39d4(&DAT_092013c0);
            uVar2 = System_String__Format(uVar5,uVar2,0);
            thunk_FUN_03fc39d4(&DAT_09188920);
            uVar5 = thunk_FUN_03f9944c();
            System_NotSupportedException___ctor(uVar5,uVar2,0);
            uVar2 = thunk_FUN_03fc39d4(&DAT_091c8c90);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar2);
          }
        }
      }
    }
    else {
      uVar1 = param_1 & 0xffff;
      if (uVar1 == 0x6faf) {
        local_38 = System_Text_Encoding__get_Latin1();
      }
      else if (uVar1 == 65000) {
        local_38 = System_Text_Encoding__get_UTF7();
      }
      else {
        if (uVar1 != 0xfde9) goto LAB_0744d3dc;
        local_38 = System_Text_Encoding__get_UTF8();
      }
    }
    lVar7 = *(long *)(*(long *)(DAT_09183fb8 + 0xb8) + 0x40);
    thunk_FUN_03f6a5cc();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06ef050c(lVar7,param_1,local_38,DAT_0919d778);
  }
  lVar7 = 0;
  iVar8 = 0x25;
LAB_0744d5d8:
  if (local_44[0] != '\0') {
    System_Threading_Monitor__Exit(*local_50,0);
  }
  if ((iVar8 == 0x25) || (iVar8 == 0)) {
    lVar7 = local_38;
  }
  return lVar7;
}

