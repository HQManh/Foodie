// rea decompile_all
// name: MessagePack.Formatters.DecimalFormatter$$Deserialize
// address: 0x73e6538
// body: available
// range: 0x73e6538-0x73e6983 inclusive
// range: 0x73e698c-0x73e6b57 inclusive
// range: 0x73e6b90-0x73e6bef inclusive
// range: 0x73e6c14-0x73e6c17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e6818 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e68f0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6980 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6ae8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6b54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6bec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6c14 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
MessagePack_Formatters_DecimalFormatter__Deserialize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  void *__s;
  undefined1 auVar11 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  char local_110 [9];
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  uint local_ec;
  long local_e8;
  uint local_dc;
  undefined1 local_d8 [16];
  int local_c4;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_59;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520db9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091c4268);
    FUN_03f5c2a4(&DAT_091c8160);
    FUN_03f5c2a4(&DAT_091d2f08);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b9710);
    FUN_03f5c2a4(&DAT_091b9718);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091ba930);
    FUN_03f5c2a4(&DAT_0918c978);
    DAT_09520db9 = 1;
  }
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_c4 = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_ec = 0;
  MessagePack_MessagePackReader__ReadStringSequence(local_110,param_2,0);
  local_59 = uStack_f8;
  if (local_110[0] == '\0') {
    local_110[0] = -0x40;
    uVar7 = FUN_03f5c42c(DAT_095353f0,local_110);
    thunk_FUN_03fc39d4(&DAT_09188148);
    FUN_039afb80();
    uVar8 = MessagePack_MessagePackCode__ToFormatName(0xc0,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09211dc8);
    uVar8 = System_String__Format(uVar6,uVar7,uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar7 = thunk_FUN_03f9944c();
  }
  else {
    lStack_b8 = CONCAT71(uStack_ff,uStack_100);
    local_c0 = CONCAT71(uStack_107,local_110[8]);
    local_b0 = uStack_f8;
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (local_c0 != lStack_b8) {
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = FUN_05fdc318(&local_c0,DAT_091b9720);
      if (0x7fffffff < (long)uVar2) {
        uVar7 = FUN_03f5c560();
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,DAT_091c8160);
        }
        goto LAB_073e6c14;
      }
      uVar10 = (uint)uVar2;
      if ((int)uVar10 < 0x80) {
        if ((uVar2 & 0xffffffff) == 0) {
          __s = (void *)0x0;
        }
        else {
          __s = (void *)((long)&local_120 - ((long)(int)uVar10 + 0xfU & 0xfffffffffffffff0));
        }
        memset(__s,0,(long)(int)uVar10);
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        FUN_04a6dbe8(&local_c0,__s,uVar2 & 0xffffffff,DAT_091c4268);
        auVar11 = FUN_06108530(__s,uVar2 & 0xffffffff,DAT_091ba930);
        if (*(int *)(DAT_0918c978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Buffers_Text_Utf8Parser__TryParse
                          (auVar11._0_8_,auVar11._8_8_,&local_90,&local_dc,0,0);
        if ((uVar2 & 1) == 0) {
LAB_073e6b98:
          thunk_FUN_03fc39d4(&DAT_09188180);
          uVar7 = thunk_FUN_03f9944c();
          puVar9 = &DAT_091fd780;
          goto LAB_073e6bb4;
        }
        uVar7 = local_90;
        uVar8 = uStack_88;
        if (local_dc != uVar10) goto LAB_073e6aa8;
      }
      else {
        if (*(int *)(DAT_09175020 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = DAT_09197190;
        lVar3 = *(long *)(DAT_09197190 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(lVar4 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        plVar5 = (long *)**(long **)(lVar4 + 0xb8);
        if (plVar5 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_073e6c14;
        }
        local_e8 = (**(code **)(*plVar5 + 0x178))
                             (plVar5,uVar2 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x180));
        local_110[0] = '\0';
        local_110[1] = '\0';
        local_110[2] = '\0';
        local_110[3] = '\0';
        local_110[4] = '\0';
        local_110[5] = '\0';
        local_110[6] = '\0';
        local_110[7] = '\0';
        local_110[8] = (char)&local_e8;
        uStack_107 = (undefined7)((ulong)&local_e8 >> 8);
        auVar11 = FUN_0610892c(local_e8,DAT_091ba938);
        FUN_04a6dbe8(&local_c0,auVar11._0_8_,auVar11._8_8_,DAT_091c4268);
        lVar4 = local_e8;
        if (*(long *)(DAT_091d2f08 + 0x38) == 0) {
          FUN_03f95ac8();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if (*(uint *)(lVar4 + 0x18) < uVar10) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        auVar11 = FUN_06108530(lVar4 + 0x20,uVar2 & 0xffffffff,DAT_091ba930);
        if (*(int *)(DAT_0918c978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Buffers_Text_Utf8Parser__TryParse
                          (auVar11._0_8_,auVar11._8_8_,&local_a0,&local_ec,0,0);
        if ((uVar2 & 1) == 0) {
          FUN_03eab060(local_110);
          goto LAB_073e6b98;
        }
        if (local_ec != uVar10) {
          thunk_FUN_03fc39d4(&DAT_09188180);
          uVar7 = thunk_FUN_03f9944c();
          uVar8 = thunk_FUN_03fc39d4(&DAT_09211da8);
          MessagePack_MessagePackSerializationException___ctor(uVar7,uVar8,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091c8160);
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,uVar8);
          }
          goto LAB_073e6c14;
        }
        uStack_118 = uStack_98;
        local_120 = local_a0;
        FUN_03eab060(local_110);
        uVar7 = local_120;
        uVar8 = uStack_118;
      }
LAB_073e69fc:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        auVar11._8_8_ = uVar8;
        auVar11._0_8_ = uVar7;
        return auVar11;
      }
      goto LAB_073e6c14;
    }
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_d8 = FUN_05fdc42c(&local_c0,DAT_091b9710);
    auVar11 = FUN_04a6d544(local_d8,DAT_091b9650);
    if (*(int *)(DAT_0918c978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Buffers_Text_Utf8Parser__TryParse
                      (auVar11._0_8_,auVar11._8_8_,&local_80,&local_c4,0,0);
    if ((uVar2 & 1) == 0) goto LAB_073e6b98;
    uVar7 = local_80;
    uVar8 = uStack_78;
    if (local_c4 == auVar11._8_4_) goto LAB_073e69fc;
LAB_073e6aa8:
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar7 = thunk_FUN_03f9944c();
    puVar9 = &DAT_09211da8;
LAB_073e6bb4:
    uVar8 = thunk_FUN_03fc39d4(puVar9);
  }
  MessagePack_MessagePackSerializationException___ctor(uVar7,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c8160);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
LAB_073e6c14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

