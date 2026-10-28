// rea decompile_all
// name: MessagePack.Formatters.PrimitiveObjectFormatter$$Deserialize
// address: 0x73e4b40
// body: available
// range: 0x73e4b40-0x73e55af inclusive
// range: 0x73e5644-0x73e5647 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e520c to 0x642e0c8 FUN_0642e0c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73e528c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e53b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e53cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e53e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e53fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5420 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5544 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5644 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; E
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073e5048) */
/* WARNING: Removing unreachable block (ram,0x073e5278) */
/* WARNING: Removing unreachable block (ram,0x073e5288) */

long * MessagePack_Formatters_PrimitiveObjectFormatter__Deserialize
                 (long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  byte local_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  if ((DAT_09520daf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_091cf140);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_09188148);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091d6510);
    DAT_09520daf = 1;
  }
  local_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  uStack_71 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_69 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a4 = 0;
  bVar3 = MessagePack_MessagePackReader__get_NextMessagePackType(param_2,0);
  lVar12 = DAT_091cf140;
  if (bVar3 < 5) {
    if (bVar3 < 3) {
      if (bVar3 != 1) {
        if (bVar3 == 2) {
          MessagePack_MessagePackReader__ReadNil(param_2,0);
LAB_073e5058:
          plVar13 = (long *)0x0;
          goto LAB_073e50cc;
        }
LAB_073e5424:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar14 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        local_c8 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
        uVar8 = FUN_03f5c42c(DAT_095353f0,&local_c8);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09212560);
LAB_073e5484:
        uVar8 = System_String__Format(uVar14,uVar9,uVar8,0);
        goto LAB_073e54fc;
      }
      uVar6 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
      if (*(int *)(DAT_09188148 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188148);
      }
      uVar19 = MessagePack_MessagePackCode__IsPositiveFixInt(uVar6,0);
      if ((uVar19 & 1) == 0) {
        if (*(int *)(DAT_09188148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar19 = MessagePack_MessagePackCode__IsNegativeFixInt(uVar6,0);
        if ((uVar19 & 1) == 0) {
          uVar1 = uVar6 & 0xff;
          if (uVar1 < 0xd0) {
            if (uVar1 < 0xce) {
              if (uVar1 == 0xcc) goto LAB_073e4db4;
              if (uVar1 == 0xcd) {
                uVar5 = MessagePack_MessagePackReader__ReadUInt16(param_2,0);
                uVar8 = DAT_09535418;
LAB_073e530c:
                local_c8 = (byte)uVar5;
                uStack_c7 = (undefined1)((ushort)uVar5 >> 8);
                goto LAB_073e50c4;
              }
            }
            else {
              if (uVar1 == 0xce) {
                uVar7 = MessagePack_MessagePackReader__ReadUInt32(param_2,0);
                uVar8 = DAT_09535428;
LAB_073e53a0:
                local_c8 = (byte)uVar7;
                uStack_c7 = (undefined1)((uint)uVar7 >> 8);
                uStack_c6 = (undefined2)((uint)uVar7 >> 0x10);
                goto LAB_073e50c4;
              }
              if (uVar1 == 0xcf) {
                uVar9 = MessagePack_MessagePackReader__ReadUInt64(param_2,0);
                uVar8 = DAT_09535448;
LAB_073e4cac:
                local_c8 = (byte)uVar9;
                uStack_c7 = (undefined1)((ulong)uVar9 >> 8);
                uStack_c6 = (undefined2)((ulong)uVar9 >> 0x10);
                uStack_c4 = (undefined4)((ulong)uVar9 >> 0x20);
                goto LAB_073e50c4;
              }
            }
          }
          else if (uVar1 < 0xd2) {
            if (uVar1 == 0xd0) goto LAB_073e5080;
            if (uVar1 == 0xd1) {
              uVar5 = MessagePack_MessagePackReader__ReadInt16(param_2,0);
              uVar8 = DAT_09535410;
              goto LAB_073e530c;
            }
          }
          else {
            if (uVar1 == 0xd2) {
              uVar7 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
              uVar8 = DAT_09535420;
              goto LAB_073e53a0;
            }
            if (uVar1 == 0xd3) {
              uVar9 = MessagePack_MessagePackReader__ReadInt64(param_2,0);
              uVar8 = DAT_09535440;
              goto LAB_073e4cac;
            }
          }
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar14 = System_Globalization_CultureInfo__get_CurrentCulture(0);
          local_c8 = (byte)uVar6;
          uVar8 = FUN_03f5c42c(DAT_095353f0,&local_c8);
          uVar9 = thunk_FUN_03fc39d4(&DAT_09212590);
          goto LAB_073e5484;
        }
LAB_073e5080:
        local_c8 = MessagePack_MessagePackReader__ReadSByte(param_2,0);
        uVar8 = DAT_09535408;
      }
      else {
LAB_073e4db4:
        local_c8 = MessagePack_MessagePackReader__ReadByte(param_2,0);
        uVar8 = DAT_095353f0;
      }
    }
    else if (bVar3 == 3) {
      local_c8 = MessagePack_MessagePackReader__ReadBoolean(param_2,0);
      local_c8 = local_c8 & 1;
      uVar8 = DAT_09535400;
    }
    else {
      if (bVar3 != 4) goto LAB_073e5424;
      cVar4 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
      if (cVar4 == -0x36) {
        uVar7 = MessagePack_MessagePackReader__ReadSingle(param_2,0);
        local_c8 = (byte)uVar7;
        uStack_c7 = (undefined1)((uint)uVar7 >> 8);
        uStack_c6 = (undefined2)((uint)uVar7 >> 0x10);
        uVar8 = DAT_09535450;
      }
      else {
        uVar8 = MessagePack_MessagePackReader__ReadDouble(param_2,0);
        local_c8 = (byte)uVar8;
        uStack_c7 = (undefined1)((ulong)uVar8 >> 8);
        uStack_c6 = (undefined2)((ulong)uVar8 >> 0x10);
        uStack_c4 = (undefined4)((ulong)uVar8 >> 0x20);
        uVar8 = DAT_09535458;
      }
    }
LAB_073e50c4:
    plVar13 = (long *)FUN_03f5c42c(uVar8,&local_c8);
  }
  else if (bVar3 < 7) {
    if (bVar3 == 5) {
      if ((param_3 != 0) && (plVar13 = *(long **)(param_3 + 0x10), plVar13 != (long *)0x0)) {
        lVar16 = *plVar13;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)(DAT_091cf140 + 0x20)) {
              lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(DAT_091cf140 + 0x50)) *
                                0x10 + 0x138;
              goto LAB_073e5170;
            }
            uVar19 = uVar19 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar19 != 0);
        }
        lVar16 = FUN_03f95da8(plVar13);
