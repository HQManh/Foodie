// rea decompile_all
// name: MessagePack.MessagePackSerializer$$TryDecompress
// address: 0x7391c90
// body: available
// range: 0x7391c90-0x73923e7 inclusive
// range: 0x7392460-0x7392463 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7392114 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392228 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392334 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739235c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392398 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73923ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73923c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73923e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7392460 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined4 MessagePack_MessagePackSerializer__TryDecompress(void *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  long *plStack_360;
  undefined8 local_358;
  char local_350 [144];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  long local_2a8;
  undefined1 auStack_2a0 [144];
  undefined8 local_210;
  long *plStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d0 [144];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [144];
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_09520ae2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971a0);
    FUN_03f5c2a4(&DAT_09175030);
    FUN_03f5c2a4(&DAT_09179fa0);
    FUN_03f5c2a4(&DAT_091d3650);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b96f0);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba918);
    DAT_09520ae2 = 1;
  }
  memset(auStack_120,0,0x90);
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  uStack_130 = 0;
  memset(auStack_1d0,0,0x90);
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_210 = 0;
  plStack_208 = (long *)0x0;
  local_200 = 0;
  memset(auStack_2a0,0,0x90);
  local_2b0 = 0;
  local_2a8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  uVar7 = MessagePack_MessagePackReader__get_End(param_1);
  uVar6 = 0;
  if ((uVar7 & 1) == 0) {
    cVar3 = MessagePack_MessagePackReader__get_NextMessagePackType(param_1);
    if (cVar3 == '\t') {
      memcpy(auStack_120,param_1,0x90);
      cVar3 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(auStack_120);
      if (cVar3 != 'c') goto LAB_07391f0c;
      MessagePack_MessagePackReader__ReadExtensionFormat(&local_140,param_1);
      plStack_208 = (long *)uStack_130;
      local_210 = uStack_138;
      local_200 = local_128;
      memset(local_350,0,0x90);
      MessagePack_MessagePackReader___ctor(local_350,&local_210);
      memcpy(auStack_1d0,local_350,0x90);
      uVar4 = MessagePack_MessagePackReader__ReadInt32(auStack_1d0);
      MessagePack_MessagePackReader__get_Sequence(&local_368,auStack_1d0);
      plStack_208 = plStack_360;
      local_210 = local_368;
      local_200 = local_358;
      auVar18 = MessagePack_MessagePackReader__get_Position(auStack_1d0);
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04c253a0(&local_380,&local_210,auVar18._0_8_,auVar18._8_8_,DAT_091b96f0);
      uStack_1e8 = uStack_378;
      local_1f0 = local_380;
      local_1e0 = local_370;
      if (param_2 != (long *)0x0) {
        lVar13 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_09179fa0) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_073921fc;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09179fa0,2);
LAB_073921fc:
        auVar19 = (*(code *)*puVar8)(param_2,uVar4,puVar8[1]);
        if (auVar19._8_4_ < uVar4) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if (*(int *)(DAT_09188188 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = MessagePack_MessagePackSerializer__LZ4Operation
                          (&local_1f0,auVar19._0_8_,uVar4,
                           *(undefined8 *)(*(long *)(DAT_09188188 + 0xb8) + 0x10));
        lVar13 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_09179fa0) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_073922c8;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09179fa0,0);
LAB_073922c8:
        (*(code *)*puVar8)(param_2,uVar6,puVar8[1]);
        uVar6 = 1;
        goto LAB_073922dc;
      }
LAB_073923b0:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07392460;
    }
