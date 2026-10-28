// rea decompile_all
// name: MessagePack.MessagePackSerializer$$ToJsonCore
// address: 0x739356c
// body: available
// range: 0x739356c-0x739438b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7393b78 to 0x73951e0 MessagePack.MessagePackSerializer$$WriteJsonString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7393e20 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73942c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73942d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739437c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394380 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07393e1c) */

void MessagePack_MessagePackSerializer__ToJsonCore(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *plStack_d8;
  int *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *plStack_a8;
  int *local_a0;
  undefined8 local_98;
  int local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_09520aeb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_091c00c8);
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_09182128);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188148);
    FUN_03f5c2a4(&DAT_091d3640);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091b9708);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918b438);
    FUN_03f5c2a4(&DAT_09225ef8);
    FUN_03f5c2a4(&DAT_09225ed0);
    FUN_03f5c2a4(&DAT_092201d0);
    FUN_03f5c2a4(&DAT_0920b300);
    FUN_03f5c2a4(&DAT_09226aa0);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091f6e08);
    FUN_03f5c2a4(&DAT_09224438);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_091f6d50);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09520aeb = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_a0 = (int *)0x0;
  local_98 = 0;
  local_b0 = 0;
  plStack_a8 = (long *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  bVar4 = MessagePack_MessagePackReader__get_NextMessagePackType(param_1);
  if (bVar4 < 5) {
    if (bVar4 < 3) {
      if (bVar4 != 1) {
        if (bVar4 != 2) {
LAB_073942d8:
          uVar6 = MessagePack_MessagePackReader__get_NextCode(param_1);
          local_e0 = CONCAT71(local_e0._1_7_,uVar6);
          uVar10 = FUN_03f5c42c(DAT_095353f0,&local_e0);
          uVar8 = MessagePack_MessagePackReader__get_NextCode(local_68);
          thunk_FUN_03fc39d4(&DAT_09188148);
          FUN_039afb80();
          uVar13 = MessagePack_MessagePackCode__ToFormatName(uVar8);
          uVar14 = thunk_FUN_03fc39d4(&DAT_09218e88);
          uVar10 = System_String__Format(uVar14,uVar10,uVar13,0);
          thunk_FUN_03fc39d4(&DAT_09188180);
          uVar13 = thunk_FUN_03f9944c();
          MessagePack_MessagePackSerializationException___ctor(uVar13,uVar10);
          uVar10 = thunk_FUN_03fc39d4(&DAT_091d3640);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar13,uVar10);
        }
        uVar9 = MessagePack_MessagePackReader__TrySkip(param_1);
        if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
        }
        if (param_2 != (long *)0x0) {
          uVar13 = *(undefined8 *)(*param_2 + 0x280);
          UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x278);
          uVar10 = DAT_09220040;
          goto LAB_07393b04;
        }
        goto LAB_073942c0;
      }
      uVar8 = MessagePack_MessagePackReader__get_NextCode(param_1);
      if (*(int *)(DAT_09188148 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188148);
      }
      uVar9 = MessagePack_MessagePackCode__IsSignedInteger(uVar8);
      if ((uVar9 & 1) == 0) {
        local_78 = MessagePack_MessagePackReader__ReadUInt64(param_1);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar10 = System_UInt64__ToString(&local_78,uVar10,0);
      }
      else {
        local_70 = MessagePack_MessagePackReader__ReadInt64(param_1);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar10 = System_Int64__ToString(&local_70,uVar10,0);
      }
    }
    else {
      if (bVar4 == 3) {
        uVar9 = MessagePack_MessagePackReader__ReadBoolean(param_1);
        if (param_2 != (long *)0x0) {
          puVar2 = &DAT_09224438;
          if ((uVar9 & 1) == 0) {
            puVar2 = &DAT_0921b558;
          }
          uVar13 = *(undefined8 *)(*param_2 + 0x280);
          UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x278);
          uVar10 = *puVar2;
LAB_07393b04:
                    /* WARNING: Could not recover jumptable at 0x07393b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_2,uVar10,uVar13);
          return;
        }
        goto LAB_073942c0;
      }
      if (bVar4 != 4) goto LAB_073942d8;
      cVar5 = MessagePack_MessagePackReader__get_NextCode(param_1);
      if (cVar5 == -0x36) {
        local_7c = MessagePack_MessagePackReader__ReadSingle();
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar10 = System_Single__ToString(&local_7c,DAT_0920b300,uVar10,0);
      }
      else {
        local_88 = MessagePack_MessagePackReader__ReadDouble(param_1);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar10 = System_Double__ToString(&local_88,DAT_0920b300,uVar10,0);
      }
    }
joined_r0x07393908:
    if (param_2 == (long *)0x0) {
LAB_073942c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = *param_2;
LAB_07394290:
    (**(code **)(lVar15 + 0x278))(param_2,uVar10,*(undefined8 *)(lVar15 + 0x280));
  }
  else {
    if (bVar4 < 7) {
      if (bVar4 == 5) {
        uVar10 = FUN_0642e0c8(param_1,0);
        if (*(int *)(DAT_09188188 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188188);
        }
        MessagePack_MessagePackSerializer__WriteJsonString(uVar10,param_2);
        return;
      }
      if (bVar4 != 6) goto LAB_073942d8;
      if (*(int *)(DAT_09182128 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09182128 + 0xb8) != 0) {
        auVar16 = MessagePack_Formatters_ByteArraySegmentFormatter__Deserialize
                            (**(long **)(DAT_09182128 + 0xb8),param_1,param_3,0);
        lVar15 = auVar16._0_8_;
        if (*(int *)(DAT_09175040 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = DAT_091f6d50;
        lVar3 = DAT_091c00c8;
        if (lVar15 == 0) {
          lVar15 = *(long *)(DAT_091c00c8 + 0x38);
          if (lVar15 == 0) {
            FUN_03f95ac8(DAT_091c00c8);
            lVar15 = *(long *)(lVar3 + 0x38);
          }
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03f95a6c();
          }
          if (*(int *)(lVar15 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar15 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03f95a6c();
          }
          lVar15 = **(long **)(lVar15 + 0xb8);
        }
        if (*(int *)(DAT_09175040 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_Convert__ToBase64String
                           (lVar15,auVar16._8_8_ & 0xffffffff,auVar16._8_8_ >> 0x20,0);
        uVar10 = System_String__Concat(uVar10,uVar13,DAT_091f6d50,0);
        if (param_2 != (long *)0x0) {
          uVar13 = *(undefined8 *)(*param_2 + 0x280);
          UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x278);
          goto LAB_07393b04;
        }
      }
      goto LAB_073942c0;
    }
    if (bVar4 == 7) {
      iVar7 = MessagePack_MessagePackReader__ReadArrayHeader(param_1);
      if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) goto LAB_073942c0;
      MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_1);
      plStack_d8 = &local_68;
      local_d0 = &local_8c;
      local_e0 = 0;
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*param_2 + 0x278))(param_2,DAT_092139f8,*(undefined8 *)(*param_2 + 0x280));
      if (0 < iVar7) {
        do {
          lVar15 = local_68;
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_MessagePackSerializer__ToJsonCore(lVar15,param_2,param_3);
          if (iVar7 != 1) {
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f86d8,*(undefined8 *)(*param_2 + 0x280));
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      (**(code **)(*param_2 + 0x278))(param_2,DAT_09214720,*(undefined8 *)(*param_2 + 0x280));
    }
    else {
      if (bVar4 != 8) {
        if (bVar4 != 9) goto LAB_073942d8;
        uVar9 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(param_1);
        uVar1 = (uint)uVar9 & 0xff;
        if (uVar1 == 100) {
          plVar11 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor(plVar11,0);
          plVar12 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor(plVar12,0);
          auVar16 = MessagePack_MessagePackReader__get_Position(param_1);
          uVar10 = thunk_FUN_03f9944c(DAT_0918b438);
          System_IO_StringWriter___ctor(uVar10,plVar12,0);
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_MessagePackSerializer__ToJsonCore(param_1,uVar10,param_3);
          MessagePack_MessagePackReader__get_Sequence(&local_e0,param_1);
          plStack_a8 = plStack_d8;
          local_b0 = local_e0;
          local_a0 = local_d0;
          auVar17 = MessagePack_MessagePackReader__get_Position(local_68);
          if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_05fef254(&local_f8,&local_b0,auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,
                       DAT_091b9708);
          plStack_a8 = (long *)uStack_f0;
          local_b0 = local_f8;
          local_a0 = (int *)local_e8;
          lVar15 = FUN_05fdc318(&local_b0,DAT_091b9720);
          if (0x7fffffff < lVar15) goto LAB_073942c4;
          if ((long)(uVar9 >> 0x20) <= (long)(int)lVar15) {
            if (plVar12 == (long *)0x0) goto LAB_073942c0;
            uVar10 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            uVar10 = System_String__Concat(DAT_09225ef8,uVar10,DAT_09226aa0,0);
            goto joined_r0x07393908;
          }
          cVar5 = MessagePack_MessagePackReader__get_NextMessagePackType(local_68);
          if (1 < (byte)(cVar5 - 7U)) {
            if (plVar11 == (long *)0x0) goto LAB_073942c0;
            System_Text_StringBuilder__Append(plVar11,DAT_09225ed0,0);
          }
          lVar15 = local_68;
          uVar10 = thunk_FUN_03f9944c(DAT_0918b438);
          System_IO_StringWriter___ctor(uVar10,plVar11,0);
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_MessagePackSerializer__ToJsonCore(lVar15,uVar10,param_3);
          if (cVar5 == '\a') {
LAB_07394090:
            if (plVar11 == (long *)0x0) goto LAB_073942c0;
          }
          else {
            if (plVar12 == (long *)0x0) goto LAB_073942c0;
            System_Text_StringBuilder__Insert(plVar12,0,DAT_091f6e08,0);
            if (cVar5 == '\b') goto LAB_07394090;
            if (plVar11 == (long *)0x0) goto LAB_073942c0;
            System_Text_StringBuilder__Append(plVar11,DAT_09226aa0,0);
          }
          iVar7 = System_Text_StringBuilder__get_Length(plVar11,0);
          if (iVar7 < 3) {
            if (plVar12 == (long *)0x0) goto LAB_073942c0;
          }
          else {
            if (plVar12 == (long *)0x0) goto LAB_073942c0;
            System_Text_StringBuilder__Append(plVar12,DAT_091f86d8,0);
          }
          uVar10 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          System_Text_StringBuilder__Insert(plVar11,1,uVar10,0);
          uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          goto joined_r0x07393908;
        }
        if (uVar1 != 0xff) {
          MessagePack_MessagePackReader__ReadRaw(&local_c8,param_1,uVar9 >> 0x20);
          if (param_2 != (long *)0x0) {
            (**(code **)(*param_2 + 0x278))(param_2,DAT_092139f8,*(undefined8 *)(*param_2 + 0x280));
            (**(code **)(*param_2 + 600))
                      (param_2,(int)(char)uVar9,*(undefined8 *)(*param_2 + 0x260));
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f86d8,*(undefined8 *)(*param_2 + 0x280));
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f6d50,*(undefined8 *)(*param_2 + 0x280));
            uVar10 = FUN_04a58db0(&local_c8,DAT_091c4278);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            uVar10 = System_Convert__ToBase64String(uVar10,0);
            (**(code **)(*param_2 + 0x278))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x280));
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f6d50,*(undefined8 *)(*param_2 + 0x280));
            (**(code **)(*param_2 + 0x278))(param_2,DAT_09214720,*(undefined8 *)(*param_2 + 0x280));
            return;
          }
          goto LAB_073942c0;
        }
        local_98 = MessagePack_MessagePackReader__ReadDateTime(param_1,uVar9);
        if (param_2 == (long *)0x0) goto LAB_073942c0;
        (**(code **)(*param_2 + 0x278))(param_2,DAT_091f6d50,*(undefined8 *)(*param_2 + 0x280));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar10 = System_DateTime__ToString(&local_98,DAT_092201d0,uVar10,0);
        (**(code **)(*param_2 + 0x278))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x280));
        lVar15 = *param_2;
        uVar10 = DAT_091f6d50;
        goto LAB_07394290;
      }
      iVar7 = MessagePack_MessagePackReader__ReadMapHeader(param_1);
      if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) goto LAB_073942c0;
      MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_1);
      plStack_d8 = &local_68;
      local_d0 = &local_8c;
      local_e0 = 0;
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*param_2 + 0x278))(param_2,DAT_09225ed0,*(undefined8 *)(*param_2 + 0x280));
      if (0 < iVar7) {
        do {
          cVar5 = MessagePack_MessagePackReader__get_NextMessagePackType(local_68);
          lVar15 = local_68;
          if ((byte)(cVar5 - 5U) < 2) {
            if (*(int *)(DAT_09188188 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_MessagePackSerializer__ToJsonCore(lVar15,param_2,param_3);
          }
          else {
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f6d50,*(undefined8 *)(*param_2 + 0x280));
            lVar15 = local_68;
            if (*(int *)(DAT_09188188 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_MessagePackSerializer__ToJsonCore(lVar15,param_2,param_3);
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f6d50,*(undefined8 *)(*param_2 + 0x280));
          }
          (**(code **)(*param_2 + 0x278))(param_2,DAT_091f9f58,*(undefined8 *)(*param_2 + 0x280));
          lVar15 = local_68;
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_MessagePackSerializer__ToJsonCore(lVar15,param_2,param_3);
          if (iVar7 != 1) {
            (**(code **)(*param_2 + 0x278))(param_2,DAT_091f86d8,*(undefined8 *)(*param_2 + 0x280));
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      (**(code **)(*param_2 + 0x278))(param_2,DAT_09226aa0,*(undefined8 *)(*param_2 + 0x280));
    }
    local_8c = *(int *)(local_68 + 0x88);
    if (local_8c == -0x80000000) {
LAB_073942c4:
      uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,DAT_091d3640);
    }
    *(int *)(local_68 + 0x88) = local_8c + -1;
  }
  return;
}