LAB_073e5170:
        lVar12 = FUN_03f5c420(*(undefined8 *)(lVar16 + 8),lVar12);
        plVar13 = (long *)(**(code **)(lVar12 + 8))(plVar13,lVar12);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
            plVar13 = (long *)FUN_0642e0c8(param_2,0);
            return plVar13;
          }
        }
        else {
          lVar12 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar19 != 0) {
            piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_0917b1f0) {
                puVar11 = (undefined8 *)(lVar12 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_073e52a0;
              }
              uVar19 = uVar19 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar19 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b1f0,1);
LAB_073e52a0:
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x073e52d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar13 = (long *)(*(code *)*puVar11)(plVar13,param_2,param_3,puVar11[1]);
            return plVar13;
          }
        }
        goto LAB_073e5644;
      }
      goto LAB_073e53ec;
    }
    if (bVar3 != 6) goto LAB_073e5424;
    MessagePack_MessagePackReader__ReadBytes(&local_c8,param_2,0);
    local_80 = CONCAT43(uStack_c4,CONCAT21(uStack_c6,uStack_c7));
    uStack_78 = uStack_bf;
    uStack_79 = uStack_c0;
    local_69 = (undefined1)uStack_b0;
    uStack_68 = (undefined7)((ulong)uStack_b0 >> 8);
    uStack_71 = uStack_b8;
    uStack_70 = uStack_b7;
    if (local_c8 == 0) goto LAB_073e5058;
    uStack_98 = CONCAT71(uStack_b7,uStack_b8);
    local_a0 = CONCAT71(uStack_bf,uStack_c0);
    local_90 = uStack_b0;
    plVar13 = (long *)FUN_04a58db0(&local_a0,DAT_091c4278);
  }
  else {
    if (bVar3 != 7) {
      if (bVar3 == 8) {
        uVar7 = MessagePack_MessagePackReader__ReadMapHeader(param_2,0);
        if (param_3 != 0) {
          if (*(long *)(param_3 + 0x28) != 0) {
            MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
            local_c8 = 0;
            uStack_c7 = 0;
            uStack_c6 = 0;
            uStack_c4 = 0;
            uStack_c0 = SUB81(&local_88,0);
            uStack_bf = (undefined7)((ulong)&local_88 >> 8);
            uStack_b8 = SUB81(&local_a4,0);
            uStack_b7 = (undefined7)((ulong)&local_a4 >> 8);
            plVar13 = (long *)(**(code **)(*param_1 + 0x198))
                                        (param_1,param_2,uVar7,param_3,
                                         *(undefined8 *)(*param_1 + 0x1a0));
            local_a4 = *(int *)(local_88 + 0x88);
            if (local_a4 == -0x80000000) goto LAB_073e5400;
            *(int *)(local_88 + 0x88) = local_a4 + -1;
            goto LAB_073e50cc;
          }
        }
        goto LAB_073e53ec;
      }
      if (bVar3 != 9) goto LAB_073e5424;
      uVar8 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(param_2,0);
      if ((((uint)uVar8 ^ 0xffffffff) & 0xff) == 0) {
        uVar9 = MessagePack_MessagePackReader__ReadDateTime(param_2,uVar8,0);
        uVar8 = DAT_09183548;
        goto LAB_073e4cac;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar9 = System_Globalization_CultureInfo__get_CurrentCulture(0);
      local_c8 = (byte)uVar8;
      uVar8 = FUN_03f5c42c(DAT_09535408,&local_c8);
      uVar14 = thunk_FUN_03fc39d4(&DAT_09202088);
      uVar15 = thunk_FUN_03fc39d4(&DAT_0920ad88);
      uVar8 = System_String__Format(uVar9,uVar14,uVar8,uVar15,0);
LAB_073e54fc:
      thunk_FUN_03fc39d4(&DAT_09188180);
      uVar9 = thunk_FUN_03f9944c();
      MessagePack_MessagePackSerializationException___ctor(uVar9,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091d6510);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar8);
      }
      goto LAB_073e5644;
    }
    uVar6 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar12 = DAT_091c0270;
    if (uVar6 != 0) {
      if (param_3 != 0) {
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar10 = (long *)FUN_04264fcc(uVar8,DAT_091ccf38);
        plVar13 = (long *)FUN_03f5c394(DAT_09180318,(ulong)uVar6);
        if (*(long *)(param_3 + 0x28) != 0) {
          MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
          local_c8 = 0;
          uStack_c7 = 0;
          uStack_c6 = 0;
          uStack_c4 = 0;
          uStack_c0 = SUB81(&local_88,0);
          uStack_bf = (undefined7)((ulong)&local_88 >> 8);
          uStack_b8 = SUB81(&local_a4,0);
          uStack_b7 = (undefined7)((ulong)&local_a4 >> 8);
          if (0 < (int)uVar6) {
            if (plVar10 == (long *)0x0) {
              if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_073e5644;
            }
            uVar19 = 0;
            do {
              lVar12 = local_88;
              lVar16 = *plVar10;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == DAT_0917b1e0) {
                    puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_073e4f50;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b1e0,1);
LAB_073e4f50:
              lVar12 = (*(code *)*puVar11)(plVar10,lVar12,param_3,puVar11[1]);
              if (plVar13 == (long *)0x0) {
                if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_073e5644;
              }
              if ((lVar12 != 0) &&
                 (lVar16 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar16 == 0)
                 ) {
                uVar8 = thunk_FUN_03fa6ef4();
                if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar8,0);
                }
                goto LAB_073e5644;
              }
              if (*(uint *)(plVar13 + 3) <= uVar19) {
                if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                goto LAB_073e5644;
              }
              plVar13[uVar19 + 4] = lVar12;
              thunk_FUN_03f5d7b8(plVar13 + uVar19 + 4,lVar12);
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar6);
          }
          local_a4 = *(int *)(local_88 + 0x88);
          if (local_a4 == -0x80000000) {
LAB_073e5400:
            uVar8 = FUN_03f5c560();
            if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar8,DAT_091d6510);
            }
            goto LAB_073e5644;
          }
          *(int *)(local_88 + 0x88) = local_a4 + -1;
          goto LAB_073e50cc;
        }
      }
LAB_073e53ec:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_073e5644;
    }
    lVar16 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar16 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar16 = *(long *)(lVar12 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_03f95a6c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    plVar13 = (long *)**(long **)(lVar12 + 0xb8);
  }
LAB_073e50cc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return plVar13;
  }
LAB_073e5644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