LAB_07391f0c:
    cVar3 = MessagePack_MessagePackReader__get_NextMessagePackType(param_1);
    if (cVar3 == '\a') {
      memcpy(auStack_2a0,param_1,0x90);
      iVar5 = MessagePack_MessagePackReader__ReadArrayHeader(auStack_2a0);
      if (iVar5 != 0) {
        cVar3 = MessagePack_MessagePackReader__get_NextMessagePackType(auStack_2a0);
        if ((cVar3 == '\t') &&
           (cVar3 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(auStack_2a0),
           cVar3 == 'b')) {
          memcpy(param_1,auStack_2a0,0x90);
          thunk_FUN_03f5d7b8((long)param_1 + 8,0);
          if (iVar5 == -0x80000000) {
            uVar11 = FUN_03f5c560();
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar11,DAT_091d3650);
            }
            goto LAB_07392460;
          }
          if (*(int *)(DAT_09175030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar9 = (long *)FUN_03eaaf0c(DAT_091971a0);
          if (plVar9 != (long *)0x0) {
            uVar7 = (ulong)(iVar5 - 1);
            local_2a8 = (**(code **)(*plVar9 + 0x178))
                                  (plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x180));
            plStack_360 = &local_2a8;
            local_368 = 0;
            if (1 < iVar5) {
              uVar16 = 0;
              do {
                lVar13 = local_2a8;
                uVar6 = MessagePack_MessagePackReader__ReadInt32(param_1);
                if (lVar13 == 0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_07392460;
                }
                if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  goto LAB_07392460;
                }
                lVar1 = uVar16 * 4;
                uVar16 = uVar16 + 1;
                *(undefined4 *)(lVar13 + lVar1 + 0x20) = uVar6;
              } while (uVar7 != uVar16);
              if (1 < iVar5) {
                uVar16 = 0;
                puVar8 = (undefined8 *)((ulong)local_350 | 1);
                puVar17 = (undefined8 *)((ulong)&local_90 | 7);
                do {
                  if (local_2a8 == 0) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_07392460;
                  }
                  if (*(uint *)(local_2a8 + 0x18) <= uVar16) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    goto LAB_07392460;
                  }
                  uVar4 = *(uint *)(local_2a8 + uVar16 * 4 + 0x20);
                  MessagePack_MessagePackReader__ReadBytes(local_350,param_1);
                  local_90 = *puVar8;
                  uStack_88 = (undefined7)puVar8[1];
                  local_79 = (undefined1)*(undefined8 *)((long)puVar8 + 0x17);
                  uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
                  uStack_81 = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
                  uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
                  if (local_350[0] == '\0') {
                    thunk_FUN_03fc39d4(&DAT_091d3598);
                    uVar11 = FUN_04c10508();
                    uVar12 = thunk_FUN_03fc39d4(&DAT_091d3650);
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar11,uVar12);
                    }
                    goto LAB_07392460;
                  }
                  uStack_2b8 = puVar17[1];
                  local_2c0 = *puVar17;
                  local_2b0 = puVar17[2];
                  if (param_2 == (long *)0x0) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_07392460;
                  }
                  lVar13 = *param_2;
                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == DAT_09179fa0) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_073920e8;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_09179fa0,2);
LAB_073920e8:
                  auVar19 = (*(code *)*puVar10)(param_2,uVar4,puVar10[1]);
                  if (auVar19._8_4_ < uVar4) {
                    /* WARNING: Subroutine does not return */
                    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
                  }
                  if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
                    FUN_03f95a6c();
                  }
                  if (*(int *)(DAT_09188188 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar6 = MessagePack_MessagePackSerializer__LZ4Operation
                                    (&local_2c0,auVar19._0_8_,uVar4,
                                     *(undefined8 *)(*(long *)(DAT_09188188 + 0xb8) + 0x10));
                  lVar13 = *param_2;
                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == DAT_09179fa0) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_073921b8;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_09179fa0,0);
LAB_073921b8:
                  (*(code *)*puVar10)(param_2,uVar6,puVar10[1]);
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar7);
              }
            }
            uVar6 = 1;
            FUN_03eaaf88(&local_368);
            goto LAB_073922dc;
          }
          goto LAB_073923b0;
        }
      }
    }
    uVar6 = 0;
  }
LAB_073922dc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar6;
  }
LAB_07392460:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

