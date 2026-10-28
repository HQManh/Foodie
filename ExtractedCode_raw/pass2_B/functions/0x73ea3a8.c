// rea decompile_all
// name: MessagePack.Formatters.TypelessFormatter$$Deserialize
// address: 0x73ea3a8
// body: available
// range: 0x73ea3a8-0x73ea99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ea934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea958 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea994 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea998 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Formatters_TypelessFormatter__Deserialize
          (undefined8 param_1,void *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  char local_1c0 [9];
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  undefined8 local_110;
  undefined1 auStack_100 [144];
  undefined7 local_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520ddc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091971b8);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_091c4268);
    FUN_03f5c2a4(&DAT_09183e90);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_091d3058);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b9710);
    FUN_03f5c2a4(&DAT_091b9718);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091dc630);
    DAT_09520ddc = 1;
  }
  memset(auStack_100,0,0x90);
  local_120 = 0;
  lStack_118 = 0;
  local_110 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_70 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_59 = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar2 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar2 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    uVar10 = 0;
    goto LAB_073ea6cc;
  }
  cVar2 = MessagePack_MessagePackReader__get_NextMessagePackType(param_2,0);
  if (cVar2 == '\t') {
    MessagePack_MessagePackReader__CreatePeekReader(local_1c0,param_2,0);
    memcpy(auStack_100,local_1c0,0x90);
    cVar2 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(auStack_100,0);
    if (cVar2 != 'd') goto LAB_073ea634;
    memcpy(param_2,auStack_100,0x90);
    thunk_FUN_03f5d7b8((long)param_2 + 8,0);
    MessagePack_MessagePackReader__ReadStringSequence(local_1c0,param_2,0);
    uStack_68 = uStack_1b7;
    local_70 = (undefined7)local_1c0._1_8_;
    uStack_69 = SUB81(local_1c0._1_8_,7);
    local_59 = (undefined1)uStack_1a8;
    uStack_58 = (undefined7)((ulong)uStack_1a8 >> 8);
    uStack_61 = uStack_1b0;
    uStack_60 = uStack_1af;
    if (local_1c0[0] == '\0') {
      thunk_FUN_03fc39d4(&DAT_091d35b8);
      uVar10 = thunk_FUN_04c10778();
      uVar8 = thunk_FUN_03fc39d4(&DAT_091dc630);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,uVar8);
      }
      goto LAB_073ea998;
    }
    lStack_118 = CONCAT71(uStack_1af,uStack_1b0);
    local_120 = CONCAT71(uStack_1b7,uStack_69);
    local_110 = uStack_1a8;
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (local_120 != lStack_118) {
LAB_073ea6f8:
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = DAT_09197190;
      lVar6 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      plVar7 = (long *)**(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0917e560);
      }
      lVar11 = FUN_05fdc318(&local_120,DAT_091b9720);
      if (lVar11 < 0x80000000) {
        if (plVar7 == (long *)0x0) goto LAB_073ea924;
        lVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x180));
        auVar12 = FUN_0610892c(lVar11,DAT_091ba938);
        FUN_04a6dbe8(&local_120,auVar12._0_8_,auVar12._8_8_,DAT_091c4268);
        uVar3 = FUN_05fdc318(&local_120,DAT_091b9720);
        if ((long)uVar3 < 0x80000000) {
          if (*(int *)(DAT_09175040 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = FUN_050c5f88(&local_130,lVar11,0,uVar3 & 0xffffffff,DAT_091971b8);
          goto LAB_073ea860;
        }
      }
      uVar10 = FUN_03f5c560();
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,DAT_091dc630);
      }
      goto LAB_073ea998;
    }
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar12 = FUN_05fdc42c(&local_120,DAT_091b9710);
    uVar3 = FUN_04c07544(auVar12._0_8_,auVar12._8_8_,&local_130,DAT_091d3058);
    if ((uVar3 & 1) == 0) goto LAB_073ea6f8;
    lVar11 = 0;
LAB_073ea860:
    uVar10 = MessagePack_Formatters_TypelessFormatter__DeserializeByTypeName
                       (uVar3,local_130,uStack_128,param_2,param_3);
    if (lVar11 != 0) {
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = DAT_09197190;
      lVar5 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      plVar7 = (long *)**(long **)(lVar6 + 0xb8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x188))(plVar7,lVar11,0,*(undefined8 *)(*plVar7 + 400));
        goto LAB_073ea6cc;
      }
      goto LAB_073ea924;
    }
  }
  else {
LAB_073ea634:
    if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)**(undefined8 **)(DAT_09183e90 + 0xb8);
    if (plVar7 == (long *)0x0) {
LAB_073ea924:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_073ea998;
    }
    lVar11 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b1e0) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_073ea6b4;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b1e0,1);
LAB_073ea6b4:
    uVar10 = (*(code *)*puVar4)(plVar7,param_2,param_3,puVar4[1]);
  }
LAB_073ea6cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar10;
  }
LAB_073ea998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

