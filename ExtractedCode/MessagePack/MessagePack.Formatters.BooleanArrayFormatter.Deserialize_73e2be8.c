// rea decompile_all
// name: MessagePack.Formatters.BooleanArrayFormatter$$Deserialize
// address: 0x73e2be8
// body: available
// range: 0x73e2be8-0x73e2fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e2e44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e2ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e2f64 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e2f68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e2fe0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Formatters_BooleanArrayFormatter__Deserialize
               (undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_ec [4];
  int local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09520d92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00c0);
    FUN_03f5c2a4(&DAT_091c40f8);
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091a2470);
    FUN_03f5c2a4(&DAT_091a2478);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b96e8);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091b9790);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091de190);
    DAT_09520d92 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_80 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar2 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar2 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar11 = 0;
  }
  else {
    iVar3 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar11 = DAT_091c00c0;
    if (iVar3 == 0) {
      lVar10 = *(long *)(DAT_091c00c0 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c00c0);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
    }
    else {
      lVar11 = FUN_03f5c394(DAT_0917fc40,iVar3);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_073e2f68:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      MessagePack_MessagePackReader__ReadRaw(&local_e8,param_2,(long)iVar3,0);
      local_70 = CONCAT44(uStack_e4,local_e8);
      uStack_68 = uStack_e0;
      local_60 = local_d8;
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_05fdde6c(&local_b0,&local_70,DAT_091b96e8);
      iVar3 = 0;
      while (uVar5 = FUN_07195480(&local_b0,DAT_091a2470), (uVar5 & 1) != 0) {
        uStack_b8 = uStack_80;
        local_c0 = local_88;
        auVar12 = FUN_04a6d544(&local_c0,DAT_091b9650);
        local_d0 = auVar12;
        uVar5 = FUN_05ff6080(local_d0,DAT_091b9790);
        uVar6 = local_d0._8_8_;
        if ((uVar5 & 1) == 0) {
          if (local_d0._8_4_ == 0) goto LAB_073e2f68;
          uVar4 = MessagePack_Internal_UnsafeRefDeserializeHelper__Deserialize
                            (local_d0._0_8_,uVar6 & 0xffffffff,lVar11 + 0x20 + (long)iVar3,0);
          if (-1 < (int)uVar4) {
            if (uVar4 < (uint)local_d0._8_4_) {
              local_ec[0] = *(undefined1 *)(local_d0._0_8_ + (ulong)uVar4);
              uVar6 = FUN_03f5c42c(DAT_095353f0,local_ec);
              if (uVar4 < (uint)local_d0._8_4_) {
                uVar1 = *(undefined1 *)(local_d0._0_8_ + (ulong)uVar4);
                lVar11 = thunk_FUN_03fc39d4(&DAT_09188148);
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = MessagePack_MessagePackCode__ToFormatName(uVar1,0);
                if (0x7fffffff < (long)((ulong)uVar4 + (long)iVar3)) {
                  uVar6 = FUN_03f5c560();
                  uVar7 = thunk_FUN_03fc39d4(&DAT_091c40f8);
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,uVar7);
                }
                local_e8 = uVar4 + iVar3;
                uVar8 = FUN_03f5c42c(DAT_09535420,&local_e8);
                uVar9 = thunk_FUN_03fc39d4(&DAT_09211dc0);
                uVar6 = System_String__Format(uVar9,uVar6,uVar7,uVar8,0);
                thunk_FUN_03fc39d4(&DAT_09188180);
                uVar7 = thunk_FUN_03f9944c();
                MessagePack_MessagePackSerializationException___ctor(uVar7,uVar6,0);
                uVar6 = thunk_FUN_03fc39d4(&DAT_091c40f8);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar7,uVar6);
              }
            }
            goto LAB_073e2f68;
          }
          lVar10 = (long)iVar3 + (long)(int)local_d0._8_4_;
          iVar3 = local_d0._8_4_ + iVar3;
          if (lVar10 != (int)lVar10) {
            uVar6 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,DAT_091c40f8);
          }
        }
      }
    }
  }
  return lVar11;
}

